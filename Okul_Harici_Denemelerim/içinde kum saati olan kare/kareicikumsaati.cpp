#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower falan için
#include <math.h> // math iþlemleri icin falan
#include <time.h> // rand için falan
#include <locale.h> // türkce karakter için falan
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için falan lazým*/

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a,i,k,b,y,j,x,satir,eskisatir,sonbosluk,kalan,b2,y2,v,value;
	srand(time(NULL));   // should only be called once
	/**
	* a kullanýcadan alýnýcak deger için
	* i for için
	* k for için
	* b birinci bosluklar ýcýn
	* y ikinci bosluklar için 
	* j for icin
	* x for için
	* satir ve eski satir satýr degiþim kontrolleri icin
	* sonbosluk satýrda son kýsým ýcýn gereklý olan bosluk sayýsýný hesaplamak ýcýn gereklý for da kullanýldý
	* kalan gerekli sona koyulmasý gereken bsluk sayýsý
	* b2 ve y2 kumsaaatinin ikinci yarýsý için
	* v ortadaký tekil yýldýzýn onune koyulacak bosluklar ýcýn gerekli forda kullandýldý
	*/
	printf("karenin kenar uzunlugunu giriniz: ");
	scanf("%d", &a);
	printf("Girdiginiz deger: %d\n", a);
	while(a%2==1)
	{
		if (a%2==1){
			system("cls");
			printf("karenin kenar uzunluðu çift bir sayý olmalýdýr lütfen tekrar giriniz: ");
			scanf("%d", &a);			
		}
	}
	
	
	kalan=0;
	b=1;
	y=a/2;
	b2=(a/2)-1;
	y2=1;
	satir=0;
	eskisatir=0;
	for(i=1;i<=a;i++)
	{
		/*
		int r = rand(); 
		value = (r % 9) + 1;
		switch(value)
		{		
		case 1:			
		system("COLOR 1");
		break;
		case 2:
		system("COLOR 2");
		break;
		case 3:
		system("COLOR 3");
		break;
		case 4:
		system("COLOR 4");
		break;
		case 5:
		system("COLOR 5");
		break;
		case 6:
		system("COLOR 6");
		break;
		case 7:
		system("COLOR 7");
		break;
		case 8:
		system("COLOR 8");
		break;
		case 9:
		system("COLOR 9");
		break;
		}
		*/
		/* konsolda þekillu sukullu renk için
		*/
		for(k=1;k<=a;k++){
			if(i==1 or i==a){
				printf("*");
			}
			else
			{
				if(k==1 or k==a){
					printf("*");
					kalan++;
				}
				else
				{	
					if(y==0)
					{
						y2=2;
					}
					if(i<a/2 and satir!=eskisatir)
					{
						for(j=1;j<=b;j++)
						{
							printf(" ");
							kalan++;
						}
						for(x=1;x<=(a-(b*2))-2;x++)
						{
							printf("*");
							kalan++;
						}
						b++;
						y-=2;
						eskisatir=satir;
						for(sonbosluk=1;sonbosluk<=((a-kalan)-1);sonbosluk++)
						{
							printf(" ");
						}									
					}
					else if(i>a/2 and satir!=eskisatir)
					{
												
						for(j=1;j<=b2;j++)
						{
							printf(" ");
							kalan++;
						}
						if((a-(b2*2))-2==0)
						{
							printf("*");
							kalan++;
						}
						for(x=1;x<=(a-(b2*2))-2;x++)
						{
							printf("*");
							kalan++;
						}
						
						b2--;
						y2+=2;
						y=+2;
						for(sonbosluk=1;sonbosluk<=((a-kalan)-1);sonbosluk++)
						{
							printf(" ");
						}
						eskisatir=satir;
									
					}
					else if(i==a/2 and satir!=eskisatir)
					{
						for(v=1;v<=((a/2)-1);v++)
						{
							printf(" ");
							kalan++;
						}
						printf("*");
						kalan++;
						for(sonbosluk=1;sonbosluk<=((a-kalan)-1);sonbosluk++)
						{
							printf(" ");
						}
						eskisatir=satir;
						
					}	
					
				}
			}
			if(k==a){
				printf("\n");
				satir++;
				kalan=0;				
			}			
		}
	}
	system("pause");
	return 0;
	
}
