#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct insan{
	string isim;
	int cocuklari;
	int tc;
};

void kisidegistir(insan *kisininisminidegistir, string yerinegelecekisim){ //pointer kullandýk kalýcý olarak isim deðiþtirmek için aþaðýda amper iþareti kullan
	kisininisminidegistir -> isim = yerinegelecekisim;
}

void cocukdegisti(insan*cocuklar, int cocuksayisi){
	
	cocuklar -> cocuklari = cocuksayisi; // pointer ile adreslenmiþ olan yere git çocuk sayýsýný yeni gireceðimiz çocuk sayýsýna ekle
}

// þimdi yeni bir kiþi oluþturalým bu erkek olsun.

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
	
	cout << human.isim << endl; // artýk kalýcý olarak ram da kiþimiz ayþe oldu þimdi ayþenin hayatýný ele alalým.
	// bir de ayþenin 2 tane çocuðu olsun.
	
	cocukdegisti(&human,2);
	
	cout << human.cocuklari << endl;
	
	cout << "2009 yilinda "  << human.isim << " nin" << human.cocuklari << " tane cocugu vardir." << endl;
*/
// yeni bir kiþi oluþturacaðýz bu kiþi bu sefer erkek olacak.

	insan erkek;
	kisiolustur(&erkek,"taha",58345147478);	
	// biz bu yeni ogrencimizi bir bastýralým yalnýz bastýrýrken yani biz sadece ram da olanlarý bastýrýrken pointer kullanmamýza gerek yok.
	kisiyiBastir(erkek);
	//þimdi bu kiþiyi silme fonksiyonunu uygulayýp daha sonra tekrardan bastýralým bakalým neler deðiþmiþ.
	kisiyiSil(&erkek);
	kisiyiBastir(erkek);
	return 0;
}
