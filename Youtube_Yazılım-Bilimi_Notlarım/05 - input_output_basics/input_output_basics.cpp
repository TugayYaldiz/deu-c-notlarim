#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/
#define PI 3.14 // sabit degerleri bu �ekilde tan�mlayab�l�r�z c de

int main() {
	setlocale(LC_ALL, "Turkish");

	// printf le ekrana basar scanf ile kullan�c�dan al�r�z

	int yaricap;
	float hacim;
	
	printf("K�renin yar�cap�n� giriniz: ");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap); //hacim formulu 4/3 pi r k�p
	
	printf("\nK�renin hacmi %.2f'dir\n",hacim);








	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

