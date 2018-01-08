#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int a,i,k,b,y,j,kntrl,kacsatir,x;
	/**
	* a kullanýcýdan alýnýcak deger
	* i for loop icin
	* k for loop icin
	* b boþluk sayýsýný ayarlamak ýcýn
	* y yýldýz sayýsýný ayarlamak ýcýn
	* j for için
	* kntrl sonda 1 yýldýz kalmama durumunu kontrol etmek ýcýn
	* kacsatir iþlem yapýlacagýný hesaplamak ýcýn
	* x for loop ýcýn
	*/
	kacsatir=0;
	printf("kumsaati uzunlugunu giriniz: ");
	scanf("%d", &a);
	while(a%2==1)
	{
		if (a%2==1){
			system("cls");
			printf("kumsaati uzunlugunu çift bir sayý olmalýdýr lütfen tekrar giriniz: ");
			scanf("%d", &a);			
		}
	}
	printf("Girdiginiz deger: %d\n", a);
	b=1;
	y=a/2;
	for(x=1;x<=a/2;x++)
	{
		
		for(k=1;k<=y;k++)
		{						
			if(k==y)
			{								
				kacsatir++;
			}
		}
		y-=2;
		
	}
	y=a/2;
	for(i=1;i<=kacsatir;i++)
	{	
		for(j=1;j<=b;j++)
		{
			printf(" ");
		}
		for(k=1;k<=y;k++)
		{
			printf("*");
						
			if(k==y)
			{
				printf("\n");
			}
		}			
		b++;
		y-=2;								
	}
	if(y==0)
	{
		kntrl=1;
	}
	if(kntrl==1)
	{
		y=2;
	}
	else
	{
		y=1;
	}
	b=kacsatir;
	for(i=1;i<=kacsatir;i++)
	{
		if(kntrl==1)
		{
			for(j=1;j<=b;j++)
			{
				printf(" ");
			}			
			printf("*\n");
			kntrl=0;
		}
		
		for(j=1;j<=b;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=y;k++)
		{
			printf("*");
			if(k==y)
			{
				printf("\n");
			}
		}					
		b--;
		y+=2;								
	}
	system("pause");
	return 0;
	
}
