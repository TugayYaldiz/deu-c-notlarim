#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

void islem(int *s1, int *s2, int islemNo, int *snc) {
	if(islemNo==1){
		int gecici = *s1 + *s2;
		printf("%d + %d =", *s1,*s2);
		*snc =gecici;
	}
	else if (islemNo==2){
		int gecici = *s1 - *s2;
		printf("%d - %d =", *s1,*s2);
		*snc =gecici;
	}
	else if (islemNo==3){
		int gecici = *s1 * *s2;
		printf("%d * %d =", *s1,*s2);
		*snc =gecici;
	}
	else if (islemNo==4){
		int gecici = *s1 / *s2;
		printf("%d / %d =", *s1,*s2);
		*snc =gecici;
	}
	else {
		int gecici = *s1 % *s2;
		printf("%d %c %d =", *s1,37,*s2);
		*snc =gecici;
	}
	
}

int main() {
	//setlocale(LC_ALL, "Turkish");

	int a=5;
	int b=15;
	
	srand(time(NULL));
	int r=rand()%5+1;
	int sonuc;
	
	islem(&a,&b,r,&sonuc);
	
	printf(" %d",sonuc);









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

