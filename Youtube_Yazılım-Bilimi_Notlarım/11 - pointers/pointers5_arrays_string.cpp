#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int customStrlen(char *p){
	int uzunluk = 0;
	int i = 0;
	
	for(; p[i] != '\0' ;i++) { // nul karaktere denk gelmeyene kadr d�z�y� dondurducez
		uzunluk++;
	}
	return uzunluk;
}

int main() {
	//setlocale(LC_ALL, "Turkish");


	char yazi[] = "Tura";

	char *p = yazi; //yaz� arr �n baslang�c deger�n� atad�k

	printf("%d", customStrlen(yazi));
	
	/*
	printf("%s\n", yazi);
	printf("%s\n", p);
	printf("%s\n", p+1);
	printf("%s\n", p+2); // null karaktere g�dene kadar yapab�l�rz boyle
	*/

	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

