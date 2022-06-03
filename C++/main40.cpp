#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//yolcu ekleme yolcu çýkarma ve yolcu deðiþikliði yapan bir program.
	struct yolcu{
		string isim;
		int tcNo;
		int koltukNo;
	};

//2-)
	void yolcudegisimi(yolcu*yolcuismidegistirme, string gelecekisim)
	{	
		yolcuismidegistirme->isim = gelecekisim;
	}
//3-)	
	void yolcusilme(yolcu*c)
	{
		c -> isim = "";
		c -> tcNo = 0;
		c -> koltukNo = 0;
	}

int main(int argc, char** argv) {
	
	yolcu yolcular[3];
	
	for(int i = 0; i<3; i++)
	{	
		yolcu a; // tekrardan burada bir deðiþken atama yapacaðýz.
		
		cout << i+1 << ". yolcunun ismini giriniz: ";
		cin >> a.isim;
		cout << endl;
		
		cout << "yolcunun Tc NO sunu giriniz: ";
		cin >> a.tcNo;
		cout << endl;
		
		cout << "yolcunun koltuk numarasini giriniz: ";
		cin >> a.koltukNo;
		cout << endl;
		yolcular[i] = a; //yazdýrmamýz için buraya kaydetiyoruz artýk bilgileri
		
	}
	
	//þimdi bunlarý yazdýralým.
	// yazdýrýrken artýk rama kaydettiðimizi yazdýracaðýz

	cout << "**************************************************************" << endl;
	for(int i=0; i<3; i++)
	{
		cout << "isim: " << yolcular[i].isim << endl;
		cout  << endl;
		cout << "TC no: " << yolcular[i].tcNo << endl;
		cout << endl;
		cout << "Koltuk no: " << yolcular[i].koltukNo << endl;
		cout << endl;
	}
	cout << endl;
//2-) ilk yolcunun ismini pointer ve struct yapýsý ile deðiþtirdik.
	cout << "**************************************************************" << endl;
	cout << "yeni bilgiler: " << endl;
	yolcudegisimi(&yolcular[0], "Betul");
	//yolcu deðiþimi yapýldýktan sonra yeni yolcularýn listesini bastýralým;
	cout << endl;
		for(int i=0; i<3; i++)
	{
		cout << "isim: " << yolcular[i].isim << endl;
		cout  << endl;
		cout << "TC no: " << yolcular[i].tcNo << endl;
		cout << endl;
		cout << "Koltuk no: " << yolcular[i].koltukNo << endl;
		cout << endl;
	}
	cout << "**************************************************************" << endl;
//3-) ilk yolcunun ismini ve kayýt numaralarýný sildik mesela biletini iptal ettirmiþ olabilir.
	// þimdi bir yolcuyu silelim;
	yolcusilme(&yolcular[0]);
	cout << endl;
		for(int i=0; i<3; i++)
	{
		cout << "isim: " << yolcular[i].isim << endl;
		cout  << endl;
		cout << "TC no: " << yolcular[i].tcNo << endl;
		cout << endl;
		cout << "Koltuk no: " << yolcular[i].koltukNo << endl;
		cout << endl;
	}

	cout << "**************************************************************" << endl;	
	return 0;
}
