#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	char ill;
	printf("ENTER  yOUR AGE:");
	scanf("%d",&age);
	 
	 if (age >= 18 ){
	 	
	 	printf("you are eligible");
	 	
	 	
	if(age>=45 ){
		printf("DO YOU HAVE ANY SERIOUS ILLNESS [y/n]: ");
		scanf("%s",&ill);
		
		 if(ill=='y' || ill=='Y'){
			printf("YOU  ARE NOT ELIGIBLE");}
		
			if(ill=='n' || ill=='N'){
				printf("YOU ARE ELIGIBLE");
			}
			
		
		}
		
		}
		else  if(age <= 18) 
		{printf("you are not eligible");
	}
		
		}
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
