#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

/* fibonacci serisi 

1,1,2,3,5,8,13,21......

sayýyý bir onceký sayý ýle topla býrsonraký sayýya ata
*/

int main() {
	setlocale(LC_ALL, "Turkish");

	
	int ilksayi=1, ikincisayi=1;
	
	printf("%d\n%d\n",ilksayi,ikincisayi);

	for(int i=0; i < 12; i++) {
		int temp = ikincisayi;
		
		ikincisayi += ilksayi;
		
		ilksayi = temp;
		
		printf("%d\n",ikincisayi);
	}


 	/* 1 sn arayla sonsuza kadar tabi limitleri aþýnca sacmalýyor
	while(1) {
		int temp = ikincisayi;
		
		ikincisayi += ilksayi;
		
		ilksayi = temp;
		
		printf("%d\n",ikincisayi);
		sleep(1);
	}
	*/


	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

