#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/


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

