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
	
	int vize1,vize2,final;
	float dersort,ortalama;
	
	printf("1.vize notunu girin:");
	scanf("%d",&vize1);
	
	printf("2.vize notunu girin:");
	scanf("%d",&vize2);
	
	printf("final notunu girin:");
	scanf("%d",&final);
	
	printf("�niversite ortalaman ka�?:");
	scanf("%f",&ortalama);
	
	dersort = (vize1+vize2+final)/3.0;
	
	if(dersort>60) {
		printf("dersten ge�tin.");
	} else if(dersort>50) { // else if ded�g�m�z �c�n zaten yukar�daki kosuldan gecemem�s oluyor yan� 60 �n alt�nda bu not burda tekrardan dersort>50 && dersort<60 gibi bi�ey yazmam�za gerek olmadan sadece dersort>50 yazab�l�r�z
		printf("b�te kald�n");
		
		if(ortalama < 2.5) {
			printf("\nB�t� ge�sende dersi seneye alacaks�n ortalaman le� bla bla.");	
		}
	} else {
		printf("kald�n");
	}







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

