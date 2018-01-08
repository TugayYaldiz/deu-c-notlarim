#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int islem(int x, int y, int isNo){
	if (isNo==1){
		printf("Toplandý ");
		return x+y;
	} 
	else if (isNo==2) {
		printf("Çýkarýldý ");
		return x-y;
	}
	else if (isNo==3) {
		printf("Çarpýldý ");
		return x*y;
	}
	else if (isNo==4) {
		printf("Bölündü ");
		return x/y;
	}
	else if (isNo==5) {
		printf("Modu Alýndý ");
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

