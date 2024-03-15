#include <iostream>
#include <cmath>
using namespace std;

double calculate_tree_height() {
    // Read input from the user
    double h_inches, d_feet, d_inches, angle_degrees;
    cout << "Enter the height of your eye in inches: ";
    cin >> h_inches;
    cout << "Enter the distance to the tree (feet inches): ";
    cin >> d_feet >> d_inches;
    cout << "Enter the angle in degrees: ";
    cin >> angle_degrees;

    // Convert distance to inches
    d_inches += d_feet * 12;

    // Convert angle to radians
    double angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the height of the tree
    double tree_height = h_inches + d_inches * tan(angle_radians);

    // Convert tree height to feet
    double tree_height_feet = tree_height / 12.0;

    // Output the result
    cout << "The height of the tree is approximately " << tree_height_feet << " feet." << endl;

    return 0;
}

int main() {
    // Call the function to calculate tree height
    calculate_tree_height();
    return 0;
}