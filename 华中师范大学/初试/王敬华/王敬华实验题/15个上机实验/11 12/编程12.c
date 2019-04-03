#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	FILE *fpr,*fpw;   //fpr：读文件指针，fpw：写文件指针
	char ch,str[100][80];
	int i,j;

	if(argc!=2)
	{
		printf("The number of arguments isn't correct\n ");  //命令行参数有错误
		printf("\n Usage: 可执行文件名 filename \n  ");
		exit(0);
	}

	fpw=fopen(argv[1],"wt");      //以写的方式打开文件
	if(fpw==NULL)                 //打开文件失败
	{
		printf(" can not open this file\n");
		exit(0);
	}
	for( ; (ch=getchar())!='@' ; )   //输入字符并存储到文件中
	  fputc(ch,fpw);
		fclose(fpw);       //关闭文件


	fpr=fopen(argv[1],"rt");      //以读的方式打开文件
	if(fpr==NULL)                 //打开文件失败
	{
		printf("file:%s not found! \n",argv[1]);
		exit(0);
	}
	for(i=0;i<100;i++)
		for(j=0;j<80;j++)
		{
			if(fgetc(fpr)=='\n')
			{
				str[i][j]='\n';
				break;
			}
			str[i][j]=fgetc(fpr);
		}
	fclose(fpr);        //关闭文件

		for(i=1;;i++)
		{
		   for(j=0;str[i][j]!='\n';j++)
				if(str[i][j]>str[i][j+1])
				{
						ch=str[i][j];
						str[i][j]=str[i][j+1];
						str[i][j+1]=ch;
				}
				if(str[i][j]=='@')
					break;
		}

	fpw=fopen(argv[1],"rb+");     //以读写的方式打开文件
    if(fpw==NULL)                 //打开文件失败
	{
		printf("file:%s not found! \n",argv[1]);
		exit(0);
	}
	while((ch=fgetc(fpw))!=EOF)
	{
	    for(i=1;;i++)
		{
		   for(j=0;str[i][j]!='\n';j++)
			   fputc(str[i][j],fpw);
		   fputc('\n',fpw);
		}
	}
	fclose(fpw);       //关闭文件

	fpr=fopen(argv[1],"rt");      //以读的方式打开文件
	if(fpr==NULL)                 //打开文件失败
	{
		printf("file:%s not found! \n",argv[1]);
		exit(0);
	}
	for( ; (ch==fgetc(fpr))!=EOF ; )
		putchar(ch);
	fclose(fpr);        //关闭文件
}