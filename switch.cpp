#include <iostream>

using namespace std;

void switchfxn(int a, int b, int s)
{
    // cout << "Enter the a and b: ";
    // cin >> a >> b >> endl;
    // cout << "Enter 1 for add\n 2 for subtraction\n 3 for multipication\n 4 For divide :";
    // cin >> s;

    switch (s)
    {
    case 1:
        cout << " a + b: " << a + b;
        break;

    case 2:
        cout << " a - b :" << a - b;
        break;

    case 3:
        cout << " a * b :" << a * b;
        break;

    case 4:
        cout << " a / b : " << a / b;
        break;

    case 5:
        cout << "Entered is not the operation " << endl;
    }
}

int main()
{
    int a, b, s;
    cout << "switchfxn( 24 ,20 , 1)" << switchfxn(24, 20, 1) << endl;
    cout << "switchfxn(  23 ,122, 2)" << switchfxn(23, 122, 2) endl;
    cout << " switchfxn( 56, 2, 3 )" << switchfxn(56, 2, 3) << endl;
    cout << " switchfxn( 100,4, 4)" << switchfxn(100, 2, 4) << endl;
    cout << " switchfxn(  23 ,12, 5)" << switchfxn(23, 122, 5) << endl;

    return 0;
}