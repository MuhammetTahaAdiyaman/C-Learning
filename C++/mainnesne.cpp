#include <iostream>
using namespace std;
//Class yap�s�n� anlatma

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// class struct ile benzer yap�ya sahip ama struct sadece de�i�kenler �zerineyken class bir objenin fonksiyonelle�mesini de sa�lar a�a��da baz� farklar a��klanacakt�r.
class Ogrenci
{	
	public: //�imdilik halka a��k herkese a��k ula��labilmesi m�mk�n olarak bilmemiz yeterli olacakt�r.
	int ogrenciNo;
	string ad;
	string soyad;
	void bilgileriBas() // buras� struct yap�s�ndan ayr�lan k�sm� ��nk� struct i�ine bir foksiyon yazam�yorduk
	{//ayr�ca bilgileriBas fonksiyonun i�ine parametreleri belirtmemiz gerekirken class i�inde yazd���m�z i�in kendisi otomatik olarak alg�l�yor.
		cout << "Ogrenci Adi: " << ad << endl;
		cout << "Ogremci Soyadi: " << soyad << endl;
	}
};


int main(int argc, char** argv) {
	
	Ogrenci Ahmet;
	Ahmet.ad = "Ahmet";
	Ahmet.soyad = "Tas";
	Ahmet.ogrenciNo = 123;
	
	Ahmet.bilgileriBas(); //burada ise fonksiyon class yap�s� i�inde oldu�undan dolay� class ile olu�turulmu� olan objeler sadece bu fonksiyonu �a��rabilir
	
	
	
	return 0;
}
