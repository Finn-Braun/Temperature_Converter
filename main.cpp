#include <iostream>
#include <string>
using namespace std;
int main () {
    double degrees_celsius;
    double degrees_fahrenheit;
    char starting_units[20];
    cout << "What units are you starting from?" << endl;
    cin >> starting_units;


    if (starting_units[0] == 'c' || starting_units[0] == 'C') {
        cout << "How many degrees celsius?" << endl;
        cin >> degrees_celsius;
        degrees_fahrenheit = degrees_celsius * 9 / 5 + 32;
        cout << "That would be " << degrees_fahrenheit << " degrees fahrenheit.";

    } else if (starting_units[0] == 'f' || starting_units[0] == 'F') {
        cout << "How many degrees fahrenheit?" << endl;
        cin >> degrees_fahrenheit;
        degrees_celsius = ( degrees_fahrenheit - 32 ) * 5 / 9;
        cout << "That would be " << degrees_celsius << " degrees celsius.";
    } else {
        cout << "It looks like you might have made a typo.";
    }
    return 0;
}