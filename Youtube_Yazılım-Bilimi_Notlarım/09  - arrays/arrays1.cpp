#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

// dizilerin indexi 0 dan ba�lar
// sizeof(sayilar)/sizeof(int) veya int yerine t�r� neyse dizinin o kullan�l�p dizinin ka� elemanl� oldugu bulunab�l�r 
int main() {
	setlocale(LC_ALL, "Turkish");

	int sayilar[] = {1,2,3,4,5,8,9};
	int i=0;
	for( ;i<=6; i++) { // i yi yukarda 0 olarak tan�mlad���m�z �c�n ilk k�sma b�sey yazmm�za gerek yok
		printf("%d\n", sayilar[i]);
	}
	








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

