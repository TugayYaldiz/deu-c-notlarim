#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/
#define MAX 50

// saðdan sola doðru gidiyor ve kucukluk durumu algýladýðý yerde degýstýrme yapýyor 
// 3 6 8 7 5 9 luk bi dizide önce 7 yi 8 in önüne koyucak sonraki for da 5 i 6 nýn onune koyucak yani 

void insertionSort(int arr[], int size) {
	int i,j;
	int element;
	
	for(i=1 ;i < size; i++) {
		element = arr[i];
		j = i-1;
		
		while (j>=0 && arr[j]>element) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = element ;
	}
	
}

int main() {
	//setlocale(LC_ALL, "Turkish");

	int arr[MAX], size;
	int i;	
	printf("Kac Elemanli:");
	
	scanf("%d", &size);
	
	for(i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	
	insertionSort(arr, size);

	for(i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

