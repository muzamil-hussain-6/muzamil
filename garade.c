#include<stdio.h>
int main (){
	int english,math, science;
	
	printf("your english marks:  ");
	scanf("%d",&english);
	printf("your math marks:  ");
	scanf("%d",&math);
	printf("your science marks:  ");
	scanf("%d",&science);

	float average = (english + math  +science)/3;
	printf("average: %f",average);
	if (average >=75){
		printf("\n Grade:  A very excellent");
		
	}


		else if(average >=50){
			printf("\n Grade:  B excellent ");
		}
		
		
		else if(average <50){
			printf("\n fail work hard ");
		}

}