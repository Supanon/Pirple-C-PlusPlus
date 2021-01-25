#include <iostream>

using namespace std;

int main()
{
    const int MINUTES_PER_HOUR = 60;
    int numHours = 10;
    int Total = MINUTES_PER_HOUR * numHours;
    //MINUTES_PER_HOUR++; //Since it is define as a const. It can not re-assign the value.
    numHours++; //Since it not define as a const. The value can be re-assign.
    cout << "There are " << Total << " minutes in " << numHours << " hours." << endl;

    unsigned int zeroHour = 0;
    zeroHour--;
    cout << "1 hour before zero hour is " << zeroHour << endl;
    // an unsigned int can only be positive, resulted = 4294967295
    return 0;
}
