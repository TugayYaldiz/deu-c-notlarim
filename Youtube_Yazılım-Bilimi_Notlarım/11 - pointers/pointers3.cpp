#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	//setlocale(LC_ALL, "Turkish");

	int i,j=1;
	
	int *jp1,*jp2 = &j; // jp2 ye j n�n yer�n� att�k
	
	jp1 = jp2; // jp1 e jp2 n�n yer�n� att�k yan� jp 1 de jp 2 ile ayn� yer� goster�yor
	
	i = ++(*jp2); // jp2 n�n gosterd�g� yerdek� kutuya g�d�p deger� al�yor ve onu 1 artt�r�yor i ye at�yor
	
	*jp2 = *jp1 + i; // bu asl�nda jp2nin g�sterdigi yerdeki de�eri i kadar arttr demek cunku jp1 jp2 ile ayn� yer� gosteriyor

	printf("i = %d, j= %d, *jp1 = %d, *jp2= %d \n",i,j,*jp1,*jp2);





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

