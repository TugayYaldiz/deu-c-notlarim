#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int values[] = { 88, 56, 100, 2, 25 };

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
} //sortinng fonksiyonumuz 

int main() {
	setlocale(LC_ALL, "Turkish");


	int n;
	
	
	printf("D�zenlenmeden �nce: \n");
	for( n = 0 ; n < 5; n++ ) {
	  printf("%d ", values[n]);
	}
	
	qsort(values, 5, sizeof(int), cmpfunc); // qsort(de�i�tirilecek array, array�n eleman say�s�, array�ntipinin kaplad��� byte, sort�slem�n� yapt�g�m�z functon);
	
	printf("\nD�zenlendikden sonra: \n");
	for( n = 0 ; n < 5; n++ ) {   
	  printf("%d ", values[n]);
	}








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

