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
	
	int a = 40;
	char b1 = 66;
	char b2 = 'B'; //charlarý '' içinde tanýmlarýz
	float c1 = 4.2;
	double d1 = 0.21;
	
	printf("%d %c %10d %.1f %.2f %s \n",a,b1,b2,c1,d1,"tugay yaldýz");
	/* 
	* %d int basar, %10d dedýgýmýzde o kýsmý yazmadan once bosluk atýyor onune, gariptir ki 3 den sonra atmaya baslýyo dene ve gör
	* %c char basar 
	* %f float basar, %.2f dedýgýmýzde virgulden sonra 2 karakter basar
	* %s string basar
	*/
	
	// deðiþken tiplerinin os da kapladýðý bytelar
	printf("%d char'ýn os da kapldýðý byte\n", sizeof(char));
	printf("%d int'ýn os da kapldýðý byte\n", sizeof(int));
	printf("%d short int'ýn os da kapldýðý byte\n", sizeof(short int));
	printf("%d long int'ýn os da kapldýðý byte\n", sizeof(long int));
	printf("%d float'ýn os da kapldýðý byte\n", sizeof(float));
	printf("%d double'ýn os da kapldýðý byte\n", sizeof(double));





	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

