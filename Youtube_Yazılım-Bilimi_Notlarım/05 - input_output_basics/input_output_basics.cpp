#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/
#define PI 3.14 // sabit degerleri bu þekilde tanýmlayabýlýrýz c de

int main() {
	setlocale(LC_ALL, "Turkish");

	// printf le ekrana basar scanf ile kullanýcýdan alýrýz

	int yaricap;
	float hacim;
	
	printf("Kürenin yarýcapýný giriniz: ");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap); //hacim formulu 4/3 pi r küp
	
	printf("\nKürenin hacmi %.2f'dir\n",hacim);








	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

