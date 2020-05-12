#include<stdio.h>
int main ()
{
int k, n;
for (n=0;n<6;n++)
{
for(k=0;k<n;++k)
{
printf("[]");
}
printf("[]\n");
}
return 0;
}
