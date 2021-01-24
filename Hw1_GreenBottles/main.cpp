#include <iostream>

using namespace std;

int main()
{
    int GreenBottles = 10;

    cout << "There were " << GreenBottles << " green bottles" << endl;

#ifdef RemoveBottles      // in the debug configuration it will skip these and printout "There were 10 green bottles" 2 times  )
    GreenBottles--;       // but in release configuration it will not skip and print out "There were 10 green bottles" and "There were 9 green bottles" follow by the first line
#endif // RemoveBottles

    cout << "There were " << GreenBottles << " green bottles" << endl;

    return 0;
}
