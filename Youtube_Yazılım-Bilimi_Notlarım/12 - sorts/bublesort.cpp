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

void bubleSort(int arr[], int size) {
	int i,j;
	
	for(i=0; i < size; i++) {
		for(j=1; j < size -i; j++) {
			if( arr[j-1] > arr[j]) {
				
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
								
			}
		}
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
	
	bubleSort(arr, size);

	for(i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

