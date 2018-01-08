#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/


void yazdir(char isim[],int uz){
	for(int i=0;i<=uz;i++){
		for (int j=0;j<i;j++){
			printf("%c",isim[j]);
		}
		printf("\n");
	}
}

int main() {
	//setlocale(LC_ALL, "Turkish");

	puts("isim girin");
	char a[1000];
	gets(a);
	int uzunluk=strlen(a);
	//printf("%d",uzunluk);
	
	yazdir(a,uzunluk);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

