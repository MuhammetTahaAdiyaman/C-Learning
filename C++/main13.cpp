#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// haftanýn günlerini belirleyen program(switchcase anlatýmý ile)
int main(int argc, char** argv) {
	
	
	int haftaninGunleri;
	
	cout << "Haftanin kacinci gununu ogrenmek istiyorsunuz ?" << endl;
	cin >> haftaninGunleri;
	
	
	switch(haftaninGunleri){
	
	case 1: 
	cout << "Pazartesi" << endl;
	break;
	
	case 2:
	cout << "Sali" << endl;
	break;
	
	case 3:
	cout << "Carsamba " << endl;
	break;
	
	case 4:
	cout << "Persembe" << endl;
	break;
	
	case 5:
	cout << "Cuma " << endl;
	break;
	
	case 6:
	cout << "Cumartesi" << endl;
	break;
	
	case 7:
	cout << "Pazar" << endl;
	break;
	
	default:
	cout << "Lutfen 1-7 arasýnda bir rakam giriniz!";
		
	
	
	
	
	
	
	
	
	
	
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
