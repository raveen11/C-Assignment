/*WAP to find the sum of digits entered by the user*/

 #include<stdio.h>

 int mysum(int num);
	
	
	int main(void)
			{
	int num;
	printf("Enter a number whose sum you want to find:");
	 scanf("%d",&num);
	printf("The factoriall is %d",mysum(num));
	return 0;
	}

 int mysum(int num)
	{

	if(num<=1)
	{
	return num;
	}
	else
	{
	return num+mysum(num-1);
	} 
	}



