#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

// call by value denýlen sey aslýnda fonksiyona sadece deger atýyoruz , x ve y nýn degerlerini fonksýyona attýk o degerlerle iþlemler yaptýk ama bunlar x ve y nýn degerini etkilemiyor
// x ve y yi degistirmek istedigiiz olaya call by refferance denýyor bunuda pointerlar ýle yapýcaz
void degerDegistir(int *a, int *b) {
	int gecici = *a;
	
	*a = *b;

	*b = gecici;
	
	printf("a:%d - b:%d\n",*a,*b);	
}

int main() {
	//setlocale(LC_ALL, "Turkish");


	int x=5,y=10;

	degerDegistir(&x,&y); // functiona deðiþkenlerin yerýný gonderdýk

	printf("x:%d - y:%d",x,y);	




	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

