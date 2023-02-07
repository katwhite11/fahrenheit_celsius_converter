#include <iostream>
#include <cstring>

using namespace std;

int main() {
    double degF;
    double degC;
    string choice;
    string newCalc;
    bool cont = true;


    while (cont) {

        cout << "Do you want to convert from Fahrenheit or Celsius? (F/C): ";
        cin >> choice;
        if (choice == "F") {
            cout << "Enter the temp (F): ";
            cin >> degF;
            degC = (degF - 32) * (5.0 / 9.0);
            cout << "The temp in Celsius is: " << degC << endl;
        } else if (choice == "C") {
            cout << "Enter the temp (C): ";
            cin >> degC;
            degF = (degC * (9.0 / 5.0)) + 32;
            cout << "The temp in Fahrenheit is: " << degF << endl;
        }
        cout << "Convert another temp? (Y/N): ";
        cin >> newCalc;

        if(newCalc=="N") {
            cont = false;
            cout << "Program terminated.";
        }
    }
    return 0;
}
