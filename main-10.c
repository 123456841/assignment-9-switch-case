
#include <stdio.h>

int main()
{
 int x,y;
char z;
 float result;
 
 printf("enter the two number\n");
 scanf("%d%d",&x,&y);
 printf("operator to perform (+,-,*,/)");
 scanf("%c",&z);
 
 result=0;
 switch( z)
{
 
 
 
 case '+': result=x+y;
       break;
 case '-': result=x-y;
 break;
  case '*': result=x*y;
       break;     
  case '/': result=x/y;
       break;
  default: printf("exit");
 
}
 
 
 
 
 
 
 
 
    return 0;
}
