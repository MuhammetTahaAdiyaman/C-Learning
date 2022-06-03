/*
1-)

#include <iostream>
using namespace std;
 run this program using the console pauser or add your own getch, system("pause") or input loop 
//biz a ve b sayýlarýný girdiðimiz a = 5 b = 8 olsun biz b= 5 a = 8 yapmak için önceden þu þekilde yapardýk.
int main(int argc, char** argv) {
	
	int sayi1, sayi2, temp;
	cout << "Lutfen iki deger giriniz: ";
	cin >> sayi1 >> sayi2;
	
	cout << "Sayi1 deðeri: " << sayi1 << endl << "Sayi2 degeri: " << sayi2 << endl;
	
	// þimdi ilk hallerini bastýrdýktan sonra ikisinin yerini deðþtirelim.
	temp = sayi1;
	sayi1 = sayi2;
	sayi2 = temp;
	
	cout << "Sayi1'in yeni degeri: " << sayi1 << endl << "Sayi2'nin yeni degeri: " << sayi2 << endl;

// biz bunu bu þekilde yaparak degiþtirmiþ olduk.
	
	return 0;
}
*/


//---------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
2-)

//þimdi biz pointer adresleme ile bunlarý nasýl yapocaðýz ilk önce pointer nedir ona bakalým.
#include<iostream>
using namespace std;


int main(){
	
	
	int sayi1 = 10; //þimdi biz bunu ram da geçici olarak tutuyoruz bunun adresini tutmak için pointera ihtiyacýmýz vardýr.
	//ek madde olarak pointerde "* ve &" iþaretleri kullanýlýr.
	
	int *sayininAdresi = &sayi1;
	
// þimdi sayi1 in tutuldugu adresi ogrenmek için bir yazdýralým bakalým.

	cout << sayininAdresi << endl; // bu adres bilgisayarýn için de bulunan ramda sayi1 in bulundugu yeri gösteririr.
	cout << *sayininAdresi << endl; //pointer(*) ile kullanýp bastýgýmýzda ise bize diyor ki sayinin bulundugu adrese git ve içinde bulunan sayýyý cout ile bas.
	// kýsacasý adresleme iþlemi böyle oluyor.  
	
	
	
	return 0;
}
*/

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
3-)

// þimdi biz bu 1. örnekte sayýlar arasýnda deðiþim örneðini fonksiyon ile yapmaya çalýþalým nasýl olacak ?
#include<iostream>
using namespace std;

void degerleriDegistir(int sayi1, int sayi2)
{
	int temp;
	temp = sayi1;		// biz fonksiyon olarak deðiþim iþlemini yaptýk þimdi bu iþlemleri aþaðýda bastýracaðýz.
	sayi1 = sayi2;
	sayi2 = temp;
	
}

int main()
{
	int sayi1,sayi2;
	cout << "Lutfen iki deger giriniz: ";
	cin >> sayi1 >> sayi2;
	
	cout << "Sayi1 degeri: " << sayi1 << endl << "Sayi2 degeri: " << sayi2 << endl;
	
	degerleriDegistir(sayi1,sayi2);
	
	cout << "Sayi1'in yeni degeri: " << sayi1 << endl << "Sayi2'nin yeni degeri: " << sayi2 << endl;
	
	
//hiç bir deðiþiklik yaþanmadý sayi1 in ilk deðeri de 5 fonksiyondan geçtikten sonra ki ilk deðeri de 5 çünkü;
/* biz nasýl sayi1=5 degeri geçiçi olarak ram de deger olarak tutuluyorsa fonksiyon da açtýðýmý int sayi1 de farklý bir geçiçi degerdir yani;
sayi1 degeri fonksiyonun içinde bulunan sayi1 degerine ve sayi2 degeri fonksiyon içinde bulunan sayi2 degerine eþit degildir bunlarýn hepsi farklý
olarak ram de tutulan degerlerdir. çözüm olarak artýk bu konuda pointerslar devreye girecek yani fonksiyon içinde bulunan deðiþkenlerin adreslerini
kullanýcýnýn girdigi degiþkenlerin adresleri ile birbirine adresleme olacak þekilde yapacaðýz. Yalnýz;
!! fonksiyon içinde bulunanlarý pointers ile(*)- kullanýcýnýn girdiklerini ise adresleme(&) ile alacaðýz.
bunun örneðini 4-) kýsýmda veriyorum.
return 0;
}

*/	
	
//--------------------------------------------------------------------------------------------------------------------------------------------------------------

//yukarýdaki fonksiyon degerleri sayi1 = x sayi2 = y olsun;
#include<iostream>
using namespace std;
void degerleriDegistir(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;		//artýk burada biz bunlarýn degerlerini aþaðýda kullanýcýnýn girdigi deðiþken ile adresleþtirmek için pointer ile girdik.
	*y = temp;
	
}

int main(){
	
	
	int sayi1, sayi2, temp;
	
	cout << "Lutfen iki tane deger giriniz: ";
	cin >> sayi1 >> sayi2;
	
	cout << "Sayi1 in degeri: " << sayi1 << endl << "Sayi2 'nin degeri: " << sayi2 << endl;
	
	degerleriDegistir(&sayi1, &sayi2); // burada ise kullanýcýdan alýnan deðiþkenleri adresledik ve fonksiyon içideki deðerler ile adreslerini kesiþtirdik.
	
	cout << "Sayi1 'in yeni degeri: " << sayi1 << endl << "Sayi2'nin yeni degeri: " << sayi2 <<endl;
	
	
	

	return 0;
} // bu sayede pointer ve adresleme ile fonksionu kullanarak a ve b sayýlarýnýn birbirleri arasýnda ki deðiþimini uygulamýþ olduk
