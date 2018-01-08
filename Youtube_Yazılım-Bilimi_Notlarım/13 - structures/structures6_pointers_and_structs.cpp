#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

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
	printf("%s %s %d", tut->isim, tut->soyisim, tut->numara); // pointer ýle struct yapýlarýna ulasýrken -> kullanýyoruz normalde *p yazarak int bi degiþkenýn degrýný ulasablýrdýk burda ->

	// *tut.isim == tut->isim





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

