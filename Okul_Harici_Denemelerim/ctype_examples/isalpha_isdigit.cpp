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
	setlocale(LC_ALL, "Turkish");

	int deger = 'a';
	//int deger = '9';
	//int deger = '$';
	
	if( isalpha(deger) ){
		printf("%c alfabetik bir de�er",deger);
	}else if( isdigit(deger) ) {
		printf("%c numeric bir de�er",deger);
	}else {
		printf("%c wtf was that",deger);
	}









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

