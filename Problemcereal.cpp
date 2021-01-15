/*
Tara Mann
2314833
tmann@chapman.edu
CPSC 298-01
Assignment 1 - The Basics
*/

#include <iostream>

using namespace std;

int main (int argc, char **argv){
    /* this first variable is a constant because
    it does not change */
    const double METRIC_TON_OUNCES = 35273.92;

    /* these variables change depending on the
    user input so they are not constants */
    double packageWeight;
    double metricTonWeight;
    double numBoxes;

    cout << "What is the weight of the cereal box (ounces)? " << endl;
    cin >> packageWeight; // getting user input

    // package weight in ounces divided by ounces in a metric ton to get the package weight in metric tons
    metricTonWeight = packageWeight / METRIC_TON_OUNCES;
    cout << "The cereal box is " << metricTonWeight << " metric tons." << endl;

    // ounces in a metric ton divided by the package weight to get the number of boxes for one metric ton
    numBoxes = METRIC_TON_OUNCES / packageWeight;
    cout << "It would take " << numBoxes << " boxes to yield one metric ton of cereal." << endl;

    return 0;
}
