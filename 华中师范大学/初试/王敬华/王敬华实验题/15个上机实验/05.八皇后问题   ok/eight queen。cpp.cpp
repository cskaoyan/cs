#include <stdio.h>
#include <math.h>                 //调用了数学函数abs求整数绝对值
#define QUEENS 8

void Queen(int n);                //递归函数
void Printf();                    //输出
int Judge(int n);                 //判断是否有冲突

int Count = 0;                    //记录解的序号的全局变量。
int Put[QUEENS];                  //记录皇后在各行上的放置位置的全局数组、

void main()
{
	Queen(0);                      //调用递归函数 
                   
}

 void Queen(int n)                 //递归函数
 {
	 int i;    
	 if(n == QUEENS)               //n从0到8，试出了一个解，便输出，并回到上一行的棋盘 
	 {
		 Printf();        
		 return;    
	 }   
	 for(i = 1 ; i <= QUEENS ; i++)                          
	 {        
		 Put[n] = i;                                            
		 if(Judge(n))                                    //合法 ，进行下一行的放置          
			 Queen(n + 1);     
	 }
 }

 int Judge(int n)                                        //判断是否合法，合法返回1，不合法返回0
 {
	 int i;   
	 for(i = 0 ; i < n ; i++)                         
	 {
		 if(Put[i] == Put[n])                             //同一列上，返回0    
			 return 0;         
		 if(abs(Put[i] - Put[n]) == (n - i))              //同一对角线上，返回0，调用了数学函数       
			 return 0;    
	 }   
	 return 1;                                            //没有冲突，返回1
 }

 void Printf()                                            //输出
 {    
	 int i;   
	 printf("这是第%03d个解：" , ++Count);                //Count表示是第几个解 
	 for(i = 0 ; i < QUEENS ; i++)                        //依次输出各个行上的皇后的位置    
		 printf("%d " , Put[i]);   
	 printf("\n");
 }  