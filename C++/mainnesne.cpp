#include <iostream>
using namespace std;
//Class yapýsýný anlatma

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// class struct ile benzer yapýya sahip ama struct sadece deðiþkenler üzerineyken class bir objenin fonksiyonelleþmesini de saðlar aþaðýda bazý farklar açýklanacaktýr.
class Ogrenci
{	
	public: //þimdilik halka açýk herkese açýk ulaþýlabilmesi mümkün olarak bilmemiz yeterli olacaktýr.
	int ogrenciNo;
	string ad;
	string soyad;
	void bilgileriBas() // burasý struct yapýsýndan ayrýlan kýsmý çünkü struct içine bir foksiyon yazamýyorduk
	{//ayrýca bilgileriBas fonksiyonun içine parametreleri belirtmemiz gerekirken class içinde yazdýðýmýz için kendisi otomatik olarak algýlýyor.
		cout << "Ogrenci Adi: " << ad << endl;
		cout << "Ogremci Soyadi: " << soyad << endl;
	}
};


int main(int argc, char** argv) {
	
	Ogrenci Ahmet;
	Ahmet.ad = "Ahmet";
	Ahmet.soyad = "Tas";
	Ahmet.ogrenciNo = 123;
	
	Ahmet.bilgileriBas(); //burada ise fonksiyon class yapýsý içinde olduðundan dolayý class ile oluþturulmuþ olan objeler sadece bu fonksiyonu çaðýrabilir
	
	
	
	return 0;
}
