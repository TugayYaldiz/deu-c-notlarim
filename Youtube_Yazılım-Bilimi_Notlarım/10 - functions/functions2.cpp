#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/


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

