/*Write a program in c to input any 10 number in an array and sort them in ascending order using function*/

#include<stdio.h>

int asc(int number[10]);

int main(void)

{
	int i,n,number[30];
	/*printf("Enter the value of N \n");
    scanf("%d", &n);*/
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        {
		scanf("%d", &number[i]);
		}
asc(number);
		
}

int asc(int number[10])

 {
	int i, j, a;
 
   
    for (i = 0; i < 10; ++i)
    {
        for (j = i + 1; j < 10; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < 10; ++i)
       { 
		printf("%d\n", number[i]);
	   }	
   return 0;
   }