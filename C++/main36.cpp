#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//struct yap�s� ile ogrenciden bilgi almay� ve ogrenci bilgilerini olu�turup ayr�ca not durumu hakk�nda bilgi program� olu�turduk.
struct ogrenci{

string isim;
int ogrenciNo;
string Okulisim;
string bolum;
string sehir;	
	
};

string Harfnotuver(int sayi){

if(sayi>=90)
{
	return "AA";
}

else if(sayi>75)
{
	return "BB";
}

else if(sayi>50)
{
	return "CC";
}

else
{
	return "FF";
}
 
}
int main(int argc, char** argv){
	
	ogrenci ogr;//yukar�daki struct yap�s�n� kullanmak i�in burada onunla ba�lant�l� bir de�i�ken olu�turduk.
	cout << "Lutfen ogrencimizin bilgilerini giriniz: " << endl;
	cin >> ogr.isim >> ogr.ogrenciNo >> ogr.Okulisim >> ogr.bolum >> ogr.sehir;
	//biz struct yap�s�nda bilgi al�rken de yazd�r�rken de aaa.isim �eklinde yani nokta kullanarak yazd�raca��z.
	// �imdi bu ogrencinin kullan�c�dan ald���m�z bilgileri yazd�ral�m.
	cout << endl;
	cout << "*********************************************" << endl;
	cout << "Ogrencinin Adi: " << ogr.isim << endl;
	cout << "Ogrenci no: " << ogr.ogrenciNo << endl;
	cout << "Okul ismi: " << ogr.Okulisim << endl;
	cout << "Bolumu: " << ogr.bolum << endl;
	cout << "Yasadigi Sehir: " << ogr.sehir << endl;
	cout << "*********************************************" << endl << endl;
	//�imdi ogrencimizden dersleri hakk�nda bilgilerini alal�m.
	
	float ortalama;
	float vizeNot;
	float finalNot;
	
	cout << "Lutfen ogrencinin vize notunuzu giriniz: ";
	cin >> vizeNot;
	
	cout << "Lutfen ogrencinin final notunu giriniz: ";
	cin >> finalNot;
	
	ortalama = vizeNot*0.4 + finalNot*0.6;
	
	Harfnotuver(ortalama);
	cout << endl;
	cout <<"*****************************************************************"<< endl;
	cout << "Ogrencinin 1.vizesi: " << vizeNot << endl;
	cout << "Ogrencinin 1.finali: " << finalNot << endl;
	cout << "Ogrencinin ders basari durumu: " << Harfnotuver(ortalama) << endl;
	cout <<"*****************************************************************";
	
	
	
	
	
	
	
	return 0;
}
