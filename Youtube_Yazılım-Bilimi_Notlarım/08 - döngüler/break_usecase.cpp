#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int main() {
	setlocale(LC_ALL, "Turkish");

	int toplam = 0;
	
	int i;
	
	int sayi;
	
	printf("Döngüden cýkmak için -1 girin\n");
	
	for(i=0; true; i++) {
		printf("Sayýyý Giriniz:");
		scanf("%d",&sayi);
		
		if(sayi == -1){
			break;
		} else {
			toplam+=sayi;
		}
		
	} // true ile sonsuz dongu acabýlýrýz

	printf("Toplam = %d",toplam);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

