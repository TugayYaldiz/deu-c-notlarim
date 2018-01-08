#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

/* eksik kaldý bu sutunlarý toplama kýsmýný tamamla */
/* program adam gýbý calýsmýyo mantýkda hata yok */

int main() {
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int satir,sutun,toplam,toplam2,orta,rasgele;
	puts("dizi boyutunu bosluk býrakarak belirleyin. *** 2 boyutlu*** ");
	puts("kisi sayýsý - sýnav sayýsý");
	scanf("%d %d", &satir,&sutun);
	
	int matris[satir][sutun];
	
	int ort[satir];
	int ort1[sutun];
	
	for(int x=0;x<satir;x++)
		ort[x]=0;
	for(int y=0;y<sutun;y++)
		ort1[y]=0;
	
	
	for(int i=0;i<satir;i++){
		
		for(int j=0;j<sutun;j++){
			
			int r = rand();
			rasgele = (r % 100)+1;
			matris[i][j] = rasgele;
			ort1[j] +=matris[i][j];
			toplam += matris[i][j];
			
		}
		orta=toplam/sutun;
		ort[i]= orta;
		toplam=0;
		
	}
	
	for(int i=0;i<satir;i++){
		printf("\t",i+1);
		for (int j=0;j<sutun;j++) {
			printf("%d\t",matris[i][j]);
		}
		printf(" öðrencinin ortalamasý %d\n",ort[i]);
	}
	
	
	for(int l=0;l<sutun;l++){
		printf("\t");
		printf("%d", ort1[l]/satir);
	}









	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

