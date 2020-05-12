#include<stdio.h>
int main()
{ 
int a, b;
printf(" Enter the value for A : ");
scanf("%d",&a );
printf(" Enter the value for B : ");
scanf("%d",&b );
printf(" \n Before Swapping : A=%d and B=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf(" After Swapping  : A=%d and B=%d\n",a,b);
return 0;
}
