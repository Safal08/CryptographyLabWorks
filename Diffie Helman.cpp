//Diffie-Helman Key Exchange 

#include<stdio.h>
#include<math.h>

int compute(int a, int m, int n)
{
	int r;
	int y = 1;

	while (m > 0)
	{
		r = m % 2;
		if (r == 1)
			y = (y*a) % n;
		a = a*a % n;
		m = m / 2;
	}

	return y;
}

int main()
{
	int p = 7;	
	int g = 5;		
	int x1, x2;
	int y1, y2;

	
	x1 = 3;
	y1 = compute(g, x1, p);

	x2 = 4;
	y2 = compute(g, x2, p);
	
	int k1= compute(y2, x1, p);
	int k2 = compute(y1, x2, p);

	printf("Alice's Secret Key is %d\nBob's Secret Key is %d", k1, k2);

	return 0;
}
