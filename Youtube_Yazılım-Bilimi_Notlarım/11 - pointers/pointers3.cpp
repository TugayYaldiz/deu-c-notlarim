#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int main() {
	//setlocale(LC_ALL, "Turkish");

	int i,j=1;
	
	int *jp1,*jp2 = &j; // jp2 ye j nýn yerýný attýk
	
	jp1 = jp2; // jp1 e jp2 nýn yerýný attýk yaný jp 1 de jp 2 ile ayný yerý gosterýyor
	
	i = ++(*jp2); // jp2 nýn gosterdýgý yerdeký kutuya gýdýp degerý alýyor ve onu 1 arttýrýyor i ye atýyor
	
	*jp2 = *jp1 + i; // bu aslýnda jp2nin gösterdigi yerdeki deðeri i kadar arttr demek cunku jp1 jp2 ile ayný yerý gosteriyor

	printf("i = %d, j= %d, *jp1 = %d, *jp2= %d \n",i,j,*jp1,*jp2);





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

