#include <iostream>

using namespace std;
int main()
{
    int AA[10];
    for (int i = 0; i < 10; i++) {
        int x;
        cout << "Wpisz liczbe nr: " << i+1 << endl;
        cin >> x;
        AA[i] = x;
    }

    int ujemne{ 0 };
    for (auto x : AA) {
        if (x < 0) {
            ujemne++;
        }
    }
    int* BB = new int[ujemne];
    cout << "\nTablica liczb AA: ";
    int index{};
    for (auto x : AA) {
        if (x < 0) {
            BB[index] = x;
            index++;
        }
        cout << x << " ";
    }
    cout << endl;

    cout << "\nTablica liczb BB: ";

    for (int i = 0; i < ujemne; i++) {
        cout << BB[i] << " ";
    }

    cout << "\nLiczba pominiętych wartosci: " << ujemne;

 
}
