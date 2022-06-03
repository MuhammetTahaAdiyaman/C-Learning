#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// biz normalde const ile bir deger atatýðýmýzda o deðer deðþmiyordu ama pointer adresleme ile biz o deðelerde deðiþiklik yapabileceðiz
//çünkü pointer deðerin adresine gidiyor deðerin adresinden deðiþiklik yapabiliriz ama deðerde deðiþiklik yapamayýz.
//biz þimdi bir aralýk bastýralým bu aralýðý temsilen iki const lý deðiþken alalým.

//þimdi iki const ifadesini toplayalým

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
