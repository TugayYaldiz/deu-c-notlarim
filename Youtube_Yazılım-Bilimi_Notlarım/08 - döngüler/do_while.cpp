#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	setlocale(LC_ALL, "Turkish");

	int n=10;
	
	do {
		printf("%d\n",n);
		n--;
	} while(n > 0);
	
	// do while daha kosula girmeden i�lemleri birkere cal�st�r�r, hi� ho� de�il yan� kosulumuz while (n>10) olsayd� ba�ta birkere i�lemler� yap�p daha sonra yapm�yacakd�
	// do while yazarken while a ; yazmam�z gerek








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

