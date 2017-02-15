/*WAP to find the sum of Natural number up to 10 using recursion.*/

#include<stdio.h>
 
int add(int n);


int main()
{
printf("The sum is : ");
	printf("%d", add(10));
	
	
return 0;
}



int add(int n){
	
	
	if(n==0)
	{
		
		return 0;
	}
	
		
return n+add(n-1);
   
 }