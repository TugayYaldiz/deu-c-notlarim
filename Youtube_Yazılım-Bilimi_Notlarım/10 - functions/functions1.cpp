#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

void hatayiBas(char mesaj[], int hata) {
	printf("%s. %d!",mesaj,hata);
} //void ile bi�ey return etm�yor bu fonksiyon d�yoruz

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int sayi;
	printf("negatif olmayan say� girin:");
	scanf("%d",&sayi);
	if(sayi<0){
		hatayiBas("Bilinmeyen hata asf13rasdasdsa",404);	
	}
	


	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

