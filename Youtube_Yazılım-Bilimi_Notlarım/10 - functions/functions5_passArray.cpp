#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/


int carp(int matris[], int size) {
	
	int carpim = 1;
	
	int i=0;
	
	for(;i<size;i++) {
		carpim*= matris[i];
	}
	return carpim;
	
} // c arrayýn sizeýný tutmuyor functionda buyuzden ekstra olarak boyutunu kendýmýz gonderýyoruz 

int main() {
	setlocale(LC_ALL, "Turkish");

	int sayilar[5] = {3,55,8,6,7};
	
	printf("%d",carp(sayilar,5));








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

