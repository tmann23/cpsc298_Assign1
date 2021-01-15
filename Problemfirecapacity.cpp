/*
Tara Mann
2314833
tmann@chapman.edu
CPSC 298-01
Assignment 1 - The Basics
*/

#include <iostream>

using namespace std;

int main (int argc, char **argv) {
    int maxPeople;
    int numPeople;
    int additionalPeople;
    int excessPeople;

    cout << "What is the maximum room capacity?" << endl;
    cin >> maxPeople; // getting user input for the maximum amount of people

    cout << "How many people are attending the meeting?" << endl;
    cin >> numPeople; // getting user input for the amount of people attending

    /* conditional to handle each case:
    under max capacity, exactly at max capacity, and over max capacity */
    if (numPeople < maxPeople) {
      additionalPeople = maxPeople - numPeople; // how many more people can attend
      cout << "It is legal to hold the meeting." << endl;
      cout << additionalPeople << " additional people may attend." << endl;
    } else if (numPeople == maxPeople) {
      cout << "It is legal to hold the meeting." << endl;
      cout << "The room is at maximum capacity." << endl;
    } else {
      excessPeople = numPeople - maxPeople; // how many people must leave
      cout << "The meeting cannot be held as planned due to fire regulations." << endl;
      cout << excessPeople << " people must be excluded." << endl;
    }

    return 0;
}
