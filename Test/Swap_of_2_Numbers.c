#include<stdio.h>
int main()
{ 
int a, b;
printf(" Enter the value for A : ");
scanf("%d",&a );
printf(" Enter the value for B : ");
scanf("%d",&b );
int c=a; a=b; b=c;
printf(" \n After Swapping: A=%d and B=%d\n",a,b);
return 0;
}
