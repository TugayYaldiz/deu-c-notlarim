#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

void islem(int *basamakTopP, float *basamaklarP, int uz) {
		for (int j=1;j<=uz;j++) {
			if(j==1) {
				if(basamaklarP[j]!=0) { // 0 a bolunme hatas� ver�yor bu kosulu eklemezsek 
				printf("%d basamakl� sayilar: %d tane ortalamas� %.2f\n",j,basamakTopP[j]-1,(basamaklarP[j]/(basamakTopP[j]-1)));
				}
			} else {
				if(basamaklarP[j]!=0) { // 0 a bolunme hatas� ver�yor bu kosulu eklemezsek 
					printf("%d basamakl� sayilar: %d tane ortalamas� %.2f\n",j,basamakTopP[j],(basamaklarP[j]/basamakTopP[j]));	
				}				
			}	
		}
}


int main() {
	setlocale(LC_ALL, "Turkish");
	int  sayi=1, i=0, basamak=1, gecici,basamakTop[100], enyuk=0;
	float basamaklar[100];
	
	/* butun dizi degerlerini ba�ta 0 yapmazsak 56. ve 58. sat�rdaki += sa�mal�yor dizide */
	for(int t=0;t<100;t++) {
		basamakTop[t]=0;
	}
	
	for(int x=0;x<100;x++) {
		basamaklar[x]=0;
	}
	
	/* butun dizi degerlerini ba�ta 0 yapmazsak 56. ve 58. sat�rdaki  += ler sa�mal�yor dizide */
	
	while(sayi!=0) {
		printf("%d. sayiyi girin: ",i+1);
		scanf("%d",&sayi);
		gecici = sayi;
		while(gecici>=10) {
			gecici/=10;
			basamak++;
		}
		
		if(basamak > enyuk) {
			enyuk=basamak;
		}
		
		
		basamakTop[basamak] += 1;
		
		basamaklar[basamak] += sayi;

		i++;
		basamak=1;
	}
	printf("\n");
	islem(&basamakTop[0],&basamaklar[0],enyuk);
	
	






	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

