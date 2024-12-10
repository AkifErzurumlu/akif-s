#include<iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int fatura=1, indirim, sonuc, saat, pc, kol, urun, a=1;
	string musteri_tipi;
	
basadon:
	

	cout << "hangi ürünü alacaksýnýz\npc=1\nsaat=2\nkol=3 numaralarý tuþlayýnýz" << endl;
	cin >> urun;
	
	switch (urun)
	{
	case 1:cout << "pc fiyatý 500 tl dir kaçtane almak istersiniz" << endl;
		cin >> pc;
		fatura = 500 * pc;
		break;
	case 2:cout << "pc fiyatý 300 tl dir kaçtane almak istersiniz" << endl;
		cin >> saat;
		fatura = 300 * saat;

		break;
	case 3:cout << "pc fiyatý 200 tl dir kaçtane almak istersiniz" << endl;
		cin >> kol;
		fatura = 200 * kol;
		break;
	default: cout << "geçerli deger giriniz";
		break;
	}
	a = a + fatura - 2;
	
	cout << "müþteri tipini gir" << endl;
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
	cout << "almak istediðiniz bir þey yoksa uygulamayý kapatabilirsiniz";
	goto basadon;


	return 0;
}