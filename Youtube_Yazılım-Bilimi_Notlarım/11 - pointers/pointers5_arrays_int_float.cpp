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


	int sayilar[5] = {1,2,3,4,5};
	
	int *p = sayilar; // bu int *p = &sayilar[0] a e�it , direk say�lar diyerek bu dizinin baslang�c deger�n� at�yab�l�r�z pointer'a
	
	/*
	printf("%u\n",p);
	printf("%u\n",(p+1)); // int 4 byte yer tuttugu �c�n 4 4 artm�s oluyo , p+1 ile array�n 2.eleman�na gidebiliriz yani
	printf("%u\n",(p+2)); 
	*/
	
	// pointer�n base ald�g� deg�sken�n deger�n� ald�k
	printf("%u\n",*p);
	printf("%u\n",*(p+1)); // *(p+1) ---------> p[1]
	printf("%u\n",*(p+2));
	printf("%u\n",*(p+3)); 
	printf("%u\n",*(p+4));
	
	printf("\n");
	
	// pointer�n base ald�g� deg�sken�n deger�n� ald�k
	printf("%u\n", p[0]);
	printf("%u\n", p[1]); // *(p+1) ---------> p[1]
	printf("%u\n", p[2]);
	printf("%u\n", p[3]); 
	printf("%u\n", p[4]);
	 
	





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

