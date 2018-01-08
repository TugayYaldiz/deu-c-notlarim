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

	int islemNo, bakiye=1000, tutar;
	
	printf("Ýþlemler\n1: Para Çekme\n2: Para Yatýrma\n3: Havale Yapma\n4: Bakiye Sorgulama\n5: Kart Ýade");
	printf("\n----------------------------------------------------------");
	
	printf("\nÝþlem Numarasý:");
	scanf("%d",&islemNo);
	
	switch(islemNo) {
		case 1:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Çekilecek Tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye) {
				printf("Bakiye Yetersiz\n");
			}
			bakiye -= tutar;
			printf("Yeni Bakiye: %d\n", bakiye);
			break;
		case 2:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Yatýrýlacak Tutar:");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Yeni Bakiye: %d\n", bakiye);
			break;
		case 3:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Havale Yapýlacak Tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye) {
				printf("Bakiye Yetersiz\n");
			}
			bakiye -= tutar;
			printf("Yeni Bakiye: %d\n", bakiye);			
			break;
		case 4:
			printf("Bakiyeniz: %d\n",bakiye);
			break;
		case 5:
			printf("Kart iade edildi.\n");
			break;
		default:
			printf("Tanýmlanmamýþ iþlem numarasý.\n");
			break;	
	}
	









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

