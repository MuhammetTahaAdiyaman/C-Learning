#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//fibonacci serisini yapacaðýz(recursive fonkiyona örnek vereceðiz)

int fibonacci(int indisdegeri)
{
	if(indisdegeri==0 || indisdegeri ==1) //1-1-2-3-5-8 sýrasýndan dolayý 0 ve 1. indisler 1 olduðu için if kavramýnda bunlarý 1 yaptýk
	{
		return 1;
	}
	else
	{
		return fibonacci(indisdegeri-1) + fibonacci(indisdegeri-2); // daha sonra fn = fn-1 + fn-2 kuralýnda fibonacci ortaya çýktýðý için biz burada bu kuralý return ettik
	}

}

int toplamdeger(int sayi)
{
	int toplam=0;
	for(int i=0; i<=sayi; i++)
	{
		toplam = toplam+fibonacci(i);
	}
	return toplam;
	
	
}

int main(int argc, char** argv) {
	
	int x0 = fibonacci(0);	//burada ise indis deðerlerini bulduk 0.indise0 verdik if e giriðinden =1 oldu
	int x1 = fibonacci(1);  //burada ise indis deðerlerini bulduk 1.indise1 verdik if e giriðinden =1 oldu
	int x2 = fibonacci(2);	//burada ise indis deðerine 2 verdik yani else girer f(2) = f(2-1)+f(2-2) buradan da 1+1 = 2 oldu
	int x3 = fibonacci(3);	//burada ise indis degerine 3 verdik yani else girer f(3) = f(3-1)+f(3-2) buradan da f(2)=2 + f(1) =1 = 3 olur
	int x4 = fibonacci(4);	// burada ise indis degerine 4 verdik yani else girer (f4) = f(4-1)+f(4-2) = f(3)+f(2) = 3+2 =5 oldu.
	int x5 = fibonacci(5); 	// burada ise indis degerine 5 verdik yani else girer f(5) = f(5-1)+f(5-2) = f(4)+f(3) = 5+3 =8 oldu.

	cout << x0 << " " << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl;
	//1-)eðer biz fibonacci dizelerinin arasýndaki sayýlarýn toplamýný bulmak istersek eðer ayrý bir fonksiyon olarakda yazabiliriz burada da iþlem yapabiliriz.
/*	int toplam=0;
	for(int i=0; i<=5; i++)
	{
		toplam = toplam+fibonacci(i);	//biz burada sadece fibonacci(5) dizesinde ki toplam deðeri aldýk eðer istedigimiz bir sayýnýn degerini istersek yukarýya ayrý bir fonksiyon olarak oluþturup bastýrabiliriz.
	}
	cout << "toplam deger: " << toplam << endl;
*/

//2-) yukarýda oluþturdugumuz fonksiyonda da toplamý bastýrmamýz için þimdi kullanýcýdan kaçýncý dizeden itibaren toplatmak istiyorsa bir deðer alalým.
	int sayi1;
	cout << "Lutfen fibonacci serisinde toplatmak istediginiz sayý aralýgýna esit olan degeri giriniz: ";
	cin >> sayi1;
	
	int sayitoplami= toplamdeger(sayi1);
	cout << "Toplam deger: " << sayitoplami << endl;
	return 0;
}
