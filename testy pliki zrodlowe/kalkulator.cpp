#include <iostream>
#include <vector>
#include "funkcje.h"

using namespace std;

int main()
{

    vector<float> test_arr({ 1, 2, 3, 4, 5 });
    cout <<"Logarytm naturalny 1: " << logarytm_naturalny(1) << endl;
    cout <<"Odchylenie standardowe tablicy [1,2,3,4,5]: " << odchylenie_standardowe(test_arr)<<endl;
    cout << "Exponent liczby 3: " << exponent(3) << endl;






}
