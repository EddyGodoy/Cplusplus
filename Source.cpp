//
//  Eddy Godoy
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float initialInvestment, monthlyDeposit, annualInt, months, years;
    float totalAm, initialAm, yearTotalInt;

    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount: \n";
    cout << "Monthly Deposit: \n";
    cout << "Annual Interest: \n";
    cout << "Number of years: \n";

    system("PAUSE");

    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount: $";
    cin >> initialInvestment;
    cout << "Monthly Deposit: $";
    cin >> monthlyDeposit;
    cout << "Annual Interest: %";
    cin >> annualInt;
    cout << "Number of years: ";
    cin >> years;
    months = years * 12;

    system("PAUSE");

    totalAm = initialInvestment;

    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < years; i++) {
        initialAm = (totalAm) * ((annualInt / 100));
        totalAm = totalAm + initialAm;
        cout << setw(2) << (i + 1) << setw(10) << "\t\t$" << fixed << setprecision(2) << totalAm << setw(10) << "\t\t\t$" << initialAm << "\n";
    }

    totalAm = initialInvestment;
    cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < years; i++) {
        yearTotalInt = 0;
        for (int j = 0; j < 12; j++) {
            initialAm = (totalAm + monthlyDeposit) * ((annualInt / 100) / 12);
            yearTotalInt = yearTotalInt + initialAm;
            totalAm = totalAm + monthlyDeposit + initialAm;
        }
        cout << setw(2) << (i + 1) << setw(10) << "\t\t$" << fixed << setprecision(2) << totalAm << setw(10) << "\t\t\t$" << yearTotalInt << "\n";
    }
    return 0;
}