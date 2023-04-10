#include <iostream>

using namespace std;

int main() {
    double fahrenheit = 0;
    double celsius = 0;

    cout << "What is the temperature in fahrenheit? ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32)*5/9;
    cout << "The temperature in celsius is " << celsius;


    return 0;
}
