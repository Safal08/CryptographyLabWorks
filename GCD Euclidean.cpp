#include<stdio.h>
#include<conio.h>
#include<math.h>

int GCD(int a, int b);

int main()
{
	int n, z, ans;
	printf("ENter z and n");
	scanf("%d %d", &z,&n);
	ans=GCD(z,n);
	printf("GCD is %d",ans);	
	return 0;
}

int GCD(int a, int b)
{
	int r, y;
	if(b!=0)
	{
		return GCD(b,a%b);
	}	
	else{		
		return a;
	}	
}
