#include <iostream>
#include"Konto.h"


int main()
{
    Konto test1("Test1", 10000);
    Konto test2("Test2", 10);

    test1.display();
    test2.display();
    lower_balance(test1, 100);
    add_balance(test2, 10);
    test1.display();
    test2.display();
    lower_balance(test2, 100);
    add_balance(test1, 10);
    test1.display();
    test2.display();


}

