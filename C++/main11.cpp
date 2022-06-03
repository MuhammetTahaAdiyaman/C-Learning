#include <iostream>
using namespace std;
// elemanların satış sayısına göre başarısız mı başarılı mı olduğunu belirleme programı.
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	string isim1, isim2, isim3;
	string soyisim1, soyisim2, soyisim3;
	int tc1, tc2, tc3;
	int urunSayisi1, urunSayisi2, urunSayisi3;
	bool cinsiyet1, cinsiyet2, cinsiyet3;
	
	// true -> kadın
	// false -> erkek
	
	cout << "Lutfen calisan elemanların bilgilerini giriniz: " << endl;
	cin >> isim1 >> soyisim1 >> tc1 >> cinsiyet1;
	cin >> isim2 >> soyisim2 >> tc2 >> cinsiyet2;
	cin >> isim3 >> soyisim3 >> tc3 >> cinsiyet3;
	
	urunSayisi1 = 50;
	urunSayisi2 = 50;
	urunSayisi3 = 50;
	
	
	urunSayisi1 = urunSayisi1-20;
	urunSayisi2 -= 15;
	urunSayisi3 -= 30;
	
	if(urunSayisi1 > 25 && cinsiyet1 == 0)
	{
		cout << "Calisan 1: " << isim1 << " " << soyisim1 << " " << tc1 << " " << "Erkek" << " " << "Basarisiz" << endl;
	}
	else
	{
		cout << "Calisan 1: " << isim1 << " " << soyisim1 << " " << tc1 << " " << "Kadin" << " " << "Basarili" << endl;
	}
	
	if(urunSayisi2 > 25 && cinsiyet2 == 0)
	{
		cout << "Calisan 2: " << isim2 << " " << soyisim2 << " " << tc2 << " " << "Erkek" << " " << "Basarisiz" << endl;
	}
	else
	{
		cout << "Calisan 2: " << isim2 << " " << soyisim2 << " " << tc2 << " " << "Kadin" << " " << "Basarili" << endl;
	}
	
	if(urunSayisi3 > 25 && cinsiyet3 == 0)
	{
		cout << "Calisan 3: " << isim3 << " " << soyisim3 << " " << tc3 << " " << "Erkek" << " " << "Basarisiz" << endl;
	}
	else
	{
	    cout << "Calisan 3: " << isim3 << " " << soyisim3 << " " << tc3 << " " << "Kadin" << " " << "Basarili" << endl;
	}
	
/*	if(cinsiyet1 == 0)
	{
		cout << isim1 << "Erkek" << endl;
	}
	else
	{
		cout << isim1 << "Kadin" << endl;
	}
	
	if(cinsiyet2 == 0)
	{
		cout << isim2 << "Erkek" << endl;
	}
	else
	{
		cout << isim2 << "Kadin" << endl;
	}
	
	if(cinsiyet3 == 0)
	{
		cout << isim3 << "Erkek" << endl;
		
	}
	else 
	{
		cout << isim3 << "Kadin" << endl;
 	}
	
	
*/	
	
	
	
	
	
	
	
	return 0;
}
