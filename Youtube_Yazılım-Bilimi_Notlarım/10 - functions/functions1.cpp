#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

void hatayiBas(char mesaj[], int hata) {
	printf("%s. %d!",mesaj,hata);
} //void ile biþey return etmýyor bu fonksiyon dýyoruz

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int sayi;
	printf("negatif olmayan sayý girin:");
	scanf("%d",&sayi);
	if(sayi<0){
		hatayiBas("Bilinmeyen hata asf13rasdasdsa",404);	
	}
	


	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

