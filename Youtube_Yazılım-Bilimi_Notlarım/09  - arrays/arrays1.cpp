#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

// dizilerin indexi 0 dan baþlar
// sizeof(sayilar)/sizeof(int) veya int yerine türü neyse dizinin o kullanýlýp dizinin kaç elemanlý oldugu bulunabýlýr 
int main() {
	setlocale(LC_ALL, "Turkish");

	int sayilar[] = {1,2,3,4,5,8,9};
	int i=0;
	for( ;i<=6; i++) { // i yi yukarda 0 olarak tanýmladýðýmýz ýcýn ilk kýsma býsey yazmmýza gerek yok
		printf("%d\n", sayilar[i]);
	}
	








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

