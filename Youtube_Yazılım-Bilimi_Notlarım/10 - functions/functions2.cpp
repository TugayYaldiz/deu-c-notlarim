#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/


int topla(int sayi1,int sayi2) {
	return sayi1+sayi2;
}

int main() {
	setlocale(LC_ALL, "Turkish");

	int sayi1,sayi2,toplam;
	
	scanf("%d %d",&sayi1,&sayi2);
	/*
	toplam = topla(sayi1,sayi2);
	printf("%d",topla);
	*/
	printf("%d",topla(sayi1,sayi2));









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

