#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

void bastir(int matrisimiz[][4], int size) { // 2d array gonder�rken ilk alan�n size�n� ekstra olarak gondereb�l�rz ama 2.boyutun size�n� kes�nl�kle i�ine yazmam�z gerek�yor
	
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

