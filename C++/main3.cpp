#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//k�p�n yanal alanlar�n� ve hacmini hesaplayan program
int main(int argc, char** argv) {
	
	float kupunBirKenari;
	
	cout << "Lutfen kupun bir kenarini giriniz: " << endl;
	
	cin >> kupunBirKenari;
	
	cout << "Kupun yanal alanlarinin toplami: " << 6 * kupunBirKenari << endl;
	
	cout << "Kupun Hacmi: " << kupunBirKenari * kupunBirKenari * kupunBirKenari << endl;
	
	
	//bir di�er �ekilde de yap�labilir
	//float = kupunYanalAlanlar�n�nToplami;
	//float = kupunHacmi;
	
	//kupunYanalAlanlar�n�nToplami = 6 * kupunBirKenari;
	
	//kupunHacmi = kupunBirKenari * kupunBirKenari * kupunBirKenari ;
	
	// cout << "Kupun yanal alanlar�n�n toplam�: " << kupunYanalAlanlar�n�nToplami << endl;
	// cout << "Kupun Hacmi: " << kupunHacmi << endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
