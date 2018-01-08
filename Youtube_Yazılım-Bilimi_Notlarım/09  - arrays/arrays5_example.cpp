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

	int matris[3][5];
	int toplam,i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%d-%d:",i,j);
			scanf("%d",&matris[i][j]);
		}		
	}
		
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");		
	}
	
	for(j=0;j<5;j++){ // bu sefer sütunda iþlem yapýcaz satýrda yapmýcagýmýz ýcýn donguyu tersine cevýrdýk
		for(i=0;i<3;i++) {
			toplam += matris[i][j];
		}		
		printf("%d ",toplam);
		toplam=0;		
	}








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

