#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//fonksiyonda int ve diðer tipler(bir fonksiyon yapacaðýz fonksiyonumuzun amacý a ve b diye iki sayýmýz var bunlarýn arasýndaki sayýlarýn toplamýný bulacak.)
//burada void kullanmadan return fonksiyonu ile yapacaðýz

int sayilarToplami(int a, int b)
{
	int toplam=0;
	for(int i=a+1; i<b; i++)
	{
		toplam = toplam+i;
	}
	return toplam;
}
//yine bir fonksiyon yapalým bu fonksiyon a ile b parametresi alacak ve a üzeri b yi hesaplayacak;(#cmath normalde pow fonksiyonu ile bunu hallededebiliriz)
int ushesaplama(int a, int b)
{
	int us=1;
	for (int i=0; i<b; i++)//(a üzeri b demek b tane a nýn yan yana gelerek çarpýlmasý demek ondan dolayý i<b dedik ve yukarýyýda tanýmsýz üs olmamasý için = 1 yaptýk)
	{
		us = us*a; // üs 1 oldu a ile çarpýldý = a, üs bir arttý yine a ile çarptý a = akare oldu yani b ye kadar çarpýlacak	
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
