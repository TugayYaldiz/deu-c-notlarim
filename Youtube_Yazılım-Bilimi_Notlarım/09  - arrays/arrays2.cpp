#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

// kullanýcýdan 5 sayý alarak bunlarýn aritmetik ortlarýný al

int main() {
	setlocale(LC_ALL, "Turkish");
	
	float sayilar[5], toplam=0.0;
	int i;
	for(i=0;i<5;i++) {
		
		printf("Bir Sayý giriniz:");
		scanf("%f", &sayilar[i]);
	}

	for(i=0; i<5;i++) {
		toplam+=sayilar[i];
	}

	printf("Girdiðiniz sayýlarýn aritmetik ortalamasý %.2f'dir.", toplam/5);






	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

