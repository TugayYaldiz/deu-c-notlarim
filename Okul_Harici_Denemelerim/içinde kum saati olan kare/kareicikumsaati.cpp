#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a,i,k,b,y,j,x,satir,eskisatir,sonbosluk,kalan,b2,y2,v,value;
	srand(time(NULL));   // should only be called once
	/**
	* a kullan�cadan al�n�cak deger i�in
	* i for i�in
	* k for i�in
	* b birinci bosluklar �c�n
	* y ikinci bosluklar i�in 
	* j for icin
	* x for i�in
	* satir ve eski satir sat�r degi�im kontrolleri icin
	* sonbosluk sat�rda son k�s�m �c�n gerekl� olan bosluk say�s�n� hesaplamak �c�n gerekl� for da kullan�ld�
	* kalan gerekli sona koyulmas� gereken bsluk say�s�
	* b2 ve y2 kumsaaatinin ikinci yar�s� i�in
	* v ortadak� tekil y�ld�z�n onune koyulacak bosluklar �c�n gerekli forda kulland�ld�
	*/
	printf("karenin kenar uzunlugunu giriniz: ");
	scanf("%d", &a);
	printf("Girdiginiz deger: %d\n", a);
	while(a%2==1)
	{
		if (a%2==1){
			system("cls");
			printf("karenin kenar uzunlu�u �ift bir say� olmal�d�r l�tfen tekrar giriniz: ");
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
		/* konsolda �ekillu sukullu renk i�in
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
