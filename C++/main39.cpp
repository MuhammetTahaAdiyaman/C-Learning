#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct insan{
	string isim;
	int cocuklari;
	int tc;
};

void kisidegistir(insan *kisininisminidegistir, string yerinegelecekisim){ //pointer kulland�k kal�c� olarak isim de�i�tirmek i�in a�a��da amper i�areti kullan
	kisininisminidegistir -> isim = yerinegelecekisim;
}

void cocukdegisti(insan*cocuklar, int cocuksayisi){
	
	cocuklar -> cocuklari = cocuksayisi; // pointer ile adreslenmi� olan yere git �ocuk say�s�n� yeni girece�imiz �ocuk say�s�na ekle
}

// �imdi yeni bir ki�i olu�tural�m bu erkek olsun.

void kisiolustur(insan*yenikisi,string isim,int tc){
	yenikisi -> isim = isim;
	yenikisi-> tc = tc;
	
}

void kisiyiBastir(insan kisi)
{
	cout << "kisi bilgileri: " << endl << "isim: " << kisi.isim << "kisi tc no: " << kisi.tc << endl;
}

void kisiyiSil(insan *kisi)
{
	kisi -> isim = "";
	kisi -> tc = 0;
}
int main(int argc, char** argv) {
	
/*	insan human;
	
	human.isim = "Fatma";
	human.cocuklari = 4;
	
	cout << "2009 yilinda " << human.isim << " nin" << human.cocuklari << " tane cocugu vardi" << endl;
	
	kisidegistir(&human, "Ayse");
	
	cout << human.isim << endl; // art�k kal�c� olarak ram da ki�imiz ay�e oldu �imdi ay�enin hayat�n� ele alal�m.
	// bir de ay�enin 2 tane �ocu�u olsun.
	
	cocukdegisti(&human,2);
	
	cout << human.cocuklari << endl;
	
	cout << "2009 yilinda "  << human.isim << " nin" << human.cocuklari << " tane cocugu vardir." << endl;
*/
// yeni bir ki�i olu�turaca��z bu ki�i bu sefer erkek olacak.

	insan erkek;
	kisiolustur(&erkek,"taha",58345147478);	
	// biz bu yeni ogrencimizi bir bast�ral�m yaln�z bast�r�rken yani biz sadece ram da olanlar� bast�r�rken pointer kullanmam�za gerek yok.
	kisiyiBastir(erkek);
	//�imdi bu ki�iyi silme fonksiyonunu uygulay�p daha sonra tekrardan bast�ral�m bakal�m neler de�i�mi�.
	kisiyiSil(&erkek);
	kisiyiBastir(erkek);
	return 0;
}
