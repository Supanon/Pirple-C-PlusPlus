#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float price1;
    float price2;
    float price3;
    float total;

    cout << "enter a price" << endl;
    cin >> price1;

    cout << "enter a price" << endl;
    cin >> price2;

    cout << "enter a price" << endl;
    cin >> price3;

    total = price1 + price2 + price3;

    cout << setiosflags (ios::fixed);


    cout << "Price 1 is " << endl
         << "Price 2 is " << endl
         << "Price 3 is " << endl
         << setprecision(2)<<"Total price: " << total << endl
         << setw(10) << price1 << endl
         << setw(10) << price2 << endl
         << setw(10) << price3 << endl;

    return 0;
}
