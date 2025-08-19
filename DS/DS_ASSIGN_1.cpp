#include <iostream>
using namespace std;

int main() {
    const int cities = 3;
    const int days = 7;
    float temperature[cities][days];


    cout << "Temperature Tracker for 3 Cities Over 7 Days\n\n";


    // Input temperatures
    for (int i = 0; i < cities; i++) {
        cout << "Enter temperatures for City " << i + 1 << ":\n";
        for (int j = 0; j < days; j++) {
            cout << "  Day " << j + 1 << ": ";
            cin >> temperature[i][j];
        }
        cout << endl;
    }


    // Calculate and display average temperature for each day (across all cities)
    cout << "\nAverage Temperature per Day (All Cities):\n";
    for (int j = 0; j < days; j++) {
        float daySum = 0;
        for (int i = 0; i < cities; i++) {
            daySum += temperature[i][j];
        }
        float dayAvg = daySum / cities;
        cout << "Day " << j + 1 << ": " << dayAvg << " C" << endl;
    }


    // Calculate and display average temperature for the week for each city
    cout << "\nWeekly Average Temperature per City:\n";
    for (int i = 0; i < cities; i++) {
        float weekSum = 0;
        for (int j = 0; j < days; j++) {
            weekSum += temperature[i][j];
        }
        float weekAvg = weekSum / days;
        cout << "City " << i + 1 << ": " << weekAvg << " C" << endl;
    }


    return 0;
}
