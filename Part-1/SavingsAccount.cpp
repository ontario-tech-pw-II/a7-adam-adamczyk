#include "SavingsAccount.h"
#include <string>
using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	balance = initialBalance;
	interestRate = rate;
}

double SavingsAccount::calculateInterest() {
	// your code
} 
void SavingsAccount::display(ostream & os) const
{
	os << "Account Type: Savings" << endl;
	os << "Balance: $" + to_string(balance) << endl;
	os << "Interest Rate: " to_string(interestRate) + "%" << endl;
	//cout << os;
}