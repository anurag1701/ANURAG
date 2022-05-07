/* Simple calculator */
#include <stdio.h>
int main()
{
  int num1,num2;
  float result;
  char op;
  printf("enter the two numbers: ");
  scanf("%d%d",&num1,&num2);
  printf("enter the operator");
  printf("+ for addition\n");
  printf("- for substraction\n");
  printf("* for multiplication");
  printf("/ for division\n");
  printf("%% for modulus\n");
  scanf(" %c",&op);
  if (op=='+')
  {
    result=num1+num2;
  }
  else if (op=='-')
  {
    result=num1-num2;
  }
  else if (op=='*')
  {
    result=num1*num2;
  }
  else if(op=='/')
  {
    if (num2==0)
    {
      printf("please give some non zero values\n");
      return (-1);
    }
    else 
    {
      result=num1/num2;
    }
  }
  else if (op=='%')
  {
    if (num2==0)
    {
      printf("please enter a non zero value\n");
      return(-1);
    }
    else
    {
      result=num1%num2;
    }
  }
  else
  {
    printf("invalid operator input\n");
    return(1);
  }
 
  printf("result=%f\n",result);
}