#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// kullan�c� ad� ve �ifre girilmesini istenen program.
int main(int argc, char** argv) {

	string eMail;
	string parola;
	
	string kontrolEmail = "admin@admin.com";
	string kontrolParola = "admin";
	
	cout << "Lutfen Kullanici Adi ve Sifrenizi giriniz: ";
	cin >> eMail >> parola;
// && oper�t�r� kulland�k giri� yapabilmemiz i�in ikisininde do�ru olmak zorundad�r.	
	if(kontrolEmail == eMail && kontrolParola == parola )
	{
		cout << "Basarili giris yaptiniz " << endl;
	}
	// biz burada veya operat�r�n� kulland���m�z i�in ikisinden biri yanl�� ��karsa;
	// bize bir bilgi yanl��l��� oldu gibisinden mesaj gelmesi i�in yapal�m.
	else if(kontrolEmail == eMail || kontrolParola == parola)
	{
		cout << "bir bilgiyi yanlis girdiniz" << endl;
	}
// e�er program buraya kadar ula�abiliyorsa t�m bilgileri yanl�� girmi�tir.	
	else 
	{
		cout << "Butun bilgileri tekrardan kontrol ediniz." << endl;
	}
	

	return 0;
}
