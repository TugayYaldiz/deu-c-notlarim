#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/


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
	printf("Bir say� girin:");
	scanf("%d",&n);
	
	if(asal_mi(n) == 0){
		printf("Bu sayi asal say� de�ildir.");
	} else {
		printf("Bu sayi asald�r.");
	}









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

