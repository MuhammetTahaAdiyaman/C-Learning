#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//yapý içinde yapý 
//market ürünlerini reyonlar þeklinde oluþturalým with struct

//KURU GIDA = makarna-baklagil
//KOZMETÝK = parfum-makyaj
//KASAP = tavuk-dana
//MAMAV= sebze-meyve
struct kategori{
	string isim;
	int urunAdeti;
};

struct reyonlar{
	string isim;
	bool acikmi; 
	int urunsayisi;
	kategori *kategoriOzellikleri;//yukarýdaki yapýyý bu yapýnýn içinde kullanýyoruz.
};
//eðer biz bu kategoriyi pointers yani adres þeklinde almak isteseydik nasýl yapacaktýk ? 



int main(int argc, char** argv) {
	
	reyonlar r1; 
	//reyonlar r2 = {"kasap", 1, 300 {"tavuk",150}};//alttakini uyguladýðýmýzda hatayý almamýzýn sebebi biz kategoriyi pointer ile kullanacaðýmýz için degerleri bu þekilde atayamayýz.
	//r1 i ve r2 yi de bastýralým r1 e atama yapmadýk bakalým ne basacak
	reyonlar r2;
	r2.isim = "Kasap";
	r2.acikmi = true;
	r2.urunsayisi = 300;
	//r2.kategoriOzellikleri//iþte tam bu noktada iþler biraz farklýlaþýyor çünkü biz bunu pointer olarak almýþtýk o zaman.
	//kategori adýnda yeni bir nesne çaðýrým iþlemi oluþturacaðýz ayný yukarýda reyonlar r1 gibi
	kategori a = {"tavuk",150};
	//ayrýca bu þeilde oluþturacaðýz.
	//þimdi biz bu a yý r2.kategoriOzelliklerine iþaretliyeceðiz ama a yý adres þeklinde alacaðýz çünkü kategoriyi biz yukarýda pointers þeklinde almýþtýk
	r2.kategoriOzellikleri = &a;
	//artýk bunlarý bastýrýrken de þu þekilde yapacaðýz
	r1=r2;
	cout << r1.isim << endl;
	cout << r2.kategoriOzellikleri->isim <<" "<< r2.kategoriOzellikleri->urunAdeti<< endl;
	//þimdi bu da hata verdi çünkü biz r2.kategoriOzellikleri.isim yazdýk pointer ile tuttðu için -> bu þekilde yazacaðýz.
	
	return 0;
}
