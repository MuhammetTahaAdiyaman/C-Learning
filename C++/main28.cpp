#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//fonksiyonda int ve di�er tipler(bir fonksiyon yapaca��z fonksiyonumuzun amac� a ve b diye iki say�m�z var bunlar�n aras�ndaki say�lar�n toplam�n� bulacak.)
//burada void kullanmadan return fonksiyonu ile yapaca��z

int sayilarToplami(int a, int b)
{
	int toplam=0;
	for(int i=a+1; i<b; i++)
	{
		toplam = toplam+i;
	}
	return toplam;
}
//yine bir fonksiyon yapal�m bu fonksiyon a ile b parametresi alacak ve a �zeri b yi hesaplayacak;(#cmath normalde pow fonksiyonu ile bunu hallededebiliriz)
int ushesaplama(int a, int b)
{
	int us=1;
	for (int i=0; i<b; i++)//(a �zeri b demek b tane a n�n yan yana gelerek �arp�lmas� demek ondan dolay� i<b dedik ve yukar�y�da tan�ms�z �s olmamas� i�in = 1 yapt�k)
	{
		us = us*a; // �s 1 oldu a ile �arp�ld� = a, �s bir artt� yine a ile �arpt� a = akare oldu yani b ye kadar �arp�lacak	
	}
	return us;
}


int main(int argc, char** argv) 
{
	int sonuc;
	sonuc = sayilarToplami(5,9);
	cout << "Sonuc: " << sonuc << endl;
	
	sonuc = ushesaplama(2,3);
	cout << "Sonuc: " << sonuc << endl;
	
	
	return 0;
}
