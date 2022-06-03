#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1'den n e kadar olan tek ve çift sayýlarýn toplamýný bulan program.
int main(int argc, char** argv) {
	
	
	int sayi;
	int teksayilarinToplami;
	int ciftsayilarinToplami;
	
	cout << "Lutfen bir sayi giriniz: " << endl;
	cin >> sayi;
	
	do {
		if(sayi % 2 == 0){
			ciftsayilarinToplami = ciftsayilarinToplami + sayi;
		}
	
		else if(sayi % 2 != 0){
			teksayilarinToplami = teksayilarinToplami + sayi;
		}
		
		sayi--;
		
	}while(sayi>0);
	
	cout << "Tek sayilarin toplami: " << teksayilarinToplami << endl;
	cout << "cift sayilarin toplami:" << ciftsayilarinToplami << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
