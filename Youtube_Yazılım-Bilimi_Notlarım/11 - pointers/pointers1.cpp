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

	
	/* 
	* & de�i�kenin adres bilgisini veriyor
	* * adresteki de�eri veriyor
	*/
	
	int i=5;
	
	int *p = &i; //int pointer a i nin adresini g�sterdik
	
	printf("%u\n",p); //pointerin adres bilgisini alman�n baska b�r yolu %u
	printf("%p\n",p); // pointer �n fiziksel adresi %p ile bast�k
	printf("%d", *p); // *ile pointer �n tuttugu adrese gittik ve  o adresteki de�eri ald�k
	








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

