#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//yolcu ekleme yolcu ��karma ve yolcu de�i�ikli�i yapan bir program.
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
		yolcu a; // tekrardan burada bir de�i�ken atama yapaca��z.
		
		cout << i+1 << ". yolcunun ismini giriniz: ";
		cin >> a.isim;
		cout << endl;
		
		cout << "yolcunun Tc NO sunu giriniz: ";
		cin >> a.tcNo;
		cout << endl;
		
		cout << "yolcunun koltuk numarasini giriniz: ";
		cin >> a.koltukNo;
		cout << endl;
		yolcular[i] = a; //yazd�rmam�z i�in buraya kaydetiyoruz art�k bilgileri
		
	}
	
	//�imdi bunlar� yazd�ral�m.
	// yazd�r�rken art�k rama kaydetti�imizi yazd�raca��z

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
//2-) ilk yolcunun ismini pointer ve struct yap�s� ile de�i�tirdik.
	cout << "**************************************************************" << endl;
	cout << "yeni bilgiler: " << endl;
	yolcudegisimi(&yolcular[0], "Betul");
	//yolcu de�i�imi yap�ld�ktan sonra yeni yolcular�n listesini bast�ral�m;
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
//3-) ilk yolcunun ismini ve kay�t numaralar�n� sildik mesela biletini iptal ettirmi� olabilir.
	// �imdi bir yolcuyu silelim;
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
