#include <stdio.h>
#include <string.h>
void main()
{
	char str[80];
	int n,i;
	printf("please input the word:\n");
	gets(str);
	n=strlen(str)-1;
	
	for(i=0; i<n; i++)
		printf("%c",str[i]);


 
	if(str[n]=='y')                             	printf("ies");
    else if(str[n]=='h'&&(str[n-1]=='c'||'s'))  	printf("%ces",str[n]);
    else if(str[n]=='s'||str[n]=='x'||str[n]=='o')	printf("%ces",str[n]);
	else	printf("%cs",str[n]);
}
