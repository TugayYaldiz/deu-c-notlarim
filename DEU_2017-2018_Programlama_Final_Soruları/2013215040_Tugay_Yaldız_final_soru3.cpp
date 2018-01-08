#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/
#include <windows.h> /* Sleep() için büyük s ile bu miliseconds tarzýnda bekletýyo yaný 1 sn ýcýn (1000)*/

void sonIslem(int arr[]) {
	double ort;
	int top;
	for(int j=0;j<13;j++) {
		top+=arr[j];
	}
	printf("\ttoplam %d\n",top);
	ort=top/13.00;
	printf("\tort %lf",ort);
}

int main() {
	//setlocale(LC_ALL, "Turkish");
	tekrar:
    system("cls");

	char sayilar[13][1000];
	int sayilarT[13];
	char buff[]={"\0"};
	srand(time(NULL));
	printf("\tSayi\tilk Hane\n");
	printf("-------------------------------\n");
	for(int i=0;i<13;i++) {
		int r=rand()%1000+1;
		itoa(r,sayilar[i],10);
		buff[0]=sayilar[i][0];
		
		sayilarT[i]=atoi(buff);
		
		printf("%d.\t%d\t%d\n",i+1,r,sayilarT[i]);
		
	}
	printf("--------------------------------------------------\n");
	sonIslem(sayilarT);


	printf("\nTekrar denemek ister misin? (e/h) ");if (getch()=='e') {goto tekrar;}





	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

