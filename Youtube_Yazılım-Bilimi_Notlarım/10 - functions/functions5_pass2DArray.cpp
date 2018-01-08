#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

void bastir(int matrisimiz[][4], int size) { // 2d array gonderýrken ilk alanýn sizeýný ekstra olarak gonderebýlýrz ama 2.boyutun sizeýný kesýnlýkle içine yazmamýz gerekýyor
	
	int i,j;
	
	for(i=0;i<size;i++){
		for(j=0;j<4;j++){
			printf("%d ",matrisimiz[i][j]);
		}
		printf("\n");
	}
	
}

int main() {
	setlocale(LC_ALL, "Turkish");

	int matris[3][4];
	int i,j;
	printf("Matrisi doldurunuz:");

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&matris[i][j]);
		}
	}

	bastir(matris,3); 





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

