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
	setlocale(LC_ALL, "Turkish");

	puts("1-9 aras� say� girin.");
	int sayi,yon=0,bosluk=0; //yon 0 sa a�ag� 1 se yana do�ru yazd�r
	scanf("%d",&sayi);
	while(sayi>=10){
		system("cls");
		puts("Say� 1-9 aras� olmal�d�r tekrar girin.");
		scanf("%d",&sayi);
	}	
	printf("\n");
	while(1) {
		if(yon==0){
			for(int i=0;i<sayi;i++) {
				if(i!=0){
					for(int bos=0;bos<bosluk;bos++){
						printf(" "); //y�ld�zlar� gormek �stem�yosan buray� sadece bosluk yap
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
						printf(" "); //y�ld�zlar� gormek �stem�yosan buray� sadece bosluk yap
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

