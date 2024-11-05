#include<stdio.h>
#include<conio.h>
int main(){
	
	float tax;
	printf("enter your income:");
	scanf("%f", &tax);
		 
		 if(tax <= 250000){
		 	printf("no tax");
		 
			 }
		else if(tax>=250001){
			 
			 printf("your income tax is %f",tax*0.05);
		}
		else if(tax>=500001){
			printf("your tax is %f",tax*0.10);
			
		}
		else if(tax >=1000000){
			printf("your tax is %f",tax*0.15);
		}
		
	
	
	
	
	
	
	
	
	
	
	
	
}