#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

void ort(int *sayilar,int uz, int *snc) {
	int gecici;
	
	for(int j = 0; j < uz; j++) {
		gecici += *(sayilar+j); //pointer� hareket ett�r�yoruz
	}
	
	int ort=gecici/uz;
	
	*snc = ort;
	
}

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int kacS,sonuc;
	
	printf("ka� say� g�receks�n�z ");
	scanf("%d",&kacS);
	
	int sayD[kacS];
	
	for(int i = 0;i<kacS;i++) {
		printf("%d. say�y� girin\n",i+1);
		scanf("%d",&sayD[i]);
	}
	ort(sayD,kacS,&sonuc); // dizi pointerlar�nda & la gondermene gerek yok, ya da &sayD[0] sekl�nde de gondere b�l�rz
	printf("3 say�n�n ortalamas�:%d",sonuc);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

