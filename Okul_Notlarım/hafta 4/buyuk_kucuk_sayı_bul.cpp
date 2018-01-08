#include <stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <locale.h>

int main() {
	int a,b,c;
	
	printf("1. sayý giriniz");
	scanf("%d",&a);
	printf("2. sayý giriniz");
	scanf("%d",&b);
	printf("3. sayý giriniz");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c){
			printf("%d en kucuk",a);
		}else {
			printf("%d en kuck",c);
		}
	}else{
		if(b<c)
		{
			printf("%d en kuck",b);
		}else {
			printf("%d en kuck",c);
		}
	}
	
	
	printf("\n%d",(a<b)?(a<c)?a:c
					 :(b<c)?b:c); // baska bir kllanm seklý
					 
	
	//printf("%d", (a==b)); // 0 döndürür
	
	//(a<b)?printf("a<b"):printf("a>b");
	

	
}
