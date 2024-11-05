#include<stdio.h>
int main(){
	float num1;
	int member;
	printf("type your total shoping amount:");
	scanf("%f",&num1);
	printf("ARE YOU THE MEMBER?(1 for yes/2 for not)");
	scanf("%d",&member);
	
	if(num1 >=2000 &&member == 1){
		
			printf("your after discount amount is %f ",(num1*0.2));
	}
	else if(num1 >=2000 && member == 2){
		
		printf("your after discount amount is %f", (num1*0.1));
	}
	
	else if(num1 <2000){
		printf("SORRY THERE IS NO ANY DISCOUNT:");
	}
}