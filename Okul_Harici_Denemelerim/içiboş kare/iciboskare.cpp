#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int a,i,k;
	printf("karenin kenar uzunlugunu giriniz: ");
	scanf("%d", &a);
	printf("Girdiginiz deger: %d\n", a);
	
	for(i=1;i<=a;i++)
	{
		for(k=1;k<=a;k++){
			if(i==1 or i==a){
				printf("*");
			}
			else
			{
				if(k==1 or k==a){
					printf("*");
				}
				else
				{					
					printf(" ");
				}
			}
			if(k==a){
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
	
}
