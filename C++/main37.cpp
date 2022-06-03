#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int ARRAY_SIZE = 10;

void initializeArray(int x[], int sizeX);
void fillArray(int x[], int sizX);
void printArray(const int x[], int sizeX);
int indexLargestElement(const int x[], int sizeX);


int main() 
{
	int listA[ARRAY_SIZE] = {0}; //declare the array listA of 10 components and initalize each components and initialize each component to 0
	int listB[ARRAY_SIZE]; // DECLARE THE ARRAY LÝST B OF 10 COMPONENTS;
	
	cout <<"ListA elements: ";
	printArray(listA, ARRAY_SIZE);
	cout << endl << endl;
	
	cout << "ListB elements: ";
	printArray(listB, ARRAY_SIZE);
	cout << endl << endl;
	
	
	
	//initialize listB using the function initializeArray
	initializeArray(listB, ARRAY_SIZE);
	cout << "listB element after initialize it to 0: ";
	printArray(listB,ARRAY_SIZE);
	cout << endl << endl;
	
	//ýnput data into listA using the function fillArray
	cout << "Enter" << ARRAY_SIZE << " Integers: ";	
	fillArray(listA,ARRAY_SIZE);
	cout << endl;
	
	cout << "After filling listA," 
	<< "the elements are: " << endl;
	//output the elements of listA
	printArray(listA, ARRAY_SIZE);
	cout << endl << endl;
	
	//find and output the position of the largest element in listA
	cout << "The position of the largest" << "element in listA is: " << indexLargestElement(listA, ARRAY_SIZE) << endl;
	
	//find and ouput the largest element in listA
	cout << "Line 16: The largest element in" << "listA is: " << listA[indexLargestElement(listA, ARRAY_SIZE)] << endl << endl;
	
	return 0;
}
	

void initializeArray(int list[], int listSize)
{
	int index;
	for(index = 0; index<listSize; index++)
	list[index] = 0;
}

void fillArray(int list[], int listSize)
{
	int index;
	for(index =0; index<listSize; index++)
	cin >> list[index];
}

void printArray(const int list[], int listSize)
{
	
	int index;
	for(index =0; index<listSize; index++)
	cout << list[index] << " ";
	
}

int indexLargestElement(const int list[], int listSize)
{
	int index;
	int maxindex = 0; //assume the first element is the largest
	for(index = 1; index < listSize; index++)
	if(list[maxindex] <list[index])
	maxindex = index;
	return maxindex;
}












