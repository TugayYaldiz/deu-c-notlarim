#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

char *dondur(char *p, int index) { // fonksiyon pointer döndüreceði icin fonksýyon adýnýn baþýna * koyduks
	int uzunluk = strlen(p);
	
	if ( index > uzunluk ){
		return NULL; // pointer hýcbýyerý gostermesýn eger pass ettigimiz uzunluk arrayýn boyundan büyükse
	} else {
		return p+index; // dzide gelen deger kadar karakter atla ve dizi sonuna kadar yaz
	}
}


int main() {
	//setlocale(LC_ALL, "Turkish");

	char dizi[] = "Yazilim";
	
	char *p = dondur(dizi,2); // burdaki 2 degeri þu anlama gelýyor fonksýyonun ýcýnde dizide x karakter atla gerisini yaz dýyoruz bu 2 x i temsil ediyo
	// pointer daha yaratýlýrken bir pointer donen fonksýyonda deger gönderilip bu degerler iþleme sokularak dönen deðer ile yaratýldý
	if ( p == NULL ){
		printf("Pointer NULL dondu.");
	} else {
		printf("%s",p);
	}







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

