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
	
	dersort = (vize1*3/10.0 + vize2*3/10.0 + final*4/10.0);
	
	if (dersort>=90) {
		printf("Harf Notunuz - AA ve Ders Ortalamanýz: %f", dersort);
	} else if (dersort>=85) {
		printf("Harf Notunuz - BA ve Ders Ortalamanýz: %f", dersort);
	} else if (dersort>=80) {
		printf("Harf Notunuz - BB ve Ders Ortalamanýz: %f", dersort);
	} else if (dersort>=75) {
		printf("Harf Notunuz - CB ve Ders Ortalamanýz: %f", dersort);
	} else if (dersort>=70) {
		printf("Harf Notunuz - CC ve Ders Ortalamanýz: %f", dersort);
		if(ortalama < 2.5) {
			printf("\nDersi tekrar alsan iyi olur. Çünkü ortalaman düþük");
		}
	} else if (dersort>=65) {
		printf("Harf Notunuz - DC ve Ders Ortalamanýz: %f", dersort);
		if(ortalama < 2.5) {
			printf("\nDersi tekrar alsan iyi olur. Çünkü ortalaman düþük");
		}
	} else if (dersort>=60) {
		printf("Harf Notunuz - DD ve Ders Ortalamanýz: %f", dersort);
		if(ortalama < 2.5) {
			printf("\nDersi tekrar alsan iyi olur. Çünkü ortalaman düþük");
		}
	} else {
		printf("Harf Notunuz - FF ve Ders Ortalamanýz: %f", dersort);
		printf("\nDersten Kaldýnýz.");
	}









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

