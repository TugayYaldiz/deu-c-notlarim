#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

// call by value den�len sey asl�nda fonksiyona sadece deger at�yoruz , x ve y n�n degerlerini fonks�yona att�k o degerlerle i�lemler yapt�k ama bunlar x ve y n�n degerini etkilemiyor
// x ve y yi degistirmek istedigiiz olaya call by refferance den�yor bunuda pointerlar �le yap�caz
void degerDegistir(int *a, int *b) {
	int gecici = *a;
	
	*a = *b;

	*b = gecici;
	
	printf("a:%d - b:%d\n",*a,*b);	
}

int main() {
	//setlocale(LC_ALL, "Turkish");


	int x=5,y=10;

	degerDegistir(&x,&y); // functiona de�i�kenlerin yer�n� gonderd�k

	printf("x:%d - y:%d",x,y);	




	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

