#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/


int carp(int matris[], int size) {
	
	int carpim = 1;
	
	int i=0;
	
	for(;i<size;i++) {
		carpim*= matris[i];
	}
	return carpim;
	
} // c array�n size�n� tutmuyor functionda buyuzden ekstra olarak boyutunu kend�m�z gonder�yoruz 

int main() {
	setlocale(LC_ALL, "Turkish");

	int sayilar[5] = {3,55,8,6,7};
	
	printf("%d",carp(sayilar,5));








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

