#include<stdio.h>
#include<string.h>

int main()
{
	char name[110];
	
	scanf("%[^\n]",&name); getchar();
	
	for(int i =0;i<strlen(name);i++)
	{
		if(name[i] >= 'a' && name[i] <= 'z')
		{
			name[i] -= 32;
		}
		else if(name[i] >= 'A' && name[i] <= 'Z')
		{
			name[i] += 32;
		}
	}
	for(int i =0;i<strlen(name);i++)
	{
		printf("%c",name[strlen(name)-i-1]);
	}
	printf("\n");
	return 0;
}
