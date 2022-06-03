#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//poiters(string)ile kullanýmý
int main(int argc, char** argv) {

	string takimlar[] = {"Galatasaray","Fenerbahce","Besiktas","Trabzonspor"};
	
	string *takimlarAdres = &takimlar[0];
//  string *takimlarAdres = takimlar;	
	cout << takimlarAdres << endl;
	for(int i=0; i<4; i++)
		cout << *(takimlarAdres+i)<< endl;
	return 0;
}
