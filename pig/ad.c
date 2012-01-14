#include<stdio.h>
int sushu(int a)
{
	int i;
	 if(a=1)
		 return 1;
	 if(a=(-1))
		 return 1;
	for(i=2;i<a;i++)
	{
	 if(a%i==0)
	 return 0;
	 else
	 return 1;
	}
}
int main(int argc, char *argv[])
{
	int a;
	scanf("%d\n",&a);
	int result;
	result = sushu(a);
	printf("%d\n",result);
	return 0;
}


