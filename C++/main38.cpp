#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1-)Ogrenci ad�nda bir struct yap�s� olu�tural�m ve bu yap�da pointers kullan�m� g�sterelim.
//1-)
/*struct ogrenci{
	int numara;
	string isim;
};

//2-)�imdi ben bu de�erin ismini program i�inde 100 defa de�i�tirmem gerekiyor bunun i�in bir fonksiyon olu�turmam�z gerekiyor.
void ismidegistir(ogrenci ismidegistirelecekogrenci, string koyulacakisim)
//�imdi olu�turdu�umuz ��renci bir nesne oldu�u i�in direk olarak fonksiyon i�ine yazabiliriz.
//koyulacak isimi ogrenci parametresi i�indeki isime e�itleyip de�i�imini sa�layaca��z
{
	
	ismidegistirelecekogrenci.isim = koyulacakisim;
	
}

int main(int argc, char** argv) {
//1-)	
	ogrenci ogr1;
	ogr1.isim = "Kaan";
	cout << ogr1.isim << endl;
//2-)de�i�im i�in olu�turulan fonksiyonu bir uygulayal�m �imdi
	ismidegistir(ogr1,"Fatih");
	cout << ogr1.isim << endl;
//bakt���m�zda isim degi�medi ��nk� fonksiyon kendine ram da ge�i�i bir alan olu�turdu ve 2 farkl� alan oldu.
//art�k bu alanlar�n adreslerini e�itlememiz i�in pointer kullan�yorduk bunu kullanaca��z lakin pointersdan kullanmadan da bu ismi degi�tirebiliriz �rne�i a�a��da
*/	

//tekrardan struck yap�s� olu�turup pointer kullanmadan da isim degistirmeyi deneyece�iz.
/*	
	struct ogrenci{
		string isim;
	};
	//�imdi fonksiyonu olu�tural�m
	void isimdegistir(ogrenci ismidegistirelecekogrenci, string koyulacakisim){
		
		ismidegistirelecekogrenci.isim = koyulacakisim;
		cout << ismidegistirelecekogrenci.isim;
	//bu �ekilde de bast�rabiliriz ama burada bu fonksiyonun yani ge�ici fonksiyonun ad�n� fatih olarak de�i�tirdi
	//2-)tekrardan a�a��da ismi bast�rd���m�zda taha olarak basacak ��nk� kal�c�l��� yok
	}
	
	int main()
	{
	 ogrenci ogr1;
	 ogr1.isim="Taha";
	 //cout << ogr1.isim << endl;
	isimdegistir(ogr1,"fatih");
	cout << endl;
	cout  << ogr1.isim << endl;//2-)g�rd���m�z �zere kal�c� olarak basmad�
*/
// bundan dolay� kal�c� olarak ismin de��mesi i�in pointers kullan�r�z
	
	struct ogrenci{
		string name;
	};
	
	void isimdegistir(ogrenci *ismidegistirelecekogrenci, string yerinegelecekisim)
	{//burada pointer kulland�ysak altta da amper i�areti kullanca�oz.
		ismidegistirelecekogrenci->name = yerinegelecekisim; //-> bu ogrenciye git ismini bul yeni gelecek isimle de�i�tir anlam� vard�r. 
	}//ayr�ca-> bu i�aret pointer�n i�erisindeki ifadenin ismine ula�mak i�in de denebilir.
	int main(){
		
		ogrenci ogr1;
		ogr1.name="Taha";
		cout <<"ilk ismi: " << ogr1.name << endl;
		isimdegistir(&ogr1,"ahmet");
		cout << "ikinci ismi: " << ogr1.name <<endl;
		
	
	return 0;
}
