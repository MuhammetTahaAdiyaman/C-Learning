#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//fonksiyonlarla ebob ve ekok örneði

int sayitoplama(int a, int b)
{
	int toplam=0;
	for (int i=a+1; i<b; i++)
	{
		toplam = toplam+i;
	}
	return toplam;
}

int ushesaplama(int a, int b)
{	int us=1;
	for(int i=0; i<b; i++)
	{
		us = us*a;
	}
	return us;
}

int main(int argc, char** argv) {
	
int sayi1, sayi2,sayi3,sayi4, sonuc;
cout << "Lutfen aralýkta bulmak istediginiz sayilari giriniz: " << endl;
cin >> sayi1 >> sayi2;

	sonuc=sayitoplama(sayi1,sayi2);
	cout << "Toplam: " << sonuc << endl;
cout << "Luten üssünü hesaplamak istediginiz sayilari giriniz: " << endl;
cin >> sayi3 >> sayi4;	
sonuc = ushesaplama(sayi3,sayi4);
cout << "sonuc: " << sonuc << endl;



	return 0;
}
