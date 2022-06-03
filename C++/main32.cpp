#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Genel bir tekrar örneðidir.
void karesiniHesaplama(int sayi)
{
	int sonuc = 0;
	sonuc = sayi*sayi;
	cout << "Sayinin karesi: " << sonuc << endl;
}

void isimsoyle()
{
	cout << "Selam millet c++ nasil gidiyor ?" << endl;
}

int kupunuHesaplama(int sayi2)
{
	int sonuc2;
	sonuc2 = sayi2*sayi2*sayi2;
	return sonuc2;
}

int sayitoplami(int a, int b)
{
	int toplam =0;
	for(int i=a+1; i<b; i++)
	{
		toplam = toplam+i;
	}
	return toplam;
}

void isminisoyle()
{
	cout << "Taha" << endl;
}

void isminisoyle(string isim)
{
	cout << isim <<endl;
}

int iterativeFaktoriyel(int sayi7)
{
	int carpim = 1;
	for(int i=1; i<=sayi7; i++)
	{
		carpim = carpim*i;
		
	}
	return carpim;
}

int recursiveFaktoriyel(int sayi9)
{
	if(sayi9 == 0 || sayi9 == 1)
	{
		return 1;
	}
	else
	{
		return sayi9*recursiveFaktoriyel(sayi9-1);
	}
	
}
int Fibonacci(int sayi11)
{
	if(sayi11 == 0 || sayi11 == 1)
	{
		return 1;
	}
	else
	{
		return Fibonacci(sayi11-1) + Fibonacci(sayi11-2);
	}
}
int main(int argc, char** argv) {

int sayi1;
cout << "Lutfen karesini hesaplamak istedigiiniz sayiyi giriniz: "<< endl;
cin >> sayi1;

karesiniHesaplama(sayi1);
isimsoyle();	

int sayi3;
cout << "Lutfen kupunu hesaplamak istediginiz sayiyi giriniz: " << endl;
cin >> sayi3;

int kupu = kupunuHesaplama(sayi3);
cout << "Sayinin kupu: " << kupu << endl;

int sayi6,sayi7;
cout << "Lutfen hangi sayi degerleri arasinda kalan sayilari toplamak istiyorsaniz o sayýlarý giriniz ";
cin >> sayi6 >> sayi7;

int sonuc = sayitoplami(sayi6,sayi7);
cout << "Sonuc: " << sonuc << endl;

isminisoyle();
isminisoyle("Adiyaman");

int sayi8;
cout << "Lutfen faktoriyel almak istediginiz sayiyi giriniz: " << endl;
cin >> sayi8;

int SONUC = iterativeFaktoriyel(sayi8);
cout << "Faktoriyel Sonucu: " << SONUC << endl;

int sayi10;
cout << "Lutfen faktoriyel almak iþtediginiz 2.sayiyi giriniz: "<< endl;
cin >> sayi10;

int ssonuc = recursiveFaktoriyel(sayi10);
cout << "Faktoriyel 2.sayinin sonucu: " << ssonuc << endl;

int x0 = Fibonacci(0);
int x1 = Fibonacci(1);
int x2 = Fibonacci(2);
int x3 = Fibonacci(3);
int x4 = Fibonacci(4);
int x5 = Fibonacci(5);

cout << "0" << " " << "1" << " " << "2" << " " << "3" << " " << "4" << " " << "5" << " " << endl;
cout << x0 << " " << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << " " << endl;

// fibonacci de belirli bir indis degerine kadar toplamak istersek.

int Toplam=0;
for(int i=0; i<=3; i++)
{
	Toplam = Toplam+Fibonacci(i);
}

cout << "Degerlerin toplamý: " << Toplam << endl;
	return 0;
}
