#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

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

