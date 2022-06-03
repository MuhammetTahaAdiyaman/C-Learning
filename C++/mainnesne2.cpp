#include <iostream>
#include "ogrenci.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	
	ogrenci ogr1;
	ogr1.ad = "Taha";
	ogr1.soyad = "Adiyaman";
	ogr1.yas = 21;
	
	ogr1.ogrenciBilgileriniSoyle();
	
	
	
	return 0;
}
