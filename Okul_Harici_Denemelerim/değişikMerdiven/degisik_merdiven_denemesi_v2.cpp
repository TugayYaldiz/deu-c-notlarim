#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/
#include <windows.h> /* Sleep() için büyük s ile bu miliseconds tarzýnda bekletýyo yaný 1 sn ýcýn (1000)*/

int main() {
	//setlocale(LC_ALL, "Turkish");

	puts("1-9 arasý sayý girin.");
	int sayi,yon=0,bosluk=0,asagi=179,saga=196,altsol=192,ustsag=191,i,j,bos; //yon 0 sa aþagý 1 se yana doðru yazdýr
	scanf("%d",&sayi);
	while(sayi>=10){
		system("cls");
		puts("Sayý 1-9 arasý olmalýdýr tekrar girin.");
		scanf("%d",&sayi);
	}	
	printf("\n");
	while(1) {
		if(yon==0){
			for(i=0;i<sayi;i++) {
				if(i!=sayi-1){
					for(bos=0;bos<bosluk;bos++){
						printf("%c",219); //yýldýzlarý gormek ýstemýyosan burayý sadece bosluk yap
					}
					printf("%c\n",179);					
				}else {
					for(bos=0;bos<bosluk;bos++){
						printf("%c",219); //yýldýzlarý gormek ýstemýyosan burayý sadece bosluk yap
					}
					printf("%c",192);
				}
				Sleep(100);			
			}
			yon=1;		
		} else {
			for(j=0;j<sayi;j++) {
				if(j!=sayi-1) {
					printf("%c",196);
				} else {
					printf("%c\n",191);
				}
				Sleep(100);							
			}
			bosluk+=sayi;
			yon=0;
		}	
	}








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

