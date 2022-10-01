

#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    cout << "5 + 9 = " + 5 + 9;
    int a = 8 - 3;
    
    if (a <= 10)
        cout << "a <= 10";
    else
        cout << "ERROR";

    int b =0;
    while (b >= 10)
    {
        cout << "Enter b >= 10: ";
        cin >> b;
    }



}
