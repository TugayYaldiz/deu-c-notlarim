#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int values[] = { 88, 56, 100, 2, 25 };

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
} //sortinng fonksiyonumuz 

int main() {
	setlocale(LC_ALL, "Turkish");


	int n;
	
	
	printf("Düzenlenmeden önce: \n");
	for( n = 0 ; n < 5; n++ ) {
	  printf("%d ", values[n]);
	}
	
	qsort(values, 5, sizeof(int), cmpfunc); // qsort(deðiþtirilecek array, arrayýn eleman sayýsý, arrayýntipinin kapladýðý byte, sortýslemýný yaptýgýmýz functon);
	
	printf("\nDüzenlendikden sonra: \n");
	for( n = 0 ; n < 5; n++ ) {   
	  printf("%d ", values[n]);
	}








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

