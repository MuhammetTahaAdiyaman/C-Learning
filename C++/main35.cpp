#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// biz normalde const ile bir deger atat���m�zda o de�er de��miyordu ama pointer adresleme ile biz o de�elerde de�i�iklik yapabilece�iz
//��nk� pointer de�erin adresine gidiyor de�erin adresinden de�i�iklik yapabiliriz ama de�erde de�i�iklik yapamay�z.
//biz �imdi bir aral�k bast�ral�m bu aral��� temsilen iki const l� de�i�ken alal�m.

//�imdi iki const ifadesini toplayal�m

int topla(const int x, const int y)
{	
	int toplami;
	toplami = x+y;
	return toplami;
}

int main(int argc, char** argv) {

topla(5,6);
cout << topla;	
	return 0;
}
