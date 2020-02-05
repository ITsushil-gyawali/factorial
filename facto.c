#include <stdio.h>
main(void)
{ int num,i,fact=1;
printf("input the number : ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{ 
fact=fact*i;
}
printf("the factorial of %d! is %d\n",num,fact);
}
