/*WAP in C to print all prime number less than 500 using function*/


#include<stdio.h>
int prime();

int main(void)
{
prime();
}


 int prime()
 {
 int a,b,count = 0;
 for(a = 2; a<=500; a++)
 {
        count=0;
	for(b = 1; b<=a; b++){
		if(a%b == 0){
		count++;
		}
	}
   if(count == 2)
   {
   printf("%d \n", a);
   }
 }
 return 0;
 }