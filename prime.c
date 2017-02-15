/*To check if the number is prime or not*/
#include<stdio.h>
int prime(int);

int main(){
 int a;
 printf("Enter any number to check : ");
 scanf("%d", &a);
 if(a == 1){
	printf("The %d is neither prime nor not prime ");
 }
 else{
	prime(a);
 }
 
 return 0;
}

int prime(int b){
	int d, counter=0;
	
	
	for(d=1;d<=b;d++){
		if(b%d==0){
			counter++;
		}
	}
		
	
	
	if(counter == 2){
		printf("The number %d is prime ", b);
	}
	else{
		printf("The number %d is not prime ", b);
	}

 return 0;
}