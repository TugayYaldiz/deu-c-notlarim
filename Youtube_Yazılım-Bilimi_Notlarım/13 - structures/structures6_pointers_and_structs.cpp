#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

struct Ogrenci {
	char isim[20];
	char soyisim[20];
	int numara;
};

int main() {
	//setlocale(LC_ALL, "Turkish");

	struct Ogrenci *tut;
	struct Ogrenci ogrenci1;
	
	strcpy(ogrenci1.isim,"Tugay");
	strcpy(ogrenci1.soyisim,"YALDIZ");
	ogrenci1.numara = 40;
	
	tut = &ogrenci1;
	
	printf("%s %s %d\n", ogrenci1.isim, ogrenci1.soyisim, ogrenci1.numara);
	printf("%s %s %d", tut->isim, tut->soyisim, tut->numara); // pointer �le struct yap�lar�na ulas�rken -> kullan�yoruz normalde *p yazarak int bi degi�ken�n degr�n� ulasabl�rd�k burda ->

	// *tut.isim == tut->isim





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

