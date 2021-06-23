////Accept string from user and return count of capital letters.

#include<stdio.h>
int CountA(char str[])
{	int count=0;
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if(*str >= 'A'  && *str <='Z')
		{
			count++;
		}
			str++;
		
	}
	return count;
}




int main()
{
	char Arr[10];
	int iRet =0;

	printf("Enter string\n");
	scanf("%s",Arr);

	iRet = CountA(Arr);
	printf("Frequency of capital letters is : %d\n",iRet);
	return 0;
}