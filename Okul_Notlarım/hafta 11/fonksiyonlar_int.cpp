#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int islem(int x, int y, int isNo){
	if (isNo==1){
		printf("Topland� ");
		return x+y;
	} 
	else if (isNo==2) {
		printf("��kar�ld� ");
		return x-y;
	}
	else if (isNo==3) {
		printf("�arp�ld� ");
		return x*y;
	}
	else if (isNo==4) {
		printf("B�l�nd� ");
		return x/y;
	}
	else if (isNo==5) {
		printf("Modu Al�nd� ");
		return x%y;
	}
}

int main() {
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int s1,s2;
	scanf("%d",&s1);
	scanf("%d",&s2);
	int islemNo=rand()%5+1;
	printf("Sonuc=%d ",islem(s1,s2,islemNo));

	
	








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

