#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/
#define MAX 50

// sa�dan sola do�ru gidiyor ve kucukluk durumu alg�lad��� yerde deg�st�rme yap�yor 
// 3 6 8 7 5 9 luk bi dizide �nce 7 yi 8 in �n�ne koyucak sonraki for da 5 i 6 n�n onune koyucak yani 

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

