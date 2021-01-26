#include <iostream>
#include <math.h> //Additional operators

using namespace std;

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;

    float x1 = 0;
    float x2 = 0;

    //Input from user
    cout << "enter the value for a " << endl;
    cin >> a;

    cout << "enter the value for b " << endl;
    cin >> b;

    cout << "enter the value for c " << endl;
    cin >> c;

    //Perform an equation X1
    //NOTE: if the value is negative. It can not perform a square root
    x1 = ((-1 * b) - sqrt((pow(b, 2) - (4 * a * c)))) / (2 * a);

    //Perform an equation X2
    x2 = ((-1 * b) + sqrt((pow(b, 2) - (4 * a * c)))) / (2 * a);

    //Display x2 follow by x1
    cout << "This quadratic has the following roots: X = " << x2 << endl << "X = " << x1 << endl;


    return 0;
}
