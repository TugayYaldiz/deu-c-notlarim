#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int topla(int x, int y);
void topla2(int x,int y);

int main() {
	setlocale(LC_ALL, "Turkish");

	puts("Toplanacak say�lar� girin");
	int s1,s2;
	scanf("%d",&s1);
	scanf("%d",&s2);
	topla2(s1,s2);// voide giden
	printf("\n");
	printf("%d + %d = %d",s1,s2,topla(s1,s2)); // int e giden
	
	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

int topla(int x, int y) {
	return x+y;	
}

void topla2(int x, int y) {
		printf("%d + %d = %d",x,y,x+y);
}
