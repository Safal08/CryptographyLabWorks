//Program to illustrate totient function
#include<stdio.h>
#include<conio.h>

int GCD(int a, int b);
int phi(int n);

int main()
{
	int i,n;
	printf("Enter value of n. \n");
	scanf("%d", &n);
	phi(n);
    //for(i = 1; i < n; i++)
        //printf("%d %d\n", i, phi(i));
    printf("\n Number of positive integer relatively prime to %d is %d",n, phi(n));
    return 0;
}
int phi(int n)
{
	int result = 0;
    int k;
    for(k = 1; k <= n; k++)
        result += GCD(k, n) == 1;
    return result;
}
int GCD(int a, int b)
{
	if(b!=0)
	{
		return GCD(b,a%b);
	}
	else
	{
		return a;
	}
}
