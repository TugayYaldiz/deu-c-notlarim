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
	
	int vize1,vize2,final;
	float dersort,ortalama;
	
	printf("1.vize notunu girin:");
	scanf("%d",&vize1);
	
	printf("2.vize notunu girin:");
	scanf("%d",&vize2);
	
	printf("final notunu girin:");
	scanf("%d",&final);
	
	printf("Üniversite ortalaman kaç?:");
	scanf("%f",&ortalama);
	
	dersort = (vize1+vize2+final)/3.0;
	
	if(dersort>60) {
		printf("dersten geçtin.");
	} else if(dersort>50) { // else if dedýgýmýz ýcýn zaten yukarýdaki kosuldan gecememýs oluyor yaný 60 ýn altýnda bu not burda tekrardan dersort>50 && dersort<60 gibi biþey yazmamýza gerek olmadan sadece dersort>50 yazabýlýrýz
		printf("büte kaldýn");
		
		if(ortalama < 2.5) {
			printf("\nBütü geçsende dersi seneye alacaksýn ortalaman leþ bla bla.");	
		}
	} else {
		printf("kaldýn");
	}







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

