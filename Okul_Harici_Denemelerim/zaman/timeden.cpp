#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include <locale.h>
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmenlazým*/ 

int main() {
	setlocale(LC_ALL, "Turkish");
	time_t my_time;
	struct tm * timeinfo; 
	while(1==1) {
		system("cls");
		time (&my_time);
		timeinfo = localtime (&my_time);
		printf("yýl->%d ",timeinfo->tm_year+1900);
		printf("ay->%d ",timeinfo->tm_mon+1);
		printf("gün->%d ",timeinfo->tm_mday);
		printf("saat->%d ",timeinfo->tm_hour);
		printf("dakika->%d ",timeinfo->tm_min);
		printf("saniye->%d ",timeinfo->tm_sec);
		sleep(1); /* 1 snn while ý beklet*/
	}
}
