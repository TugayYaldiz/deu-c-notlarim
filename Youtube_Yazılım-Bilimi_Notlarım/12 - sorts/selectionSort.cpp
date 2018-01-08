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

void selectionSort(int arr[], int size) {
	int i,j;
	int minimumIndex;
	for(i=0; i < size; i++) {
		minimumIndex = i;
		for(j = i +1; j < size; j++) {
			if( arr[j] < arr[minimumIndex] ) {
				minimumIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minimumIndex];
		arr[minimumIndex] = temp;
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
	
	selectionSort(arr, size);

	for(i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

