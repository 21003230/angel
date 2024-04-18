#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;
    bool kind, funny, attractive;

    cout << "Welcome! Let's find your perfect partner.\n";
    cout << "Please answer the following questions:\n";

    cout << "1. What is your age? ";
    cin >> age;

    cout << "2. What is your gender (M/F)? ";
    cin >> gender;

    cout << "3. Are you looking for someone kind? (1 for Yes, 0 for No) ";
    cin >> kind;

    cout << "4. Are you looking for someone funny? (1 for Yes, 0 for No) ";
    cin >> funny;

    cout << "5. Are you looking for someone attractive? (1 for Yes, 0 for No) ";
    cin >> attractive;

    cout << "\nBased on your answers, we suggest:\n";

    if (age >= 18 && age <= 30) {
        if (gender == 'm') {
            if (kind && funny && attractive) {
                cout << "You might like Angel.\n";
            } else if (kind && funny) {
                cout << "You might like saseki.\n";
            } else {
                cout << "Sorry, we couldn't find a match for you.\n";
            }
        } else if (gender == 'f') {
            if (kind && funny && attractive) {
                cout << "You might like matimba.\n";
            } else if (kind && funny) {
                cout << "You might like Dan.\n";
            } else {
                cout << "Sorry, we couldn't find a match for you.\n";
            }
        } else {
            cout << "Invalid gender.\n";
        }
    } else {
        cout << "Sorry, we only cater to ages between 18 and 30.\n";
    }

    return 0;
}