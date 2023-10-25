#include <iostream>

using namespace std;
class Produkt {
public:
    string nazwa{};
    float cena{};
    Produkt(string nazwa_i, float cena_i)
        :nazwa{ nazwa_i }, cena{ cena_i } {};
    Produkt()
        :Produkt("", 0) {};
};

void bubbleSort(Produkt arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].cena < arr[j + 1].cena) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

int main()
{
    
    Produkt tab[10];
    for (int i = 0; i < 10; i++) {
        float cena{};
        string nazwa{};
        cout << "Wpisz nazwe oraz cene produktu po spacji: ";
        cin >> nazwa >> cena;
        tab[i] = Produkt(nazwa, cena);
    }
    bubbleSort(tab, 10);
    for (auto x : tab) {
        cout << x.nazwa << " " << x.cena << endl;
    }
}
