#include "Konto.h"
#include <iostream>

Konto::Konto(std::string nazwa_i, int stan_konta_i)
	:nazwa{ nazwa_i }, stan_konta{ stan_konta_i }{};
Konto::Konto(std::string nazwa_i)
	:Konto(nazwa_i, 0) {};
Konto::Konto()
	:Konto("brak", 0) {};

void add_balance(Konto& item, int val) {

	item.stan_konta += val;
	std::cout << "Dodano " << val << " zl do konta o nazwie: " << item.nazwa << std::endl;

}

void lower_balance(Konto& item, int val) {
	if (item.stan_konta - val < 0) {
		std::cout << "Brak wystarczajacej ilosci pieniedzy na koncie" << std::endl;
		return;
	}
	item.stan_konta -= val;
	std::cout << "Odjeto " << val << " zl od konta o nazwie: " << item.nazwa << std::endl;
}