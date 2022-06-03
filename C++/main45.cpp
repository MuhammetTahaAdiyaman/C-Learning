#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct menuItemType
 {
	string menuItem;
	double menuPrice;	
	int OrderNum;
};
	menuItemType theMenu[8];

void showMenu(); // display the menu
int getData(int choice); // get input from the user
double Round(double &totalTax); // round to the nearest cent
void printCheck(double &tax, double &totalBill); // print what the person ordered and their total check


int main()
{		
	int choice; //	The number the user chooses for the item they want	
	int number; // Used in the getData function
	int x; // used in "for" loop to initialize numOrdered to 0.
	double bill; //	This is the total for items purchased, without tax.  
	double totalBill; //  This is the total for items purchased, with tax.
	double tax; // Amount of one tax after it is rounded.  
	double taxRate; // Percentage of tax to be charged. 
	double totalTax; //	Total amount of tax.
	char shouldContinue; //	Used to loop the do...while function
	
	totalBill = 0;
	taxRate = .05;
	tax = 0;
	totalTax = 0;
	bill = 0;
	number = 0;
	choice = 0;
	x = 0;

	theMenu[0].menuItem  = "1.  Plain Egg";	// This part sets the menuItem array  to a numbered food list showing prices.
	theMenu[1].menuItem  = "2.  Bacon and Egg";
	theMenu[2].menuItem  = "3.  Muffin";
	theMenu[3].menuItem  = "4.  French Toast";
	theMenu[4].menuItem  = "5.  Fruit Basket";
	theMenu[5].menuItem  = "6.  Cereal";
	theMenu[6].menuItem  = "7.  Coffee";
	theMenu[7].menuItem  = "8.  Tea";

	theMenu[0].menuPrice  = 1.45;	// This sets the menuPrice array to the price of the food. 
	theMenu[1].menuPrice  = 2.45;
	theMenu[2].menuPrice  = 0.99;
	theMenu[3].menuPrice  = 1.99;
	theMenu[4].menuPrice  = 2.49;
	theMenu[5].menuPrice  = 0.69;
	theMenu[6].menuPrice  = 0.50;
	theMenu[7].menuPrice  = 0.75;

	for (x = 0; x < 8; x++) // Initialize theMenu[x].numOrdered to all 0's.  
	{
		theMenu[x].OrderNum = 0;
	}
	
	do
	{
	showMenu();  // run the void showMenu() function
	cout << "\n" << endl;

	choice = getData(number); // Returns the number the person chose the the array number

	bill = theMenu[choice].menuPrice + bill; // Keeps a running total of the bill
	
	theMenu[choice].OrderNum++; //Add 1 to the amount of the item ordered.  

	cout << "\n" << theMenu[choice].OrderNum << setw (20) << theMenu[choice].menuItem << " \n" << endl;

	cout << "Would you like to place another order?  (Y/N)" << endl; // Allow to purchase more
	cin >> shouldContinue;
	}
	while (shouldContinue == 'Y' || shouldContinue == 'y');
	cout << endl;

	totalTax = bill * taxRate;

	tax = Round(totalTax);
	
	totalBill = bill + tax;

	printCheck(tax, totalBill);

	return 0;
} //main () 



//***********//
// showMenu()//
//**********//

void showMenu()
{
	int x;
	for (x = 0; x <=7; x++)
	cout << theMenu[x].menuItem << "\t" << theMenu[x].menuPrice << endl; 
}


//*****************//
// getData(int number)//
//****************//
int getData(int number)
{
	int z;
	z = 0;
	//****** What I'd like to do here is make sure the user chooses a number 1-8.  I'm not sure how to make a loop that will keep asking them to re-enter a number until they choose a valid choice.*******//
	cout << "Please choose a food item by the corresponding number." << endl;
	cin >> z; 
        z = z - 1; // Subtract 1 from the foodChoice to make it match the array.			

	return z;	
}

//*********************//
// Round(double &totalTax)//
//*******************//
double Round(double &totalTax) //Round to the nearest cent.  
   {
   int tax;
   
   tax = totalTax * 100.0 + 0.5;
   return tax / 100.0;
   }

//**************************************//
// void printCheck(double &tax, double &totalBill)//
//************************************//
void printCheck(double &tax, double &totalBill)
{
	int x;
	x = 0;

	cout << "Welcome to Johnny's Restaurant \n" << endl;
	for (x = 0; x < 8; x++)
	{
	if (theMenu[x].OrderNum > 0)
	{
	cout << theMenu[x].OrderNum << "\t" << theMenu[x].menuItem << "\t" << right << theMenu[x].menuPrice << right << endl; 
	}
	else 
	{
		cout << "";
	}
	}

	cout << "Tax" << setw (27) << tax << endl;
	cout << "Amount Due" << setw (20) << totalBill << endl;
}
