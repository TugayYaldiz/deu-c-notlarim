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
	srand(time(NULL));
	int isimSayisi, rasgele;
	puts("Kaç isim giriceksiniz?");
	scanf("%d",&isimSayisi);
	char isimler[isimSayisi][1000];
	
	for(int i=0;i<isimSayisi;i++) {
		printf("%d. ismi giriniz\n",i+1);
		scanf("%s",isimler[i]);
	}
	
	int r = rand();
	rasgele = (r % isimSayisi);
	puts(isimler[rasgele]);
	









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

