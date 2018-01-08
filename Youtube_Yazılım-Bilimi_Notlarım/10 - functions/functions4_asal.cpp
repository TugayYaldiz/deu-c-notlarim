#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/


int asal_mi(int sayi) {
	int i;
	
	for(i=2;i<=sayi-1;i++) {
		if (sayi % i ==0) {
			return 0;
		}
	}
	
	return 1;
}

int main() {
	setlocale(LC_ALL, "Turkish");

	int n;
	printf("Bir sayý girin:");
	scanf("%d",&n);
	
	if(asal_mi(n) == 0){
		printf("Bu sayi asal sayý deðildir.");
	} else {
		printf("Bu sayi asaldýr.");
	}









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

