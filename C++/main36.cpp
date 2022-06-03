#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//struct yapýsý ile ogrenciden bilgi almayý ve ogrenci bilgilerini oluþturup ayrýca not durumu hakkýnda bilgi programý oluþturduk.
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
	
	ogrenci ogr;//yukarýdaki struct yapýsýný kullanmak için burada onunla baðlantýlý bir deðiþken oluþturduk.
	cout << "Lutfen ogrencimizin bilgilerini giriniz: " << endl;
	cin >> ogr.isim >> ogr.ogrenciNo >> ogr.Okulisim >> ogr.bolum >> ogr.sehir;
	//biz struct yapýsýnda bilgi alýrken de yazdýrýrken de aaa.isim þeklinde yani nokta kullanarak yazdýracaðýz.
	// þimdi bu ogrencinin kullanýcýdan aldýðýmýz bilgileri yazdýralým.
	cout << endl;
	cout << "*********************************************" << endl;
	cout << "Ogrencinin Adi: " << ogr.isim << endl;
	cout << "Ogrenci no: " << ogr.ogrenciNo << endl;
	cout << "Okul ismi: " << ogr.Okulisim << endl;
	cout << "Bolumu: " << ogr.bolum << endl;
	cout << "Yasadigi Sehir: " << ogr.sehir << endl;
	cout << "*********************************************" << endl << endl;
	//þimdi ogrencimizden dersleri hakkýnda bilgilerini alalým.
	
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
