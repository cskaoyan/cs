#include <stdio.h>
#include <string.h>
char*Replace(char*str,char*substr,char*newstr);
void main()
{
	char str[100],substr[100],newstr[100];
	char *p;
	printf("请输入字符串:\n");
		gets(str);
	printf("请输入子串（被替代的）:\n");
		gets(substr);
	printf("请输入新的（替代原有的）:\n");
		gets(newstr);
p=(Replace(str,substr,newstr));
printf("%s",p);
}

char*Replace(char*str,char*substr,char*newstr)
{
	char*pstr,*psub;      //  原字符串 子串
	int n,m,i ;
	 
	n=strlen(substr);
	pstr=str;
	psub=substr;
	for(;*pstr!='\0';pstr++)
	{
		if(*pstr==*psub)
		{
			m=strncmp(pstr,psub,n);
			if(m==0)
			{
				for(i=0;i<n;i++)
					*(pstr+i)=newstr[i];
				pstr=pstr+n;                       //符合要求 指针后移n位
			}
		}
	}
	return(str);
}
