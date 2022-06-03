#include <iostream>
#include "insan.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	insan insan1;
	
	insan1.ad = "Taha";
	insan1.soyad = "Adiyaman";
	insan1.numara = 123456;
	insan1.yas = 22;
	
	insan1.insanozellikleri();
	
	return 0;
}
