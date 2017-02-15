/*WAP in C to print print TWIN PRIME less than 500 using function*/

#include<stdio.h>

int twinprime();

int main(void)
{
twinprime();
}

int twinprime()
	{
       int i,j,count,add=0;
       int arr[10000];
       
       for(i=3;i<500;i++)
       {
              count = 0;
              for(j=2;j<i;j++)
              {
                     if(i%j == 0)
                     {
                           count++;
                     }
              }
              if(count==0)
              {
                     arr[add] = i;
                     add++;
              }
       }
       printf("\nTwin Primes are :  \n");
       for(i=1;i<add;i++)
       {
              if(arr[i] == arr[i-1] +2)
              {
                     printf("(%d and %d)\n",arr[i-1],arr[i]);
              }
       }
	}