#pragma once
#include<iostream>
class Konto
{
	friend void add_balance(Konto& item, int val);
	friend void lower_balance(Konto& item, int val);
private:
	std::string nazwa;
	int stan_konta;

public:
	Konto(std::string nazwa_i, int stan_konta_i);
	Konto(std::string nazwa_i);
	Konto();
	void display() {
		std::cout << "Nazwa uzytkownika: " << nazwa << "| Stan konta: " << stan_konta << std::endl;
	}
};

