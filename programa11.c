#include <stdio.h>
#include<string.h>
int main() {
	char a[20];
	printf("Input\n");
	scanf("%s",a);
	printf("%s",a);
	printf("\nOutput\n");
	if(strcmp(a,"saturday")==0 || strcmp(a,"sunday")==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
		return 0;
}
