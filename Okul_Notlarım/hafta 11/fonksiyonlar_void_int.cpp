#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int topla(int x, int y);
void topla2(int x,int y);

int main() {
	setlocale(LC_ALL, "Turkish");

	puts("Toplanacak sayýlarý girin");
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
