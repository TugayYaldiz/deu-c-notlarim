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
	setlocale(LC_ALL, "Turkish");

	puts("1-9 arasý sayý girin.");
	int sayi,yon=0,bosluk=0; //yon 0 sa aþagý 1 se yana doðru yazdýr
	scanf("%d",&sayi);
	while(sayi>=10){
		system("cls");
		puts("Sayý 1-9 arasý olmalýdýr tekrar girin.");
		scanf("%d",&sayi);
	}	
	printf("\n");
	while(1) {
		if(yon==0){
			for(int i=0;i<sayi;i++) {
				if(i!=0){
					for(int bos=0;bos<bosluk;bos++){
						printf(" "); //yýldýzlarý gormek ýstemýyosan burayý sadece bosluk yap
					}						
				}
				printf("%d\n",i+1);
				Sleep(200);	
			}
			yon=1;		
		} else {
			for(int i=0;i<sayi;i++) {
				if(i==0){
					for(int bos=0;bos<bosluk;bos++){
						printf(" "); //yýldýzlarý gormek ýstemýyosan burayý sadece bosluk yap
					}						
				}				
				printf("%d ",i+1);
				Sleep(200);			
			}
			bosluk+=sayi*2;
			yon=0;
		}	
	}








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

