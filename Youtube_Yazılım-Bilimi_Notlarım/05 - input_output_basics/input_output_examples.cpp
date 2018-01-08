#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/
// aritmetik ortalama hesaplama
int main() {
	setlocale(LC_ALL, "Turkish");

	int a,b,c,d,e;
	
	float aritmetik;
	
	printf("5 tane sayý giriniz:");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	aritmetik = (a+b+c+d+e)/5.0;
	printf("\ngirilen sayýlarýn aritmetik ort=%.1f\n",aritmetik);









	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

