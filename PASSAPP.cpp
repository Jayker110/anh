#include <iostream>
using namespace std;

double calculateFare(double distance) {
    double baseFare = 1800.0;    // Base fare in KHR
    double ratePerKm = 1200.0000000000;   // Rate per kilometer in KHR
    double minfare = 3000.0;
	if (distance < 1.0){
		return minfare;
	}
    double fare = baseFare + (ratePerKm * distance);  // Total fare calculation
    return fare;
}

int main() {
    double distance;

    // Get distance input from user
    cout << "Enter distance in kilometers: ";
    cin >> distance;

    // Validate input
    if (distance < 0) {
        cout << "Distance cannot be negative!" << endl;
        return 1;
    }

    // Calculate and display fare for the input distance
    double fare = calculateFare(distance);
    cout << "Fare for " << distance << "km is: " << fare << " KHR" << endl;


    return 0;
}

