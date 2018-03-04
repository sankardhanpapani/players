#include <stdio.h>

int main() {
	int a,c;
	printf("Input\n");
	scanf("%d",&a);
	printf("%d",a);
	printf("\nOutput\n");
	while(a!=0)
	{
		c=a%10;
		a=a/10;
		printf("%d",c);
		}
	
	return 0;
}
