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
	/*
		1 2 3 
		4 5 6
		7 8 9
		
		row uzunlugunu sizeof(matris) / sizeof(matris[0]) ile bulabiliriz
		column uzunlugunu sizeof(matris[0])/sizeof(matris[0][0])
		
	*/
	
	
	int matris[3][3];
	int i,j;
	for(i=0; i < 3;i++) {
		for(j=0; j < 3;j++) {
			printf("%d-%d: ",i,j);
			scanf("%d", &matris[i][j]);
		}
	}
	printf("\n");
	for(i=0; i < 3;i++) {
		for(j=0; j < 3;j++) {
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	//printf("%d", matris[2][2]);
	/*
	int matris[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	for(i=0; i < 3;i++) {
		for(j=0; j < 3;j++) {
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	*/
	/*
	for(i=0; i < sizeof(matris) / sizeof(matris[0]);i++) {
		for(j=0; j < sizeof(matris[0])/sizeof(matris[0][0]);j++) {
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	*/









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

