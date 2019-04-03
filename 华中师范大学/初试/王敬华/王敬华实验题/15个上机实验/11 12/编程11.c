#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50][20]={0};
	char str[20];
	int i=0,j=0,k,num[50]={0};
	char a=' ',b;
	printf("请输入一行英文:\n");
	while((b=getchar())!='\n')
	{
		if(((b>='a'&&b<='z')||(b>='A'&&b<='Z'))&&(a>'z'||(a>'Z'&&a<'a')||a<'A'))//a不是字符，而b是字符
			ch[i][j++]=b;
		else if(((b>='a'&&b<='z')||(b>='A'&&b<='Z'))&&((a>='a'&&a<='z')||(a>='A'&&a<='Z')))//a是字符，b也是字符
            ch[i][j++]=b;
		else if(((a>='a'&&a<='z')||(a>='A'&&a<='Z'))&&(b>'z'||(b>'Z'&&b<'a')||b<'A'))//a是字符，b不是字符
		{
			i++;
			j=0;
		}
		a=b;
	}
	for(j=0;j<=i;j++)
	   if(num[j]!=-1)
	     for(k=j+1;k<=i;k++)
		 {
			 if(num[k]!=-1)
			 {
				 if(strcmp(ch[j],ch[k])==0)
				 {
				    num[j]++;
				    num[k]=-1;
				 }
			     else if(strcmp(ch[j],ch[k])>0)
				 {
					 strcpy(str,ch[k]);
					 strcpy(ch[k],ch[j]);
					 strcpy(ch[j],str);
					 a=num[j];
					 num[j]=num[k];
					 num[k]=a;
				 }
			 }
		 }
     for(j=0;j<=i;j++)
	   if(num[j]!=-1)
		   printf("%-20s %d\n",ch[j],num[j]+1);
}
