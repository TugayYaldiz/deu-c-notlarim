#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include <locale.h>

int dayofweek(int d, int m, int y){
	static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	time_t my_time;
	struct tm * timeinfo;
	int day = 0;
	time (&my_time);
	timeinfo = localtime (&my_time);
	/*printf("y�l->%d ",timeinfo->tm_year+1900);*/
	/*printf("ay->%d ",timeinfo->tm_mon+1);*/
	/*printf("g�n->%d ",timeinfo->tm_mday);*/
	day = dayofweek(timeinfo->tm_mday, timeinfo->tm_mon+1, timeinfo->tm_year+1900);
	/*printf("saat->%d ",timeinfo->tm_hour);*/
	/*printf("dakika->%d ",timeinfo->tm_min);*/
	/*printf("saniye->%d ",timeinfo->tm_sec);*/
	switch(day) /* 0 pazar i�in 1 pazartesi b�yle devam ediyor*/
	{		
		case 0:			
			printf("pazar");
			break;
		case 1:
			printf("pazartesi");
			break;
		case 2:
			printf("sal�");
			break;
		case 3:
			printf("�ar�amba");
			break;
		case 4:
			printf("per�embe");
			break;
		case 5:
			printf("cuma");
			break;
		case 6:
			printf("cumartesi");
			break;
		default: /* default ile caseler sa�lanmasa olu�acak durumu belirleriz like else */ 
			printf("b�yle bi g�n yok d�nyada");
			break;
	}
	getche();
    return 0;
}
