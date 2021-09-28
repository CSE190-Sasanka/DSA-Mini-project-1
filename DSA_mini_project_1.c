#include<stdio.h>

int ar[30000][1000],z=1;

void fibonacci(int n) //Fibonacci Function
{
		while(z<n)        
		{
			int carry=0;
			for(int y=999;y>=0;y--)
			{
				int var=ar[z][y]+ar[z-1][y]+carry;
				carry=var/10;		
				var = var%10;
				ar[z+1][y]=var;
			}
			z++;
		}
		int x=0;
		while(ar[n][x]==0 && x<1000)
			x++;
		for(;x<1000;x++)
		{
			printf("%d",ar[n][x]);
		}
		printf("\n");
}
 

int main() //Driver code
{
	ar[1][999]=1;
	int i=1;
	while(i--){
	int n;
	scanf("%d",&n);
	fibonacci(n);
	}
	return 0;
}