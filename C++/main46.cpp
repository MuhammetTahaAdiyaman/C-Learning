#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void welcome()
{
	cout << "WELCOME OUR BREAKFAST RESTAURANT" << endl;
}
struct menuItemType	{
	
	string menuItem;
	double menuPrice;
	int orderNum;
	
};

menuItemType menu[8];

void showMenu()
{	int a;
	for(int a = 0; a<=7; a++)
	{	
		cout << menu[a].menuItem << " " << menu[a].menuPrice << endl;
	}
}


int getData(int number)
{	
	int x;
	x=0;
	cout << "Please choose between 1-8 whatever you would like to food: ";
	cin >> x;
	
	x = x-1;
	return x;
}



double taxIndex(double &totalTax)
{
	int tax;
	tax = totalTax* 100.0 + 0.5;
	return tax / 100.0;
}

void printCheck(double &tax, double &totalBill)
{
	int x=0;
	cout <<endl;
	cout << "Welcome to ADIYAMAN'S RESTAURANT" << endl;
	for (x=0; x<8; x++)
	{
		if(menu[x].orderNum > 0)
		{
			cout << menu[x].orderNum << " " << menu[x].menuItem << " " << menu[x].menuPrice <<endl;
		}
		else
		{
			cout << "";
		}
	}
	
	cout << "Tax: " << " " << tax << setprecision(3) << endl;
	cout << "Amount Due: " << totalBill << setprecision(3) << endl;
	cout <<setprecision(3);
}

int main(int argc, char** argv) {
int x;
int choice;
int number;
int a=0;
double totalBill = 0.0;
double taxRate = .05;
double tax = 0;
double totalTax = 0;
double bill = 0;
char shouldOrder;
//Menu Items Name.	
menu[0].menuItem = "1. Plain Egg";
menu[1].menuItem = "2. Bacon and Egg";
menu[2].menuItem = "3. Muffin";
menu[3].menuItem = "4. French Toast";
menu[4].menuItem = "5. Fruit Basket";
menu[5].menuItem = "6. Cereal";
menu[6].menuItem = "7. Coffee";
menu[7].menuItem = "8. Tea";	

//Menu Items Price.

menu[0].menuPrice = 1.45;	
menu[1].menuPrice = 2.45;	
menu[2].menuPrice = 0.99;	
menu[3].menuPrice = 1.99;	
menu[4].menuPrice = 2.49;	
menu[5].menuPrice = 0.69;	
menu[6].menuPrice = 0.50;	
menu[7].menuPrice = 0.75;	




do{

welcome();
cout << endl;
showMenu();
cout << endl;
choice = getData(number);	
cout << endl;
bill = menu[choice].menuPrice + bill;
menu[choice].orderNum++; //ordered item +1;
cout << " " << menu[choice].orderNum << "         " << menu[choice].menuItem << " " << endl;

	cout << "Would you like to another order ? (Y/N): ";
	cin >> shouldOrder;

/*int totalBill = 0;
double taxRate = .05;
int tax = 0;
int totalTax = 0;
double bill = 0;
*/
}while(shouldOrder == 'Y' || shouldOrder == 'y');

totalTax = bill * taxRate;
tax = taxIndex(totalTax);
totalBill = bill + tax;
printCheck(tax, totalBill);


	return 0;
}


	
	


