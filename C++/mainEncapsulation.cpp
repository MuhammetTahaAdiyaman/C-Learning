#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Ogrenci{
	
	private:
	string isim;
	int numara;
	
	public:
	void ozelliklerigoster()
	{
			
		cout << isim << " " << numara << endl;
	}
	
	
	
};

int main(int argc, char** argv) {
	
	Ogrenci ogr1;
	
	ogr1.ozelliklerigoster();
	
	
	
	return 0;
}
