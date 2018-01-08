#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int main() {
	setlocale(LC_ALL, "Turkish");

	int n=10;
	
	do {
		printf("%d\n",n);
		n--;
	} while(n > 0);
	
	// do while daha kosula girmeden iþlemleri birkere calýstýrýr, hiç hoþ deðil yaný kosulumuz while (n>10) olsaydý baþta birkere iþlemlerý yapýp daha sonra yapmýyacakdý
	// do while yazarken while a ; yazmamýz gerek








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

