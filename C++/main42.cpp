#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct ogrenci{
		string isim;
		int numara;
	};

	//2-)
	void ogrenciOlustur(ogrenci *yeniogrenci, string yeniisim, int yeninumara)//strcut yapýsý içinde tanýmlanan nesnenin(ogr1) adresi ile burada bulunan yeniogrenci nesnesini ramda 
	//geçici olarak bulunan adresini eþitle, bu nesnenin yeni bir ismi ve numarasý olsun. 
	{
		
		yeniogrenci -> isim = yeniisim;//struct yapýsý içinde bulunan bu nesneyi (yeniogrenci=ogr1) bul ismine git ve yeniismi ile deðiþtir(eþitle).
		yeniogrenci -> numara = yeninumara;//struct yapýsý içinde bulunan bu nesneyi(yeniogrenci=ogr1) bul numarasýna git ve yeninumara ile degiþtir(eþitle)
	}
	
	//3-)
	void ogrenciyiBastir(ogrenci ogr)//artýk burada pointers kullanmamýza gerek yok çünkü 
	//neden pointers kullanmadýk çünkü bir nesnenin deðerini atama yapmak istersek yani yeni deðerler eklemek istersek pointers kullanmak zorundayýz ama;
	//biz struct yapýsý içinde bulunan nesneyi(ogr=ogr1)degerini bastýrmak yani göstermek istersek pointer þeklinde almamýza gerek kalmaz.
	{

	cout << "Ogrencinin bilgileri: " << endl << "Isim: " << ogr.isim << endl << "Numara: " << ogr.numara << endl;
	//struct yapýsý için

	}

//Not 3.kýsmý açýklamasý eðer bir yapýnýn içinde olan veya bir objenin içinde olan verilere ulaþmak istiyorsak onun adresini(pointers)almamýza- kullanmamýza gerek yok
//fdkat o verilerde deðiþiklik yapýlacaksa adresleme almak zorundayýz.

	//4-)
	void Ogrenciyisil(ogrenci *ogr) //struct yapýsý içinde tanýmlanan nesnenin(ogr1) ile burada ram da geçici olarak tanýmalanan ogr aderslerini pointers ile eþitle.
	{
		ogr -> isim = "";//struct yapýsý içinde bulunan bu nesneyi (ogr=ogr1) bul ismine git ve ismini boþ karaktere eþitle.(deðiþtir)
		ogr -> numara =0;//struct yapýsý içinde bulunan bu nesneyi (ogr=ogr1) bul numarasýna git ve numarasýný 0 a eþitle(deðþtir)
	}

int main(int argc, char** argv) {
	
	ogrenci ogr1; //ogr1 adýnda çaðrýlan bir ogrenci oluþtur.
	//2-)//þimdi bunu fonksiyon ile yeni bir ogrenci oluþturalým.
	//oluþturduðumuz fonksiyonu çaðýralým.(iki farklý adresi birleþtirmek için yukarýda pointers kullandýk burada amper iþareti kullan)
	ogrenciOlustur(&ogr1,"ceyhun",123456789);
	//3-) þimdi bu oluþturdugumuz ogrenciyi fonksiyon ile bastýralým yani cout ile degil yeni bir fonksiyon oluþturalým.
	//oluþturduðumuz fonksiyonu çaðýralým.
	ogrenciyiBastir(ogr1);
	//4-)þimdi bu oluþturduðumuz verileri silelim yani;	
	//þimdi oluþturduðumuz fonksiyonu kullanalým
	Ogrenciyisil(&ogr1);
	//sildiðimiz ogrencinin degerlerini tekrardan bastýralým bakalým neler olmuþ görelim
	ogrenciyiBastir(ogr1);//evet isim boþ numarasý da 0 a atanmýþ.
	
	
	
	
	return 0;
}
