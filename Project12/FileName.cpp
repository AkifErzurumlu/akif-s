#include<iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int fatura=1, indirim, sonuc, saat, pc, kol, urun, a=1;
	string musteri_tipi;
	
basadon:
	

	cout << "hangi �r�n� alacaks�n�z\npc=1\nsaat=2\nkol=3 numaralar� tu�lay�n�z" << endl;
	cin >> urun;
	
	switch (urun)
	{
	case 1:cout << "pc fiyat� 500 tl dir ka�tane almak istersiniz" << endl;
		cin >> pc;
		fatura = 500 * pc;
		break;
	case 2:cout << "pc fiyat� 300 tl dir ka�tane almak istersiniz" << endl;
		cin >> saat;
		fatura = 300 * saat;

		break;
	case 3:cout << "pc fiyat� 200 tl dir ka�tane almak istersiniz" << endl;
		cin >> kol;
		fatura = 200 * kol;
		break;
	default: cout << "ge�erli deger giriniz";
		break;
	}
	a = a + fatura - 2;
	
	cout << "m��teri tipini gir" << endl;
	cin >> musteri_tipi;
	if (fatura < 1000 && musteri_tipi == "a") {
		indirim = a*15/100;
		sonuc = a - indirim;

		cout << sonuc;
	}
	if (1000<=fatura && musteri_tipi == "a") {
		indirim = a * 20 / 100;
		sonuc = a - indirim;

		cout << sonuc;
	}
	if (fatura < 1000 && musteri_tipi == "b") {
		indirim = a * 10 / 100;
		sonuc = a - indirim;

		cout << sonuc;
	}

	if (fatura >= 1000 && musteri_tipi == "b") {
		indirim = a * 15 / 100;
		sonuc = a - indirim;

		cout << sonuc;
	}
	if (fatura < 1000 && musteri_tipi == "c") {
		indirim = a * 5 / 100;
		sonuc = a - indirim;

		cout << sonuc;
	}
	if (fatura >= 1000 && musteri_tipi == "c") {
		indirim = a * 10 / 100;
		sonuc = a - indirim;

		cout << sonuc << endl;
	}
	cout << "almak istedi�iniz bir �ey yoksa uygulamay� kapatabilirsiniz";
	goto basadon;


	return 0;
}