#include <bits/stdc++.h> 
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double startFahrenheit, endFahrenheit, stepSize;
    cout << "Enter Start Fahreneit Value: ";
    cin >> startFahrenheit;
    cout << "Enter End Fahreneit Value: ";
    cin >> endFahrenheit;
    cout << "Enter Step Size Value: ";
    cin >> stepSize;

    for (int fahrenheit = startFahrenheit; fahrenheit <= endFahrenheit; fahrenheit += stepSize) {
        int celsius = fahrenheitToCelsius(fahrenheit);
        cout << fahrenheit << "\t" << celsius << endl;
    }

    return 0;
}