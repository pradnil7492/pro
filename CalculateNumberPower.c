//Accpet two numbers from user and calculate its power
//Input 2  4
//output 2*2*2*2  (16)


//Input 4  3
//output 4*4*4  (16)


#include<stdio.h>
int Power(int iNo1, int iNo2)
{	int total = 1;
	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	if(iNo2 < 0)
	{
		iNo2 = -iNo2;
	}
	else
	{	
		for(int  i=1;i<=iNo2;i++)
		{
			total = total * iNo1;
		}
	}

	return total;
}

int main()
{
	int iValue1 = 0, iValue2 = 0;

	int iRet = 0;
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	printf("Enter secound number\n");
	scanf("%d",&iValue2);

	iRet= Power(iValue1,iValue2);
	printf("Result is : %d",iRet );

	return 0;

}