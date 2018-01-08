#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int main() {
	//setlocale(LC_ALL, "Turkish");

	int a[4][2];
	for(int i=0;i<5;i++)
		for(int j=0;j<3;j++){
			printf("%d. satir %d. stunu girin=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
		for(int i=0;i<5;i++)
		{		
			for(int j=0;j<3;j++){
				printf("%d. satir %d. stun=",i+1,j+1);
				printf("%d",a[i][j]);
				printf("\n");
			}
			printf("\n");
		}









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

