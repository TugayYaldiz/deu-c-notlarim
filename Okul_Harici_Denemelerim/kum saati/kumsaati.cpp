#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int a,i,k,b,y,j,kntrl,kacsatir,x;
	/**
	* a kullan�c�dan al�n�cak deger
	* i for loop icin
	* k for loop icin
	* b bo�luk say�s�n� ayarlamak �c�n
	* y y�ld�z say�s�n� ayarlamak �c�n
	* j for i�in
	* kntrl sonda 1 y�ld�z kalmama durumunu kontrol etmek �c�n
	* kacsatir i�lem yap�lacag�n� hesaplamak �c�n
	* x for loop �c�n
	*/
	kacsatir=0;
	printf("kumsaati uzunlugunu giriniz: ");
	scanf("%d", &a);
	while(a%2==1)
	{
		if (a%2==1){
			system("cls");
			printf("kumsaati uzunlugunu �ift bir say� olmal�d�r l�tfen tekrar giriniz: ");
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
