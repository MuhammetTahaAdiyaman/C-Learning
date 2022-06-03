#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1-)Ogrenci adýnda bir struct yapýsý oluþturalým ve bu yapýda pointers kullanýmý gösterelim.
//1-)
/*struct ogrenci{
	int numara;
	string isim;
};

//2-)þimdi ben bu deðerin ismini program içinde 100 defa deðiþtirmem gerekiyor bunun için bir fonksiyon oluþturmamýz gerekiyor.
void ismidegistir(ogrenci ismidegistirelecekogrenci, string koyulacakisim)
//þimdi oluþturduðumuz öðrenci bir nesne olduðu için direk olarak fonksiyon içine yazabiliriz.
//koyulacak isimi ogrenci parametresi içindeki isime eþitleyip deðiþimini saðlayacaðýz
{
	
	ismidegistirelecekogrenci.isim = koyulacakisim;
	
}

int main(int argc, char** argv) {
//1-)	
	ogrenci ogr1;
	ogr1.isim = "Kaan";
	cout << ogr1.isim << endl;
//2-)deðiþim için oluþturulan fonksiyonu bir uygulayalým þimdi
	ismidegistir(ogr1,"Fatih");
	cout << ogr1.isim << endl;
//baktýðýmýzda isim degiþmedi çünkü fonksiyon kendine ram da geçiçi bir alan oluþturdu ve 2 farklý alan oldu.
//artýk bu alanlarýn adreslerini eþitlememiz için pointer kullanýyorduk bunu kullanacaðýz lakin pointersdan kullanmadan da bu ismi degiþtirebiliriz örneði aþaðýda
*/	

//tekrardan struck yapýsý oluþturup pointer kullanmadan da isim degistirmeyi deneyeceðiz.
/*	
	struct ogrenci{
		string isim;
	};
	//þimdi fonksiyonu oluþturalým
	void isimdegistir(ogrenci ismidegistirelecekogrenci, string koyulacakisim){
		
		ismidegistirelecekogrenci.isim = koyulacakisim;
		cout << ismidegistirelecekogrenci.isim;
	//bu þekilde de bastýrabiliriz ama burada bu fonksiyonun yani geçici fonksiyonun adýný fatih olarak deðiþtirdi
	//2-)tekrardan aþaðýda ismi bastýrdýðýmýzda taha olarak basacak çünkü kalýcýlýðý yok
	}
	
	int main()
	{
	 ogrenci ogr1;
	 ogr1.isim="Taha";
	 //cout << ogr1.isim << endl;
	isimdegistir(ogr1,"fatih");
	cout << endl;
	cout  << ogr1.isim << endl;//2-)gördüðümüz üzere kalýcý olarak basmadý
*/
// bundan dolayý kalýcý olarak ismin deðþmesi için pointers kullanýrýz
	
	struct ogrenci{
		string name;
	};
	
	void isimdegistir(ogrenci *ismidegistirelecekogrenci, string yerinegelecekisim)
	{//burada pointer kullandýysak altta da amper iþareti kullancaðoz.
		ismidegistirelecekogrenci->name = yerinegelecekisim; //-> bu ogrenciye git ismini bul yeni gelecek isimle deðiþtir anlamý vardýr. 
	}//ayrýca-> bu iþaret pointerýn içerisindeki ifadenin ismine ulaþmak için de denebilir.
	int main(){
		
		ogrenci ogr1;
		ogr1.name="Taha";
		cout <<"ilk ismi: " << ogr1.name << endl;
		isimdegistir(&ogr1,"ahmet");
		cout << "ikinci ismi: " << ogr1.name <<endl;
		
	
	return 0;
}
