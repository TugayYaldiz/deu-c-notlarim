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
	
	int a = 40;
	char b1 = 66;
	char b2 = 'B'; //charlar� '' i�inde tan�mlar�z
	float c1 = 4.2;
	double d1 = 0.21;
	
	printf("%d %c %10d %.1f %.2f %s \n",a,b1,b2,c1,d1,"tugay yald�z");
	/* 
	* %d int basar, %10d ded�g�m�zde o k�sm� yazmadan once bosluk at�yor onune, gariptir ki 3 den sonra atmaya basl�yo dene ve g�r
	* %c char basar 
	* %f float basar, %.2f ded�g�m�zde virgulden sonra 2 karakter basar
	* %s string basar
	*/
	
	// de�i�ken tiplerinin os da kaplad��� bytelar
	printf("%d char'�n os da kapld��� byte\n", sizeof(char));
	printf("%d int'�n os da kapld��� byte\n", sizeof(int));
	printf("%d short int'�n os da kapld��� byte\n", sizeof(short int));
	printf("%d long int'�n os da kapld��� byte\n", sizeof(long int));
	printf("%d float'�n os da kapld��� byte\n", sizeof(float));
	printf("%d double'�n os da kapld��� byte\n", sizeof(double));





	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

