#include <stdio.h>

int main(void) {
	int n,r=0,re;
	scanf("%d",&n);
	while(n!=0)
	{
		re=n%10;
		r=r*10+re;
		n=n/10;
	}
	printf("%d",r);
	return 0;
}
