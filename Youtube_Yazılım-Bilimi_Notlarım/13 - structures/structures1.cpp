#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/


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
tan�mlamma 
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

