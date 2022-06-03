#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// faktöriyel hesabý yapan program( while döngüsü ile )
int main(int argc, char** argv) {
	
	int sayi;
	int sonuc=1; //neden 1 verdik çünkü sonuç 0 olarak baþlasaydý tüm çarpýmlar zaten 0 ederdi.
	
	cout << "Lutfen faktoriyel yapmak istediginiz sayiyi giriniz: " << endl;
	cin >> sayi;
	
	while(sayi>0){ //(neden >0 çünkü 0! = 1 olduðu için)
		sonuc = sonuc*sayi;
		sayi--;
		
		
	}
 
	cout << sonuc;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
