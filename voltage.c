#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Enter your voltage used:");
	scanf("%d",&a);
	
	if (a<=100) {
		printf("no any charge");

		
	}
	else if(a>100 &&a<=200){
		printf("you have to pay: %d", a * 5);
	}
	else if(a>=201 &&a<=300){
		printf("you have to pay: %d", a * 8);
	}
	else if(a>300){
		printf("you have to pay: %d", a * 10);
	}	
	
}
	
	
	
	