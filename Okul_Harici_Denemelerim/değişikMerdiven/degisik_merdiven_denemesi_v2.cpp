#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/
#include <windows.h> /* Sleep() i�in b�y�k s ile bu miliseconds tarz�nda beklet�yo yan� 1 sn �c�n (1000)*/

int main() {
	//setlocale(LC_ALL, "Turkish");

	puts("1-9 aras� say� girin.");
	int sayi,yon=0,bosluk=0,asagi=179,saga=196,altsol=192,ustsag=191,i,j,bos; //yon 0 sa a�ag� 1 se yana do�ru yazd�r
	scanf("%d",&sayi);
	while(sayi>=10){
		system("cls");
		puts("Say� 1-9 aras� olmal�d�r tekrar girin.");
		scanf("%d",&sayi);
	}	
	printf("\n");
	while(1) {
		if(yon==0){
			for(i=0;i<sayi;i++) {
				if(i!=sayi-1){
					for(bos=0;bos<bosluk;bos++){
						printf("%c",219); //y�ld�zlar� gormek �stem�yosan buray� sadece bosluk yap
					}
					printf("%c\n",179);					
				}else {
					for(bos=0;bos<bosluk;bos++){
						printf("%c",219); //y�ld�zlar� gormek �stem�yosan buray� sadece bosluk yap
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

