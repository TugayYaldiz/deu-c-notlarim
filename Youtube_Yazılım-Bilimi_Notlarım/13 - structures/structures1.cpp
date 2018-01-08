#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/


/* 
struct StructName {
	degiskenaTipi degisken1;
	degiskenaTipi degisken2;
	degiskenaTipi degisken1;
	degiskenaTipi degisken1;
	...
	...
	...
	
}
tanýmlamma 
*/

struct Student {
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
};


int main() {
	//setlocale(LC_ALL, "Turkish");

	struct Student tugay = {
		"Tugay",
		"YALDIZ",
		40,
		22
	};

	printf("%s %s %d %d", tugay.isim, tugay.soyisim, tugay.numara, tugay.yas);







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

