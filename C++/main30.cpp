#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//iterative fonksiyon ve recursive fonksiyon konu anlat�m� ufak not defterinde de daha a��klamal� anlat�m vard�r.
int iterativeFaktoriyel(int sayi)
{	int carpim=1; //yapmam�z�n sebebi fakt�riyel kavram�n� olu�turmak.
	for(int i=1; i<=sayi; i++)
	{
		carpim = carpim*i;
	}
	return carpim;
}

int recursiveFaktoriyel(int sayi)
{
	if(sayi==1 || sayi==0) // 0! ve 1! == 1 oldu�u i�in biz bu �ekilde yazd�k
	{
		return 1;  //burada ise 1 d�nd�rmesini istedik say�m�z�n. yukar�da ki a��klamaya ba�l� olarak
	}
	else
	{
		return sayi*recursiveFaktoriyel(sayi-1); // ilk iterative fonksiyonun da i++ yapt�k bir nevi artt�rd�k sebebi 1 ile �arpmaya ba�lad��� i�in ama burada biz
		//say�*sayi-1 ile �arp�yoruz ��nk� biz burada direk say�y� giriyoruz �rne�in 6 bunun fakt�riyel olmas� i�in 6.5.4.3.2.1 diyerek azalmas� gerekiyor ondan dolay� -1 yapt�k.
	}

}





int main(int argc, char** argv) {
 	int x = iterativeFaktoriyel(5);
	 cout << x << endl;	
	int y = recursiveFaktoriyel(4);
	 cout << y << endl;
	return 0;
}

