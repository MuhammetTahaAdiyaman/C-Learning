#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//depodaki sto�a g�re �r�n ekleme veya c�karma i�lemi yapan program.
int main(int argc, char** argv) {
	
	int stokAdeti;
	
	char islem; // burada ilk olarak i�lemi string olarak alm��t�k ama malesef switch fonksiyonunda string kullan�rsa a�a��da karakter i�inde olan;
	// '+' veya '-' alamayaca��mzdan �t�r� stringi charakter yap�s� ile de�i�tirdim.
	
	cout << "Lutfen deponuzda bulunan urun miktarini giriniz: " << endl;
	
	cin >> stokAdeti;
	
	cout << "Deponuz urun eklemek istiyorsaniz +, Deponuzdan urun cikartmak istiyorsaniz - yi tuslayin."<< endl;
	cin >> islem;
	
	int islemyapilacakUrunAdeti;
	switch(islem){
	
	case '+':
		cout << "Kac adet urun ekleyeceksiniz: " << endl,
		cin >>	islemyapilacakUrunAdeti;
		stokAdeti += islemyapilacakUrunAdeti;
	break;
	
	case '-':
		cout << "Kac adet urun cikartacaksiniz: " << endl;
		cin >> islemyapilacakUrunAdeti;
		stokAdeti -= islemyapilacakUrunAdeti; 
	break;
	
	default:
		cout << "Sadece depoya urun eklenilebilir veya cikartilabilirsiniz." << endl;
	
	}
	
	cout << "Kalan urun adeti: " << stokAdeti << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
