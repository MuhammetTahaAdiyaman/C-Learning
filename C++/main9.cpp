#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//girilen sayýnýn pozitif mi negatif mi olduðunu belirleyen program
int main(int argc, char** argv) {

	float sayi;
	
	cout << "Lutfen bir sayi giriniz: ";
	cin >> sayi;
	
	if(sayi>0)
	{
		cout << "Girmis oldugunuz sayi: " << sayi << " pozitiftir." << endl;
		
	}

else if(sayi==0)
	{
		cout << "Girmis oldugunuz sayi ne pozitif ne de negatiftir."<< endl;	
	}

	else
	{
		cout << "Girmis oldugunuz sayi: " << sayi << " negatiftir." << endl;
	}













	return 0;
}
