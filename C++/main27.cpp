#include <iostream>
using namespace std;
//void fonksiyonu ile karesini hesaplama
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void karesinihesaplama(int sayi) //parantez i�ine parametre yazaca��z �ren�in karesini hesaplamak i�in integer say� girelim
{
	int kare = sayi*sayi;
	cout << "Sayinin karesi: " << kare << endl;
	//biz buraya sadece fonksiyonu tan�ml�yoruz a�a��da yani int main k�sm�nda bu fonksiyonu kullanaca��z.
	
}

void merhaba()
{
	
	cout << "Merhaba genclik, c++ Nasil gidiyor ? :)" << endl; //ayr�yeten biz alt alta iki void fonksiyonu da girebiliyoruz
	
}

int main(int argc, char** argv) //�imdi burada olu�turdu�umuz fonksiyonu kullanaca��z
{
	int sayi2;
	cout << "Lutfen karesini almak istediginiz sayiyi giriniz: ";
	cin >> sayi2;
	
	karesinihesaplama(sayi2); //sayi2 i�in yukaridaki fonksiyonu kullan�yoruz yani bir nevi sayi2 yi yukar�daki fonksiyona yollay�p oradaki i�lemlerden ge�ip ekrana bas�lacak
	merhaba();
	
	
	return 0;
}	
