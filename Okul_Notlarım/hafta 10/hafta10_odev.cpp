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
	srand(time(NULL));
	int isimSayisi, rasgele;
	puts("Ka� isim giriceksiniz?");
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

