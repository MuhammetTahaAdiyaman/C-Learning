#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//proje 41 en güzel anlatým þeklidir struct ile pointer kullanýmý.
struct ogrenci{
	string isim;
};


void isimdegistir(ogrenci *ismidegisecekogrenci, string yeniIsmi)//ogr1 adresi ile burada oluþturduðumuz geçiçi ram da olan adresi birlþtirmek için pointers kullan
{

	ismidegisecekogrenci -> isim = yeniIsmi;
//2-)	//struckt yapýsý içinde tanýmlanan nesneyi(ogr1)'i bul (->) ismine git daha sonra yeni ismi ile degistir(eþitle)
}






int main(int argc, char** argv) {
	ogrenci ogr1; //bana ogr1 adý ile caðýrýlan ogrenci nesnesi oluþtur.
	ogr1.isim = "Taha";
	cout << ogr1.isim << endl;
	
//2-)	//þimdi bunu deðiþtirelim
	
	isimdegistir(&ogr1,"furkan");//yukarýda pointers ile adreslediðimiz þeyi burada referans yani ampre iþareti kullanacaðýz
	cout << ogr1.isim << endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
