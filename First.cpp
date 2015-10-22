// question 5 , 7 , programing exercise 1
#include<iostream>
#include<string>
using namespace std;
class bankAccount
{
private:
	string clientName, accountNumber;
	double balance;
public:
	void initialize(string a, string b, double c)
	{
		clientName = a;
		accountNumber = b;
		balance = c;
	}
	void displayName()
	{
		cout << clientName << "\n";
	}
	void displayNumber()
	{
		cout << accountNumber << "\n";
	}
	void displayBalance()
	{
		cout << balance << "\n";
	}
	void diposit(double a)
	{
		balance = balance + a;
	}
	void withdraw(double a)
	{
		balance = balance - a;
	}
	bankAccount()
	{
		clientName = "Unknown";
		accountNumber = "Unknown";
		balance = 0;
	}
};
int main()
{
	bankAccount a;
	a.displayBalance();
	a.displayName();
	a.displayNumber();
	a.initialize("Emad", "21102015", 160);
	a.displayBalance();
	a.displayName();
	a.displayNumber();
	a.diposit(15);
	a.displayBalance();
	a.withdraw(15);
	a.displayBalance();
	return 0;
}