/*
Curran McKenzie
September 22nd 2016
Intro to Computer Programming
Assignment 4
*/

#include <iomanip> 
#include <iostream>
using namespace std;

int main()

{

	double interest = 0.0116666 / 12, deposit = 563.33, permonth, sbalance, ebalance; // declare vairables as interest, deposit, monthly interest, and the endbalance 
	int month = 1; // has to be int to count by whole numbers
	char again; // char is used to run the program again  

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	do
	{


		cout << "Please Enter a starting balance less then $800.00 $"; // enter a starting balance less then 800.00

		cin >> sbalance; // user inputs starting balance

		ebalance = sbalance; 


		if (sbalance < 800.00) { // if sbalance is less than 800.00 

			cout << setw(33) << "The starting balance is $" << sbalance << endl;  // this gives the output in the correct set up
			cout << setw(12) << "month";
			cout << setw(16) << "interest";
			cout << setw(32) << "end-of-month balance" << endl;


			do
			{

				permonth = ebalance * interest;  // this finds the interest per month

				ebalance = ebalance + deposit + interest; // finds the end balance per month

				cout << setw(11) << month;   // prints it all out in the correct order 
				cout << setw(16) << "$" << permonth;    
				cout << setw(24) << "$" << ebalance << endl;

				month++; // month increases by 1


			} while (ebalance <= 9000); // this is less than and equal so it can be one more than 9000... do it one more time
		}

		else {
			cout << "Please enter a balance less than $800.00" << endl; // if the starting balance is over 800.00 then prints this
		}

		cout << "Would you like to try this again? (Enter Y for yes or N for no)" << endl; //asks you if you want to do it again and repeats it

		cin >> again;

	} while (again == 'Y' || again == 'y'); 

		system("pause");
		return 0; 
} 