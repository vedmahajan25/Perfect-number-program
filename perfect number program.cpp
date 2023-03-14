#include<stdio.h>
int main()
{
	int i,n,sum = 0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1; i<n; i++)
	{
		if(n%i == 0)
			sum = sum + i;
	}
	if (sum == n)
		printf("\nThe number %d is perfect.",n);
	else 
		printf("\nThe number %d is not perfect.",n);
	return 0;
}
