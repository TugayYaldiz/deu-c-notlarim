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

struct Ogrenci *degerAl(struct Ogrenci *p) { // bu void donsede olurdu ekstra uzatmaya gerek yok
	
	strcpy(p->isim , "ALi");
	strcpy(p->soyisim ,"Genc");
	p->numara = 455;
	
	return p;
}

void goster(struct Ogrenci *p) {
	
	printf("Ogrenci bilgileri:\nIsim: %s\nSoyisim: %s\nNumara:%d", p->isim, p->soyisim, p->numara);
	
}



int main() {
	setlocale(LC_ALL, "Turkish");

	struct Ogrenci *tut = NULL;
	struct Ogrenci ogrenci1 = {
		"Tugay",
		"YALDIZ",
		40
	};
	
	puts("Eski deðerler:");
	goster(&ogrenci1);
	
	tut = degerAl(&ogrenci1);
	
	printf("\n\n");
	
	puts("Yeni degerler:");
	goster(&ogrenci1);





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

