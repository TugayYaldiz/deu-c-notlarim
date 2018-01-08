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

	// girilen sayýnýn rakamlarý toplamý kaç hane bulucaz
	
	int n, hane=0, toplam=0;
	
	printf("Sayiyi giriniz:");
	scanf("%d",&n);
	
	do {
		toplam += (n%10);
		
		hane++;
		
		n /= 10;	
		
	} while( n > 0);
	
	printf("Rakamlarý Toplamý: %d, %d haneli", toplam, hane);
	








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

