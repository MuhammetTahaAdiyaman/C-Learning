#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//iterative fonksiyon ve recursive fonksiyon konu anlatýmý ufak not defterinde de daha açýklamalý anlatým vardýr.
int iterativeFaktoriyel(int sayi)
{	int carpim=1; //yapmamýzýn sebebi faktöriyel kavramýný oluþturmak.
	for(int i=1; i<=sayi; i++)
	{
		carpim = carpim*i;
	}
	return carpim;
}

int recursiveFaktoriyel(int sayi)
{
	if(sayi==1 || sayi==0) // 0! ve 1! == 1 olduðu için biz bu þekilde yazdýk
	{
		return 1;  //burada ise 1 döndürmesini istedik sayýmýzýn. yukarýda ki açýklamaya baðlý olarak
	}
	else
	{
		return sayi*recursiveFaktoriyel(sayi-1); // ilk iterative fonksiyonun da i++ yaptýk bir nevi arttýrdýk sebebi 1 ile çarpmaya baþladýðý için ama burada biz
		//sayý*sayi-1 ile çarpýyoruz çünkü biz burada direk sayýyý giriyoruz örneðin 6 bunun faktöriyel olmasý için 6.5.4.3.2.1 diyerek azalmasý gerekiyor ondan dolayý -1 yaptýk.
	}

}





int main(int argc, char** argv) {
 	int x = iterativeFaktoriyel(5);
	 cout << x << endl;	
	int y = recursiveFaktoriyel(4);
	 cout << y << endl;
	return 0;
}

