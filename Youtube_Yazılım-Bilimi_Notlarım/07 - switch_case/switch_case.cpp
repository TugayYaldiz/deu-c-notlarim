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

	int islemNo, bakiye=1000, tutar;
	
	printf("��lemler\n1: Para �ekme\n2: Para Yat�rma\n3: Havale Yapma\n4: Bakiye Sorgulama\n5: Kart �ade");
	printf("\n----------------------------------------------------------");
	
	printf("\n��lem Numaras�:");
	scanf("%d",&islemNo);
	
	switch(islemNo) {
		case 1:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("�ekilecek Tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye) {
				printf("Bakiye Yetersiz\n");
			}
			bakiye -= tutar;
			printf("Yeni Bakiye: %d\n", bakiye);
			break;
		case 2:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Yat�r�lacak Tutar:");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Yeni Bakiye: %d\n", bakiye);
			break;
		case 3:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Havale Yap�lacak Tutar:");
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
			printf("Tan�mlanmam�� i�lem numaras�.\n");
			break;	
	}
	









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

