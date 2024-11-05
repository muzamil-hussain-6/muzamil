#include<stdio.h>
#include<conio.h>
int main(){
	int balance,withdraw;
	int permit;
	printf("wellcome to MR KXK Bank\n");
	printf("enter your balance in bank:");
	scanf("%d",&balance);	
	printf("enter your WITHDRAW amount:");
	scanf("%d",&withdraw);
	printf("DO YOU HAVE SPECIAL WITHDRAW PERMISSION (1 FOR YES/2 FOR NOT)? ");
		scanf("%d",&permit);
	if(balance  >= withdraw &&permit==1){
		
	printf("YOUR WITHDRAW IS DONE");
		} 
	
	else if(withdraw >=10000&&permit==2)
		{
		printf("your withdraw is not possible, special permission is required for amount greater than 10000");
	}
	
	else {
		printf("THANK YOU FOR USING MR KXK ATM");
	}
	
	return 0;
	
	
	
	
	
}
