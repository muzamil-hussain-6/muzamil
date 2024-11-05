#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf("ENTER YOUR NUMBER:");
	scanf("%d",&num);
	 
	 if (num==1){
	 	printf("MONDAY");
	 }
	  if (num==2){
	 	printf("TUESDAY");
	 } if (num==3){
	 	printf("WEDNESDAY");
	 } if (num==4){
	 	printf("THURSDAY");
	 } if (num==5){
	 	printf("FRIDAY");
	 } if (num==6){
	 	printf("SATURDAY");
	 } if (num==7){
	 	printf("SUNDAY");
	 }
	 else if(num>7)
	 printf("YOUR NUMBER IS INVALID");
	 }
