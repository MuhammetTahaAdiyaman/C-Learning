#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int iterativeFaktoriyel(int sayi)
{
	int carpim = 1;
	for(int i=1; i<=sayi; i++)
	{
	carpim = carpim*i;
	}
	
	return carpim;
}

int recursiveFaktoriye(int sayi)
{
	if(sayi == 0 || sayi == 1)
	{
		return 1;
	}
	else
	{
		return sayi*recursiveFaktoriye(sayi-1);
	}

}
*/

/*int Fibonacci(int indisDegeri)
{
	if(indisDegeri == 0 || indisDegeri == 1)
	{
		return 1;
	}
	else
	{
		return Fibonacci(indisDegeri-1) + Fibonacci(indisDegeri-2);
	}

}
*/

/*void sayilariDegistir(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
*/

/*void DiziyiGoruntule(int *Dizi, int boyut)
{
	for(int i =0; i<boyut; i++)
	{
		cout << Dizi[i] << endl;
	}
}

void DiziyiArttir(int *Dizi, int boyut, int miktar)
{
	for(int i = 0; i<boyut; i++)
	{
		Dizi[i] = Dizi[i] + miktar;
	}
	
}

void diziyiAzalt(int *Dizi, int boyut, int miktar)
{
	for(int i = 0; i<boyut; i++)
	{
		Dizi[i] = Dizi[i] - miktar;
	}
}

int diziyiTopla(int *Dizi, int boyut)
{
	int toplam = 0;
	for(int i=0; i<boyut; i++)
	{
		toplam = toplam + Dizi[i];
	}
	
	return toplam;
}

int max(int *Dizi, int boyut)
{
	int buyuk = Dizi[0];
	for(int i=0; i<boyut; i++)
	{
		if(buyuk < Dizi[i])
		{
			buyuk = Dizi[i];
		}
	}
	
	return buyuk;
}

int min(int*Dizi, int boyut)
{
	int kucuk = Dizi[0];
	for(int i = 0; i<boyut; i++)
	{
		if(kucuk>Dizi[i])
		{
			kucuk = Dizi[i];
		}
	}
	
	return kucuk;
}

int ortalama(int *Dizi, int boyut)
{
	/*int toplam = 0;
	for(int i=0; i<boyut; i++)
	{
		toplam = toplam + Dizi[i];
	}
	
	int ortalama = toplam/boyut;
	*/
	// eðer daha kisa yoldan bulmak istiyorsak þu þekilde yaparýz yukarýda zaten toplama fonksiyonunu yapmýþtýk o fonksiyonu bunun içinde kullanýrýz
/*	int ortalama = diziyiTopla(Dizi,boyut) / boyut;
	return ortalama;	
}
*/

//stringi dödnürelim

/*string NotHarf(float sayi)
{
	if(sayi>90)
	{
		return "AA";
	}
	else if(sayi >75)
	{
		return "BB";
	}
	else if(sayi > 60)
	{
		return "CC";
	}
	else
	{
		return "FF";
	}
}

*/

/*struct ogrenci{
	
	string isim;
	int no;
	string bolum;
	char cinsiyet;
	
};

*/

struct ogrenci{
	
	int numara;
	string isim;
};

void IsimDegistir(ogrenci *yeniogrenci, string yenisim)
{
	yeniogrenci -> isim = yenisim;
}

void OgrenciOlustur(ogrenci *crogr, string yeniisim, int yeninumara)
{
	crogr -> isim = yeniisim;
	crogr -> numara = yeninumara;
}

void Ogrencigoster(ogrenci ogr)
{
	cout << "Isim: " << ogr.isim << " " << "No: " << ogr.numara << endl;
}


int main(int argc, char** argv) {


/*int sayi;
cout << "Lutfen hesaplamak istediginiz faktoriyel sayisini yaziniz: ";
cin >> sayi;

cout << "Ýslem sonucnuz: " << recursiveFaktoriye(sayi) << endl;	
*/	
	
/*int x0 = Fibonacci(0);	
int x1 = Fibonacci(1);
int x2 = Fibonacci(2);
int x3 = Fibonacci(3);
int x4 = Fibonacci(4);
int x5 = Fibonacci(5);	

cout << x0 << " " << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 <<endl;
*/

/*int sayi1, sayi2, temp;

cout << "Lutfen iki sayi giriniz: ";
cin >> sayi1 >> sayi2;

cout << "Sayi1: " << sayi1 << "Sayi2: " << sayi2 << endl;

sayilariDegistir(&sayi1,&	sayi2);

cout << "Sayi1: " << sayi1 << "Sayi2: " << sayi2 << endl;
*/

/*int sayilar[] = {2,4,6,8}; 
DiziyiGoruntule(&sayilar[0],4);

cout << "***********************************" << endl;
cout << "Dizinin 3 artmis hali" << endl;
DiziyiArttir(&sayilar[0], 4, 3);
DiziyiGoruntule(&sayilar[0],4);

cout << "***********************************" << endl;
cout << "Dizinin 2 azalmis hali" << endl;
diziyiAzalt(sayilar,4,2);
DiziyiGoruntule(&sayilar[0],4);

cout << "***********************************" << endl;
cout << "Dizi elemanlarini toplayacagiz" << endl;
DiziyiGoruntule(&sayilar[0],4);
cout << "Dizinin elemanlari toplami: " << diziyiTopla(sayilar,4);

cout << "***********************************" << endl;
cout << "Dizi içindeki en buyuk sayiyi bulacagiz" << endl;
DiziyiGoruntule(&sayilar[0],4);
cout << "Dizinin en buyuk sayisi: " << max(&sayilar[0],4);
	
cout << "***********************************" << endl;
cout << "Dizi içindeki en kucuk sayiyi bulacagiz" << endl;
DiziyiGoruntule(&sayilar[0],4);
cout << "Dizinin en kucuk sayisi: " << min(&sayilar[0],4);

cout << "***********************************" << endl;
cout << "Dizinin ortalamasini bulacagiz" << endl;
DiziyiGoruntule(&sayilar[0],4);
cout << "Dizinin elemanlari toplami: " << diziyiTopla(sayilar,4) << endl;
cout << "Dizinin ortalamasi: " << ortalama(&sayilar[0],4);
*/

//string harfi döndürelim

/*int Vize,Final;

cout << "Lutfen sirayla vize ve final notlarini giriniz: ";
cin >> Vize >>Final;

int ortalama = Vize*0.4 + Final*0.6;
cout << "Ogrencini Notu " << NotHarf(ortalama) << "Dusmustur" << endl;
*/
/*ogrenci ogr1;
cout << "Lutfen ogrencinin ismini giriniz: ";
cin >> ogr1.isim;

cout << endl;

cout << "Lutfen ogrencinin no sunu giriniz: ";
cin >> ogr1.no;

cout << endl;

cout << "lUtfen ogrencinin bolumunu giriniz: ";
cin >> ogr1.bolum;

cout << endl;

cout << "Lutfen ogrencinin cinsiyetini giriniz: ";
cin >> ogr1.cinsiyet;

cout << endl;

cout << "*********************************************" << endl;

cout << "Isim: " << ogr1.isim << endl;
cout << "No: " << ogr1.no << endl;
cout << "Bolum: " << ogr1.bolum << endl;
cout << "Cinsiyet: " << ogr1.cinsiyet << endl;
*/


ogrenci ogr1;

OgrenciOlustur(ogr1,"Fikret",181005039);

Ogrencigoster(ogr1);










	return 0;
}
