/*WAP in C to convert decimal number to binary using functions*/

#include<stdio.h>

int converter(int dec);

int main(void)
	
  {
	int dec, bin;
 
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    bin = convert(dec);
    printf("The binary equivalent of %d is %d.\n", dec, bin);
    
    return 0;
  }
 
int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}