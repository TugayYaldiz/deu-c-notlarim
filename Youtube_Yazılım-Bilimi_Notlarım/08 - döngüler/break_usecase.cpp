#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	setlocale(LC_ALL, "Turkish");

	int toplam = 0;
	
	int i;
	
	int sayi;
	
	printf("D�ng�den c�kmak i�in -1 girin\n");
	
	for(i=0; true; i++) {
		printf("Say�y� Giriniz:");
		scanf("%d",&sayi);
		
		if(sayi == -1){
			break;
		} else {
			toplam+=sayi;
		}
		
	} // true ile sonsuz dongu acab�l�r�z

	printf("Toplam = %d",toplam);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

