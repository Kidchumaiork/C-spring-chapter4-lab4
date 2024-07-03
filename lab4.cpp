#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const double speedOfSoundAir = 1100.0;
    const double speedOfSoundWater = 4900.0;
    const double speedOfSoundSteel = 16400.0;

    string medium;
    double distance, time;

    cout << "Please enter the medium (air, water, or steel):" << "\n";
    cin >> medium;

    for (char &c : medium) {
        c = tolower(c);
    }


    if (medium != "air" && medium != "water" && medium != "steel") {
        cout << "Invalid medium." << "\n";
        return 1; 
    }

    cout << "Please enter the distance (in feet):" << "\n";
    cin >> distance;

    if (distance <= 0) {
        cout << "Invalid distance." << "\n";
        return 1;
    }

    if (medium == "air") {
        time = distance / speedOfSoundAir;
    } else if (medium == "water") {
        time = distance / speedOfSoundWater;
    } else if (medium == "steel") {
        time = distance / speedOfSoundSteel;
    }

    cout << fixed << setprecision(2);
    cout << "Sound will travel " << distance << " feet in " << medium << " at a speed of ";
    if (medium == "air") {
        cout << speedOfSoundAir;
    } else if (medium == "water") {
        cout << speedOfSoundWater;
    } else if (medium == "steel") {
        cout << speedOfSoundSteel;
    }
    cout << " feet per second in " << time << " seconds." << "\n";

    return 0;
}
