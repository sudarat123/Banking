/*Program check balance bank*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
float update_balance(string, float, float &balance);
int main()
{
	float balance = 10000.00;
	string command = "";
	float dollars;
	cout << "Exit with 0\n";
	cout << "Your balance = " << fixed << setprecision(2) << balance << endl;
	while(command != "0")
	{
		cout << "Input your command (1 or withdraw, 2 deposit) : ";
		cin >> command;
		if (command == "0")
		{
			cout << "Exit...\n";
			return 0;
		}
		cout << "Input amount : ";
		cin >> dollars;
		cout << "Your balance : " << update_balance(command,dollars,balance) << endl;
	}
	return 0;
}


float update_balance(string command, float dollars, float &balance)
{
	if (command == "1") 
	{
		balance = balance - dollars;
	}
	if (command == "2") 
	{
		balance = balance + dollars;
	}
	return(balance);
}