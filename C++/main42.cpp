#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct ogrenci{
		string isim;
		int numara;
	};

	//2-)
	void ogrenciOlustur(ogrenci *yeniogrenci, string yeniisim, int yeninumara)//strcut yap�s� i�inde tan�mlanan nesnenin(ogr1) adresi ile burada bulunan yeniogrenci nesnesini ramda 
	//ge�ici olarak bulunan adresini e�itle, bu nesnenin yeni bir ismi ve numaras� olsun. 
	{
		
		yeniogrenci -> isim = yeniisim;//struct yap�s� i�inde bulunan bu nesneyi (yeniogrenci=ogr1) bul ismine git ve yeniismi ile de�i�tir(e�itle).
		yeniogrenci -> numara = yeninumara;//struct yap�s� i�inde bulunan bu nesneyi(yeniogrenci=ogr1) bul numaras�na git ve yeninumara ile degi�tir(e�itle)
	}
	
	//3-)
	void ogrenciyiBastir(ogrenci ogr)//art�k burada pointers kullanmam�za gerek yok ��nk� 
	//neden pointers kullanmad�k ��nk� bir nesnenin de�erini atama yapmak istersek yani yeni de�erler eklemek istersek pointers kullanmak zorunday�z ama;
	//biz struct yap�s� i�inde bulunan nesneyi(ogr=ogr1)degerini bast�rmak yani g�stermek istersek pointer �eklinde almam�za gerek kalmaz.
	{

	cout << "Ogrencinin bilgileri: " << endl << "Isim: " << ogr.isim << endl << "Numara: " << ogr.numara << endl;
	//struct yap�s� i�in

	}

//Not 3.k�sm� a��klamas� e�er bir yap�n�n i�inde olan veya bir objenin i�inde olan verilere ula�mak istiyorsak onun adresini(pointers)almam�za- kullanmam�za gerek yok
//fdkat o verilerde de�i�iklik yap�lacaksa adresleme almak zorunday�z.

	//4-)
	void Ogrenciyisil(ogrenci *ogr) //struct yap�s� i�inde tan�mlanan nesnenin(ogr1) ile burada ram da ge�ici olarak tan�malanan ogr aderslerini pointers ile e�itle.
	{
		ogr -> isim = "";//struct yap�s� i�inde bulunan bu nesneyi (ogr=ogr1) bul ismine git ve ismini bo� karaktere e�itle.(de�i�tir)
		ogr -> numara =0;//struct yap�s� i�inde bulunan bu nesneyi (ogr=ogr1) bul numaras�na git ve numaras�n� 0 a e�itle(de��tir)
	}

int main(int argc, char** argv) {
	
	ogrenci ogr1; //ogr1 ad�nda �a�r�lan bir ogrenci olu�tur.
	//2-)//�imdi bunu fonksiyon ile yeni bir ogrenci olu�tural�m.
	//olu�turdu�umuz fonksiyonu �a��ral�m.(iki farkl� adresi birle�tirmek i�in yukar�da pointers kulland�k burada amper i�areti kullan)
	ogrenciOlustur(&ogr1,"ceyhun",123456789);
	//3-) �imdi bu olu�turdugumuz ogrenciyi fonksiyon ile bast�ral�m yani cout ile degil yeni bir fonksiyon olu�tural�m.
	//olu�turdu�umuz fonksiyonu �a��ral�m.
	ogrenciyiBastir(ogr1);
	//4-)�imdi bu olu�turdu�umuz verileri silelim yani;	
	//�imdi olu�turdu�umuz fonksiyonu kullanal�m
	Ogrenciyisil(&ogr1);
	//sildi�imiz ogrencinin degerlerini tekrardan bast�ral�m bakal�m neler olmu� g�relim
	ogrenciyiBastir(ogr1);//evet isim bo� numaras� da 0 a atanm��.
	
	
	
	
	return 0;
}
