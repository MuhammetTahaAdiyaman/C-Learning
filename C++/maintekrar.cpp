#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
/*
int sayi1 = 4;
int sayi2 = 5;

cout <<"" << sayi1 << endl << sayi2 << endl;
sayi1 = ++sayi2;
cout <<"" << sayi1 << endl << sayi2 << endl;
*/

//karenin alanýný hesaplayan program*******************

/*int a;
//kare alaný = a^2
//kare çevresi = 4a
cout << "Lutfen bir deger giriniz: ";
cin >> a;
cout <<endl;

cout << "Karenin alani: " << a*a << endl;
cout << "Karenin cevresi: " << 4*a << endl;
*/

// dairenin alanýný ve çevresini hesaplayan bir program********************
/*int yaricap;
cout << "Lutfen dairenin yaricapini giriniz: ";
cin >> yaricap;

float daireninalani = 2*3.14*yaricap;
float dairenincevresi = 3.14*yaricap*yaricap;

cout << "Dairenin Alani: " << daireninalani << endl;
cout << "Dairenin Cevresi: " << dairenincevresi << endl;
*/

//kullanýcýdan string ile bilgiler almak

/*string name;
string surname;
string job;
int age;

cout << "Please enter your name and surname: ";
cin >> name >> surname;

cout << endl;

cout << "Please enter your job: ";
cin >> job;

cout << endl;

cout << "Please enter your age: ";
cin >> age;

cout << "***Information Of User***" << endl;

cout << "Name: " << name << endl << "Surname: " << surname << endl << "Age: " << age << endl;
*/

//e-mail parola iþlemi programý yapalým

/*string Email;
string Password;

string controlEmail = "muhammettahaadiyaman@gmail.com";
string controlPassword = "A1B2C3D4";

cout << "Please enter your mail: ";
cin >> Email;

cout << endl;

cout << "Please enter your password: ";
cin >> Password;

cout << endl;

if(Email == controlEmail && Password == controlPassword)
{
	cout << "Input Success !!" << endl << "***WELCOME***" << endl;
}
else if(Email == controlEmail || Password == controlPassword)
{
	if(Email != controlEmail)
	{
		cout << "e-mail is wrong" << endl << "Please try Ýnput e-mail" << endl;
	}
	else
	{
		cout << "password is wrong" << endl << "Please try input password" << endl;
	}
}
else
{
	cout << "ALL information wrong" << endl;
}

*/

// girilen sayýnýn pozitif mi negatif mi olduðunu belirleyen program

/*int number;

cout << "Please enter a number: ";
cin >> number;

cout << endl;

if(number > 0)
{
	cout << "Entered number is positive";
}
else if(number == 0)
{
	cout << "Entered number is neither positive nor negative";
}
else
{
	cout << "Entered number is negative";
}

*/

//ücgenin tipini söyeleyen program

/*int ucgenAci1, ucgenAci2, ucgenAci3;

cout << "Please enter the ANGLES: ";
cin >> ucgenAci1 >> ucgenAci2 >> ucgenAci3;
cout << endl;
 
float icAcilarTop = ucgenAci1  + ucgenAci2 + ucgenAci3;

if(icAcilarTop == 180)
{
	if(ucgenAci1 == 60 && ucgenAci2 == 60)
	{
		cout << "This triangle is equilateral";
	}
	else if(ucgenAci1 == ucgenAci2 && ucgenAci1 != ucgenAci3)
	{
		cout << "This triangle is isosceles";
	}
	else if(ucgenAci2 == ucgenAci3 && ucgenAci2 != ucgenAci1)
	{
		cout << "This triangle is isosceles";
	}
	else if(ucgenAci3 == ucgenAci1 && ucgenAci3 != ucgenAci2 )
	{
		cout << "This triangle is isosceles";
	}
	else
	{
		cout << "This triangle is unequal";
	}

}
else
cout << "Entered angles is highher or smaller than 180'C";

*/


//elemanlarýn satýþ durumuna göre program

/*string isim1, isim2, isim3;
string soyisim1, soyisim2, soyisim3;
int TcNo1, TcNo2, TcNo3;
bool cinsiyet1, cinsiyet2, cinsiyet3;
int urunAdeti1, urunAdeti2, urunAdeti3;
//true -> erkek
//false -> kadýn

cout << "Lutfen calisanlarin isimlerini ve soyisimlerini giriniz: " << endl;
cin >> isim1 >> isim2 >> isim3;
cin >> soyisim1 >> soyisim2 >> soyisim3;

cout << endl;

cout << "Lutfen calisanlarin tc nolarýný giriniz: " << endl;
cin >> TcNo1 >> TcNo2 >> TcNo3;

cout << endl;

cout << "1.calisanin sorumluluk adeti: ";
cin >> urunAdeti1;

cout << endl;

cout << "2.calisanin sorumluluk adeti: ";
cin >> urunAdeti2;

cout << endl;

cout << "3.calisanin sorumluluk adeti: ";
cin >> urunAdeti3;

cout << endl;

int satis1 = urunAdeti1;
cout << "1.calisan kac urun satti: ";
cin >> satis1;

cout << endl;

int satis2 = urunAdeti2;
cout << "2.calisan kac urun satti: ";
cin >> satis2;

cout << endl;

int satis3 = urunAdeti3;
cout << "3.calisan kac urun satti: ";
cin >>satis3;

cout << endl;

int son1 = urunAdeti1-satis1;

int son2 = urunAdeti2-satis2;

int son3 = urunAdeti3-satis3;

if(son1 != 40)
{
	cout << isim1 << soyisim1 << "isimli calisan basarisiz olmustur.";
}
else 
{
	cout << isim1 << soyisim1 << "isimli calisan basarili olmustur.";
}

if(son2 != 45)
{
	cout << isim2 << soyisim2 << "isimli calisan basarisiz olmuþtur.";
}
else
{
	cout << isim2 << soyisim2 << "isimli calisan basarisiz olmustur.";
}

if(son3 != 30)
{
	cout << isim3 << soyisim3 << "isimli calisan basarisiz olmustur.";
}
else
{
	cout << isim3 << soyisim3 << "isimli calisan basarisiz olmustur.";
}

*/

// hesap makinesi

/*float sayi1, sayi2;
float toplama, cikarma, carpma, bolme;

int islem;

cout << "*********** Hesap Makinesine Hoþgeldiniz ***********" << endl;
cout << "1-TOPLAMA islemi" << endl;
cout << "2-CIKARMA islemi" << endl;
cout << "3-BOLME islemi" << endl;
cout << "4-CARPMA islemi" << endl;	
	
cin >> islem;

cout << endl;

cout << "Lutfen islem yapmak istediginiz iki degeri giriniz: ";
cin >> sayi1 >> sayi2;

cout << endl;

if(islem == 1)
{
	toplama = sayi1 + sayi2;
	cout << "Islem sonucunuz: " << toplama << endl;
}

else if(islem == 2)
{
	cikarma = sayi1 - sayi2;
	cout << "Islem sonucunuz: " << cikarma << endl;
}

else if(islem == 3)
{
	bolme = sayi1 / sayi2;
	cout << "Islem sonucunuz: " << bolme << endl;
}

else if(islem == 4)
{
	carpma = sayi1 * sayi2;
	cout << "Islem sonucunuz: " << carpma << endl;
}	
else
{
	cout << "Hicbir islem tusuna basmadiniz. Lutfen tekrar deneyiniz" << endl;
}
*/

// haftanýn günlerini switch-case ile seçme programý

/*int haftaGunu;

cout << "Hangi haftanin gununu ogrenmek istiyorsunuz ? ";
cin >> haftaGunu;

switch(haftaGunu)
{
	case 1: 
	cout << "Pazartesi";
	break;
	
	case 2:
	cout << "Sali";
	break;
	
	case 3:
	cout << "Carsamba";
	break;
	
	case 4:
	cout << "Persembe";
	break;
	
	case 5:
	cout << "Cuma";
	break;
	
	case 6:
	cout << "Cumartesi";
	break;
	
	case 7:
	cout << "Pazar";
	break;
	
	default:
		cout << "Lutfen 1-7 arasinda bir deger giriniz";
}
*/

//depoya ürün ekleme veya ürün çýkarma programý yazalým
/*
	int stokAdeti;
	char islem;
	int islemAdeti;
	cout << "Lutfen depodaki stok adetini giriniz: ";
	cin >> stokAdeti;
	
	cout << "Depoya urun eklemek isterseniz +'yi eger urun cikarmak isterseniz -'yi tuslayiniz: ";
	cin >> islem;
	
	switch(islem)
	{
		case '+': 
		cout << "Depoya kac adet urun eklenecek: ";
		cin >> islemAdeti;
		stokAdeti = stokAdeti+islemAdeti;
		break;
		
		case '-':
		cout << "Depodan kac adet urun cikarilacak: ";
		cin >> islemAdeti;
		stokAdeti = stokAdeti-islemAdeti;
		break;
		
		default:
		cout << "Sadece depoya urun eklenebilir veya cikarilabilir";	
	}
	
	
	cout << "Son stok durumu: " << stokAdeti;
	
*/

//while mantýðý

/*int sayi;
int toplam = 0;

cout << "Ekrana kactan geriye baslayarak yazdirmaya baslayalim: ";
cin >> sayi;

while(sayi>0)
{
	cout << sayi << endl;
	toplam = toplam+sayi;
	sayi--;	
}	
	
cout << "Kullanicinin girdigi sayilar toplami: " << toplam << endl;	
*/

//faktöriyel döngüsü hesaplayan program yazalim;

/*int faktoriyel;
int sonuc = 1;

cout << "Hesaplamak istediginiz faktoriyeli giriniz: ";
cin >> faktoriyel;

while(faktoriyel>0)
{
	cout << faktoriyel << "!" << endl;
	sonuc = sonuc*faktoriyel;
	faktoriyel--;
}
	
cout << "Islem sonucu: " << sonuc << endl;	
	
*/

/*int sayi;
int TeksayilarinToplami = 0;
int CiftsayilarinToplami = 0;

cout << "Lutfen bir sayi giriniz: ";
cin >> sayi;

while(sayi>0)
{
	if(sayi % 2 == 0)
	{
		CiftsayilarinToplami = CiftsayilarinToplami + sayi;
	}
	
	else if(sayi % 2 != 0)
	{
		TeksayilarinToplami = TeksayilarinToplami + sayi;
	}
	
	sayi--;
} 	
	
cout << "Tek sayilarin toplami: " << TeksayilarinToplami << endl;
cout << "Cift sayilarin toplami: " << CiftsayilarinToplami << endl;	
	
*/


//carpim tablosu 

/*for(int i=1; i<=10; i++){
	for(int j=1; j<=10; j++){
		cout << i << "X" << j << ":" << i*j << endl;
	}
}	
*/

/*int sayilar[5]; 

for(int i = 0; i < 5; i++)
{
	cout << "Dizinin" << i+1 <<". elemanini giriniz: " << endl;
	cin >> sayilar[i];
}

for(int i=0; i<5; i++)
{
	cout << "Dizinin" << i+1 << "nci elemani: " << sayilar[i] << endl;
}	
	
*/
/*string Ogrenci[3];
float Vize1Notlari[3];
float Vize2Notlari[3];
float FinalNotlari[3];
float NotOrt[3];

for(int i=0; i<3; i++)
{
	cout << "Lutfen" << i+1 << ". ogrencinin ismini giriniz: ";
	cin >> Ogrenci[i];
}	
	
cout << endl;
	
for(int i=0; i<3; i++)
{
	cout << "Lutfen" << i+1 << ". ogrencinin 1.vize sonuclarini giriniz: ";
	cin >> Vize1Notlari[i];
}
	
cout << endl;

for(int i=0; i<3; i++)
{
	cout << "Lutfen" << i+1 << ". ogrencinin 2.vize sonuclarini giriniz: ";
	cin >> Vize2Notlari[i];
}	
	
cout << endl;
	
for(int i=0; i<3; i++)
{
	cout << "Lutfen" << i+1 << ". ogrencinin final sonuclarini giriniz: ";
	cin >> FinalNotlari[i];
}		

cout << endl;
	
//1.vize %20, 2.vize %30, final %50;

for(int i=0; i<3; i++)
{
	NotOrt[i] = Vize1Notlari[i] * 0.2 + Vize2Notlari[i] * 0.3 + FinalNotlari[i] * 0.5; 
}	

cout << endl;


for(int i=0; i<3; i++)
{
	cout << i+1 << ". ogrencinin not ortalamasi: " << NotOrt[i] << endl;
	int NotOrtalamasi = NotOrt[i];
	
	if(NotOrtalamasi >= 85)
	{ 
		cout << "Ogrenci AA aldi" <<endl; 
	}
	
	else if(NotOrtalamasi >= 70)
	{
		cout << "Ogrenci BB aldi" << endl;
	}

	else if(NotOrtalamasi >= 55)
	{
		cout << "Ogrenci CC aldi" << endl;
	}
	
	else if(NotOrtalamasi >= 40)
	{
		cout << "Ogrenci DD aldi" << endl;
	}
	
	else
	{
		cout << "Ogrenci FF alarak BUT'e girmesi gerekmektedir" << endl;
	}
	

}	

*/	
	
//string dizileri ile birþeyler yapmaya çalýþsalim

/*string isimler[3];
int yaslar[3];


for(int i=0; i<3; i++)
{
	cout << i+1 << ". kisinin ismini giriniz: " << endl;
	cin >> isimler[i];
}

for(int i=0; i<3; i++)
{
	cout << i+1 << ". kisinin yasini giriniz: " << endl;
	cin >> yaslar[i];
}

for(int i=0; i<3; i++)
{
	cout << i+1 << ". kisinin ismi: " << isimler[i] << "ve" << "yasi: " << yaslar[i] << endl;
}

*/

//kelime içindeki harfleri alfabetik olarak sýralama

/*string dizi;
int kelimesayisi = 0, temp;

cout << "Bir kelime giriniz: ";
cin >> dizi;

//-> \0 = kullanýcýdan girilen sayýnýn sonlandýðýný anladýðý karakterdir bilgisayarýn yani her kelimenin sonunda bulunur
while(dizi[kelimesayisi] != '\0')
{
	kelimesayisi++;
}

int i=0; int j=0;

while(i<kelimesayisi-1)
{
	j=i+1;
	while(j<kelimesayisi)
	{
		if(dizi[i] > dizi[j])
		{
			temp = dizi[i];
			dizi[i] = dizi[j];
			dizi[j] = temp;
		}
	
		j++;
	}
  i++;	
}

cout << dizi << endl;
*/

//fonksiyonlarda kaldým.



























return 0;
}
