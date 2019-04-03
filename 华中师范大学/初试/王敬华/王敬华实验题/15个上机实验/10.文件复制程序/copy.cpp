#include <stdio.h>
#include <stdlib.h>


void main(int argc,char *argv[])
{
	FILE *finput,*foutput;
	char string[81];

	if(argc!=3)
	{
		printf("the number of arguments not crrect\n");
		printf("\n Usage : 可执行文件名souse-file dest-file");
		exit(0);
	}

	if((finput=fopen(argv[1],"r"))==NULL)
	{
		printf("can not open sourse file\n");
		exit(0);
	}
		if((foutput=fopen(argv[1],"r"))==NULL)
	{
		printf("can not creat destination file\n");
		exit(0);
	}
		while(fgets(string,81,finput)!=NULL)
			fputs(string,foutput);
		fclose(foutput);
		fclose(finput);
	


}