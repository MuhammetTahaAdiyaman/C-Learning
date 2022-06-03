#include <iostream>
#include "hayvan.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Hayvan hayvan1;
	
	hayvan1.ad = "Arap";
	hayvan1.cins = "Labrodor";
	hayvan1.yas = 2;
	
	hayvan1.HayvanOzellikleri();
	
	
	
	return 0;
}
