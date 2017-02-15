/*Write a Program in C to input any 10 elements in an array and display them using function*/

#include<stdio.h>

int callingarr();

int main()
{
callingarr();
}


int callingarr()
	{
	   int arr[10];
	   int i,j;
	   printf("Enter any 10 no:");
	   	   
	   for(i=0;i<=9;i++)
	    {
		scanf("%d",&arr[i]);
		}
	   for(j=0;j<=9;j++)
		{	  
		 printf("%d\t",arr[j]);
		 }
	return 0;
}	