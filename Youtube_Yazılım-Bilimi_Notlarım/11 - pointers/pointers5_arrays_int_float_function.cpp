#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int maks(int *a, int uzunluk) { // pointer olarak aldýgýmýzda gonderdýgýmýz degýskenýn baslangýcýný aldýgý ýcýn assagýda a[i] gibi dizi seklýnde kullanabýlýrz a yý
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

