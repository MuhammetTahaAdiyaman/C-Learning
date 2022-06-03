#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class ogrenci{
	
	private:
	string kullaniciadi;
	int sifre;
	string asilkullanici = "tahaadiyaman@gmail.com";
	int asilsifre =13798246 ;
	
	public:
	
	void setkullaniciadi(string kullaniciadi)
	{
		if(asilkullanici==kullaniciadi)
		kullaniciadi == asilkullanici;
		else
		cout << "Lutfen kullanici adinizi kontrol ediniz." << endl;
	}
	
	void setsifre(int sifre)
	{
		if(asilsifre == sifre)
		sifre = asilsifre;
		else
		cout << "Lutfen 0 veya 0'dan buyuk bir sayi giriniz" << endl;
	}
	
	string getkullaniciadi()
	{
		return kullaniciadi;
	}
	
	int getnumara()
	{
		return sifre;
	}
};

int main() {
	
	ogrenci ogr1;
	ogr1.setkullaniciadi("taha");
	ogr1.setsifre(13798246);
	
	


	if(ogr1.setkullaniciadi == kullaniciadi )
	{
		cout << "giriþ basarili" << endl;
	}
	else
	{
		cout << "lutfen kullanici adinizi tekrardan kontrol ediniz." << endl;
	}
	
	if(ogr1.setsifre == gecicisifre)
	{
	cout << "giriþ basarili" << endl;	
	}
	else
	{
		cout << "lutfen sifrenizi tekrardan kontrol ediniz." << endl;
	}
	

	
	return 0;
}
