#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double Fahrenheit = celsius * 1.80 + 32.00;
        double Kelvin = celsius + 273.15;

        return {Kelvin, Fahrenheit};
    }
};

int main() {
    double celsius;
    cin >> celsius;

    Solution obj;
    vector<double> result = obj.convertTemperature(celsius);

    cout << result[0] << " " << result[1];

    return 0;
}