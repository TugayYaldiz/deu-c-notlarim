#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int maks(int *a, int uzunluk) { // pointer olarak ald�g�m�zda gonderd�g�m�z deg�sken�n baslang�c�n� ald�g� �c�n assag�da a[i] gibi dizi sekl�nde kullanab�l�rz a y�
	int maks = a[0];
	
	int i;
	
	for (i=1; i<uzunluk ; i++) {
		if(a[i] > maks){
			maks = a[i];
		}
	}
	
	return maks;
}

int main() {
	//setlocale(LC_ALL, "Turkish");

	int sayilar[5] = {3,4,40,100,50};
	
	int maxS = maks(sayilar,5);
	
	printf("Sayilar dizisinin en buyuk elemani %d dir.", maxS);

	







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

