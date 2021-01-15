/*
Tara Mann
2314833
tmann@chapman.edu
CPSC 298-01
Assignment 1 - The Basics
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char **argv) {
    /* these variables are written as constants
    since their values will not be changed */
    const double RATE_OF_PAY = 16.0;
    const double OVERTIME_RATE = 24.0;
    const double SOCIAL_SECURITY_TAX = 0.06;
    const double FEDERAL_INCOME_TAX = 0.14;
    const double STATE_INCOME_TAX = 0.05;
    const double MEDICAL_INSURANCE = 10.0;

    /* these variables change depending on the
    user input so they are not constants */
    double regularHours;
    double overtimeHours;
    double grossPay;
    double socialSecurityAmount;
    double federalIncomeAmount;
    double stateIncomeAmount;
    double netTakeHomePay;
    bool valid;

    cout << "How many hours were worked this week?" << endl;
    cin >> regularHours;
    cout << endl;

    /* conditional to handle each case:
    overtime, regular hours, and invalid input */
    if (regularHours > 40) {
      overtimeHours = regularHours - 40;
      regularHours = 40;
      grossPay = (RATE_OF_PAY * regularHours) + (OVERTIME_RATE * overtimeHours);
      valid = true;
    } else if ((regularHours <= 40) && (regularHours > 0)) {
      grossPay = RATE_OF_PAY * regularHours;
      valid = true;
    } else {
      cout << "Not a valid number of hours." << endl;
      valid = false;
    }

    if (valid) {
      // calculating tax amounts
      socialSecurityAmount = grossPay * SOCIAL_SECURITY_TAX;
      federalIncomeAmount = grossPay * FEDERAL_INCOME_TAX;
      stateIncomeAmount = grossPay * STATE_INCOME_TAX;
      netTakeHomePay = grossPay - (socialSecurityAmount + federalIncomeAmount + stateIncomeAmount + MEDICAL_INSURANCE);

      cout << "The worker's gross pay for the week is: $";
      cout << fixed << setprecision(2) << grossPay << endl; // format decimals to have two decimal points
      cout << "$" << socialSecurityAmount << " is withheld for the Social Security tax." << endl;
      cout << "$" << federalIncomeAmount << " is withheld for the Federal Income tax." << endl;
      cout << "$" << stateIncomeAmount << " is withheld for the State Income tax." << endl;
      cout << "$" << MEDICAL_INSURANCE << " is withheld for medical insurance." << endl;
      cout << "The worker's net take-home pay is: $" << netTakeHomePay << endl;
    }

    return 0;
}
