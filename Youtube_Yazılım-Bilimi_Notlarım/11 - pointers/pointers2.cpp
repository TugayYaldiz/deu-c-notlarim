#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main() {
	//setlocale(LC_ALL, "Turkish");

	int a = 5,*ap;
	float b = 4.5,*bp;
	double c = 3.412, *cp;  
	char d ='a', *dp;
	
	int sayilar[5] = {1,2,3,4,5};
	
	int *arrP;
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	arrP = &sayilar[1];
	
	printf("%p adresindeki int in degeri %d dir.\n",ap,*ap);
	printf("%p adresindeki float in degeri %f dir.\n",bp,*bp);
	printf("%p adresindeki double in degeri %lf dir.\n",cp,*cp);
	printf("%p adresindeki char in degeri %c dir.\n",dp,*dp);
	printf("%p adresindeki int array 1.ci degeri %d dir.\n",arrP,*arrP);








	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

