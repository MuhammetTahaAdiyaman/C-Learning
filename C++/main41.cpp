#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//proje 41 en g�zel anlat�m �eklidir struct ile pointer kullan�m�.
struct ogrenci{
	string isim;
};


void isimdegistir(ogrenci *ismidegisecekogrenci, string yeniIsmi)//ogr1 adresi ile burada olu�turdu�umuz ge�i�i ram da olan adresi birl�tirmek i�in pointers kullan
{

	ismidegisecekogrenci -> isim = yeniIsmi;
//2-)	//struckt yap�s� i�inde tan�mlanan nesneyi(ogr1)'i bul (->) ismine git daha sonra yeni ismi ile degistir(e�itle)
}






int main(int argc, char** argv) {
	ogrenci ogr1; //bana ogr1 ad� ile ca��r�lan ogrenci nesnesi olu�tur.
	ogr1.isim = "Taha";
	cout << ogr1.isim << endl;
	
//2-)	//�imdi bunu de�i�tirelim
	
	isimdegistir(&ogr1,"furkan");//yukar�da pointers ile adresledi�imiz �eyi burada referans yani ampre i�areti kullanaca��z
	cout << ogr1.isim << endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
