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

	int toplam = 0;
	
	int i=0;
	
	int sayi;
	
	// for d�ng�s�nde i++ olur continue desek de
	/*for(i=1; i <= 10; i++) {
		if (i%2==1) {
			continue; // tek say� ise a�a��daki i�lemleri yapmadan d�ng�de ilerle
		} 
		
		toplam +=i;
		
	} 
	printf("Toplam = %d",toplam);*/
	
	// while d�ng�s�nde i++ y� continue'n�n altlarnda b�yerde yazarsak sonsuz dongu olusur donguden c�kamaz
	while(i<=10) {
		if (i%2==1) {
			continue; // tek say� ise a�a��daki i�lemleri yapmadan d�ng�de ilerle
		} 
		
		toplam +=i;
		i++;
	} // bir c�kt� vermez cunku continue nun alt�ndak� sat�rlar okunmad�g� �c�n continue oldugunda i artm�yacak ve surekl� o degerde kalarak sonsuz dongu olusturucakt�r.

	printf("\nToplam = %d",toplam);









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

