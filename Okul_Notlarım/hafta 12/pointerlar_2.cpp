#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	//setlocale(LC_ALL, "Turkish");

	char a='T';
	
	char b='d';
	
	char *p=&a;
	
	p=&b;
	
	printf(" pointer degiskenin degeri %c",*p);
	








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

