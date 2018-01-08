#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

void ort(int *sayilar,int uz, int *snc) {
	int gecici;
	
	for(int j = 0; j < uz; j++) {
		gecici += *(sayilar+j); //pointerý hareket ettýrýyoruz
	}
	
	int ort=gecici/uz;
	
	*snc = ort;
	
}

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int kacS,sonuc;
	
	printf("kaç sayý gýreceksýnýz ");
	scanf("%d",&kacS);
	
	int sayD[kacS];
	
	for(int i = 0;i<kacS;i++) {
		printf("%d. sayýyý girin\n",i+1);
		scanf("%d",&sayD[i]);
	}
	ort(sayD,kacS,&sonuc); // dizi pointerlarýnda & la gondermene gerek yok, ya da &sayD[0] seklýnde de gondere býlýrz
	printf("3 sayýnýn ortalamasý:%d",sonuc);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

