#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// fakt�riyel hesab� yapan program( while d�ng�s� ile )
int main(int argc, char** argv) {
	
	int sayi;
	int sonuc=1; //neden 1 verdik ��nk� sonu� 0 olarak ba�lasayd� t�m �arp�mlar zaten 0 ederdi.
	
	cout << "Lutfen faktoriyel yapmak istediginiz sayiyi giriniz: " << endl;
	cin >> sayi;
	
	while(sayi>0){ //(neden >0 ��nk� 0! = 1 oldu�u i�in)
		sonuc = sonuc*sayi;
		sayi--;
		
		
	}
 
	cout << sonuc;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
