#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//depodaki stoða göre ürün ekleme veya cýkarma iþlemi yapan program.
int main(int argc, char** argv) {
	
	int stokAdeti;
	
	char islem; // burada ilk olarak iþlemi string olarak almýþtýk ama malesef switch fonksiyonunda string kullanýrsa aþaðýda karakter içinde olan;
	// '+' veya '-' alamayacaðýmzdan ötürü stringi charakter yapýsý ile deðiþtirdim.
	
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
