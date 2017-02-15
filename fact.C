/*Write a program in C to find factorial of a given number using Recursive Function*/

 #include<stdio.h>

 int myfact(int num);
	
	
	int main(void)
			{
	int num;
	printf("Enter a number whose factorial you want to find:");
	 scanf("%d",&num);
	printf("The factoriall is %d",myfact(num));
	return 0;
	}

 int myfact(int num)
	{

	if(num<=1)
	{
	return num;
	}
	else
	{
	return num*myfact(num-1);
	} 
	}



