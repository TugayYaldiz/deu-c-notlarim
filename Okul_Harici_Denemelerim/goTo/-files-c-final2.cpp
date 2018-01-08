#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* 
Final sinav soru cevaplari
Coded by: Kursat ARSLAN
*/

int main() {
    
    tekrar:
    	system("cls");
    int en,boy;    
	printf("Karenin kenar boyutunu girin (1-9): ");scanf("%d",&en);  if (en<1 || en>9) {goto tekrar;}
	
	printf("\n");  
	en--;
	boy=en;					
	
	
	for (int j=0;j<=boy;j++){
	
		for (int i=0;i<=en;i++) {
			
			if (j==0 || j==boy || i==0 || i==en)
				if (j==0)
					printf(" %d", i+1);
				else if (j>0 && i==0)
					printf(" %d", j+1);
				else if (j==boy)
					printf(" %d", (boy+1)-i);
				else			
					printf(" %d",(i+1)-j);
			else
			{								
					printf("  ");
			}			
		}
		printf("\n");
	}	
	
	printf("\nTekrar denemek ister misin? (e/h) ");if (getch()=='e') {goto tekrar;}
    
    getch();
    
    
}
