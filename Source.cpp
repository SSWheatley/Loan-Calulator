#include<iostream> 
#include<string.h>
#include<cstdlib>
#include<string>
#include<math.h>
#include<conio.h>
using namespace std;
int Current_Year;
int main()
{
	int Birth_Year;
	int Current_Month;
	int Birth_Month;
	int Age_Month;
	int Age_Year;
	int Address_length_1;
	int Address_length_2;
	int Loan_length;
	int month_2;
	int help;
	double first_power;
	double Number_Of_months;
	double Annual_income;
	double Monthly_Expenditure;
	double Loan_Balance = 0;
	double apr_per_year = 5.9;
	double apr_per_month;
	double Long_maths_thing;
	double Loan_payment_per_month;
	double Interest_charge_per_month;
	double Principal_per_month;
	double Balance_after_amortization;
	double third_maths_thing;
	double Monthly_income;
	double Disposable_income;
	double Save_Number_Of_Months;
	char Help_again;
	char Employed_status;
	char Age_again;
	char Program_again;
	char Save_Application;
	string Users_name;
	string address;
	string address_2;
	string Account_Number;
	string Sort_Code;

	apr_per_month = ((apr_per_year / 100) / 12);
	do {
		/*Prints out the header metro bank loan calulator*/

		cout << R"(
 __  __          _                      ____                    _      
|  \/  |        | |                    |  _ \                  | |     
|      |  ___   | |_   _ __    ___     | |_) |   __ _   _ __   | | __  
| |\/| | / _ \  | __| | '__|  / _ \    |  _ <  /  _` | | '_ \  | |/ /  
| |  | ||  __/  | |_  | |    | (_) |   | |_) ||  (_| | | | | | |   <    
|_|  |_| \___|   \__| |_|     \___/    |____ / \__, _| |_| |_| |_|\_\ 
  _                              
 | |                             
 | |        ___     __ _   _ __  
 | |       / _ \   / _` | | '_ \ 
 | |____  | (_) | | (_| | | | | |
 |______|  \___/   \__,_| |_| |_|
 
   _____           _                  _           _                  
  / ____|         | |                | |         | |                 
 | |        __ _  | |   ___   _   _  | |   __ _  | |_    ___    _ __ 
 | |       / _` | | |  / __| | | | | | |  / _` | | __|  / _ \  | '__|
 | |____  | (_| | | | | (__  | |_| | | | | (_| | | |_  | (_) | | |   
  \_____|  \__,_| |_|  \___|  \__,_| |_|  \__,_|  \__|  \___/  |_| )" << '\n';


		do {
			cout << "Would you like help\n1: Help\n2: Continue\n";
			cin >> help;
			switch (help)
			{
			case 1: {
				/*this is the help section that enables the user to ask for help*/
				
				
				system("cls");
				cout << "You have selected help" << endl;
				cout << "Step 1: Enter Your Name this should be used with underscores instead of spaces" << endl;
				cout << "Step 2: Now Enter the current Year" << endl;
				cout << "Step 3: Now Enter The Current Month" << endl;
				cout << "Step 4: Now Enter The Year you Were born" << endl;
				cout << "Step 5: Now Enter The Month you were born" << endl;
				cout << "Step 6: Now Enter Your Current Address" << endl;
				cout << "Step 7: Now enter how long you have lived there" << endl;
				cout << "Step 8: Now enter if you are employed or not" << endl;
				cout << "Step 9: Now enter your annual income" << endl;
				cout << "Step 10: Now enter your monthly expenditure" << endl;
				cout << "Step 11: Now enter how much you would like to borrow" << endl;
				cout << "Step 12: Now enter how long you would like to pay it back" << endl;
				cout << "Step 13: Now enter your account Number" << endl;
				cout << "Step 14: Now enter your sort code" << endl;
				cout << "Step 15: Choose if you would like to save the applciation" << endl;
			}
			}
			cout << "Would you like to run the help again(Y for yes and N for no: ";
			cin >> Help_again;
		} while (Help_again == 'Y' || Help_again == 'y');
		
		
		
		do {
			/*Clears the screen ready for the user to input there data*/
			system("cls");


			/*Gets the user to enter there name*/
			cout << "please enter your Name (Use _ for Spaces):";
			cin >> Users_name;
			/*gets the user to input the current year */
			cout << "Please Enter The Current Year then Press Enter:";
			cin >> Current_Year;

			/*gets the user to input the current month*/
			cout << "Please enter the current month then press enter:";
			cin >> Current_Month;

			/*if the current month is not correct then the program will stop if it is correct then the program will carry on*/
			if (Current_Month > 12 || Current_Month < 1) {
				cout << "Please Enter a valid month \n \n";
				system("pause");
				return 0;
			}

			else{}

			/*gets the user to input the year they were born*/
			cout << "Enter the year you were born:";
			cin >> Birth_Year;

			/*gets the user to input the month they were born*/
			cout << "Enter the month you were born:";
			cin >> Birth_Month;

			/* checks the month to see if it is correct otherwise stops the program*/
			if (Birth_Month > 12 || Birth_Month < 1) {
				cout << "Please Enter a valid month \n \n";
				system("pause");
				return 0;
			}

			/*Works out how old the user is*/
			else
				if (Birth_Month > Current_Month) {
					Age_Year = Current_Year - Birth_Year - 1;
					Age_Month = (12 - Birth_Month) + Current_Month;
				}

				else {
					Age_Year = Current_Year - Birth_Year;
					Age_Month = 12 - Birth_Month;
				}

				/*if the user is older than 18 continue otherwise */
				if (Age_Year >= 18) {
					system("CLS");
					cout << "You are " << Age_Year << " years and " << Age_Month << " months old";
					cout << "\nCongratualtions you are old enough to get a loan" << endl;
				}

				/*Prints if the user is not over 18*/
				else {
					cout << "You are not old enough to claim a loan" << endl;
					system("pause");
					return 0;
				}

				/*checks if the user would like to run the month part again*/
				cout << "Would you like to run the month part again (Y = Yes, N = No \n";
				cin >> Age_again;
		} while (Age_again == 'y' || Age_again == 'Y');

		/*Gets the user to input the current address*/
		cout << "What is your current Address (Use _for Spaces):" << endl;
		cin >> address;

		cout << "How long have you lived at this address? (Please enter the length in years):";
		cin >> Address_length_1;

		/*this prints out the address that if the user has not lived at the address more than 3 years then prompts the user to enter another address*/
		if (Address_length_1 < 3) {
			cout << "What is the last address in the last 3 years: " << endl;
			cin >> address_2;
			cout << "How long have you lived at this address (please enter the length in years): " << endl;
			cin >> Address_length_2;
		}
		else (Address_length_1 >= 3); {

			/*asks the user if they are employed or self employed etc*/
			cout << "\nAre You Employed or Self Employed \n(E for Employed Or S for self employed or P for Part Time \nif neither press N:";
			cin >> Employed_status;

			if ((Employed_status == 'E') || (Employed_status == 'e')) {
				cout << "You are Employed you can apply for a loan" << endl;
			}
			else if ((Employed_status == 'S') || (Employed_status == 's')) {
				cout << "You are Self Employed you can apply for a loan" << endl;
			}
			else if ((Employed_status == 'P') || (Employed_status == 'p')) {
				cout << "You are Employed Part Time so you can apply for a loan" << endl;
			}
			else {
				cout << "You cannot apply for a loan as you are not Employed \n";
				system("pause");
				return 0;
			}

			/*asks the user what the annual income is and there monthly expenditure*/
			cout << "What is your annual income after tax:";
			cin >> Annual_income;
			cout << "What is your monthly expenditure:";
			cin >> Monthly_Expenditure;


			/*asking the user how much they would like to borrow and how long for*/
			cout << "How much would you like to borrow in your loan: " << endl;
			cin >> Loan_Balance;
			do {
				cout << "How long did you want to have to pay it back (In years) (the Maximum is 7 years): " ;
				cin >> Loan_length;
			} while (Loan_length < 0 || Loan_length > 7);
			Number_Of_months = Loan_length * 12;
			Save_Number_Of_Months = Number_Of_months;
			first_power = pow((1 + apr_per_month), Number_Of_months);
			third_maths_thing = (apr_per_month * first_power);
			do {
				/*gets the user to enter there account number*/
				cout << "Please enter your account number(8 digits): \n";
				cin >> Account_Number;
			} while (Account_Number.length() != 8);


			do {
				/*Gets the user to enter there sort code*/
				cout << "Please enter your Sort Code (6 Digits): \n";
				cin >> Sort_Code;
			} while (Sort_Code.length() != 6);

			system("cls");

			cout << "This is the amortization Table" << endl;

			/*The boring and complicated maths part*/
			double Calc_Loan_Balance = Loan_Balance;
			int month = 1;

			for (Number_Of_months; (Number_Of_months - 1) > 0; Number_Of_months--) {

				Long_maths_thing = ((first_power - 1) / third_maths_thing);
				Loan_payment_per_month = Loan_Balance / Long_maths_thing;
				Interest_charge_per_month = apr_per_month * Calc_Loan_Balance;
				Principal_per_month = Loan_payment_per_month - Interest_charge_per_month;
				Balance_after_amortization = Calc_Loan_Balance - Principal_per_month;
				/*Prints all the Amortization table*/
				cout << "Month: ";
				cout << month << endl;
				cout << "Loan Balance :";
				cout << Calc_Loan_Balance << endl;
				cout << "loan Payment Per Month: ";
				cout << Loan_payment_per_month << endl;
				cout << "Principal per month: ";
				cout << Principal_per_month << endl;
				cout << "Interest Chrage per month: ";
				cout << Interest_charge_per_month << endl;
				cout << "Balance after amortization: ";
				cout << Balance_after_amortization << endl;
				cout << "\n\n";
				Calc_Loan_Balance = Balance_after_amortization;
				month = month + 1;
			}
			/*Prints the last month of the amortization table*/
			Interest_charge_per_month = apr_per_month * Calc_Loan_Balance;
			Principal_per_month = Loan_payment_per_month - Interest_charge_per_month;

			cout << "Month: ";
			cout << month << endl;
			cout << "Loan Balance :";
			cout << Calc_Loan_Balance << endl;
			cout << "loan Payment Per Month: ";
			cout << Loan_payment_per_month << endl;
			cout << "Principal per month: ";
			cout << Principal_per_month << endl;
			cout << "Interest Chrage per month: ";
			cout << Interest_charge_per_month << endl;
			cout << "Balance after amortization: ";
			cout << "0" << endl;
			cout << "\n\n";
		}
		Monthly_income = (Annual_income / 12);
		Disposable_income = (Monthly_income - Monthly_Expenditure);
		if (Disposable_income < Loan_payment_per_month) {
			cout << "You can't apply for a loan as you can't afford to pay for the loan" << endl;
		}
		/*Asks the user if they would like to save the application*/

		cout << "Would you like to save the application (Y for yes , N for No: \n";
		cin >> Save_Application;
		system("cls");
		if (Save_Application == 'y' || Save_Application == 'Y') {
			cout << "Loan Application number: " << rand() << endl;
			cout << "Name: " << Users_name << endl;
			cout << "Age: " << Age_Year << endl;
			cout << "Address: " << address << endl;
			if (Address_length_1 < 3) {
				cout << "address 2: " << address << endl;

			}
			else {}
			cout << "Account Number: " << Account_Number << endl;
			cout << "Sort Code: " << Sort_Code << endl;
			cout << "Monthly Income: " << Monthly_income << endl;
			cout << "Disposable Income per month: " << Disposable_income << endl;

			cout << "Loan amount: " << Loan_Balance << endl;
			cout << "Loan Length: " << Loan_length << " Years" << endl;
			cout << "Number Of Payments: " << Save_Number_Of_Months << endl;
			cout << "Loan Payment Per Month: " << Loan_payment_per_month << endl;
			
		}
		else {}
			/*asks the user if they want to restart the program*/
			cout << "Would you like to run the program again (Y = Yes, N = No) \n";
			cin >> Program_again;
			system("cls");
		
	}while (Program_again == 'y' || Program_again == 'Y');
}
