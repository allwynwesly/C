#include<stdio.h>
int main()
{
int a;
printf(" Enter Marks: ");
scanf("%d" ,&a);
if (a>=85)
{
    printf(" Grade A\n");
}
else if (a>69)
{
    printf(" Grade B\n");
}
else if (a>54)
{
    printf(" Grade C\n");
}
else if (a>39)
{
  printf(" Grade D\n");
}
else
{
  printf(" Grade F\n");
}
return 0;
}
