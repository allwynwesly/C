#include<stdio.h>
int main()
{
int food;
printf(" Choose a number between 1 to 5: ");
scanf (" %d",&food);
switch (food)
{
case 1: printf(" Food item - Pasta\n Price - Rs 179\n");
break;
case 2: printf(" Food item - Sandwich\n Price - Rs 49\n");
break;
case 3: printf(" Food item - French Fires\n Price - Rs 99\n");
break;
case 4: printf(" Food item - Pizza\n Price - Rs 339\n");
break;
case 5: printf(" Food item - Burger\n Price - Rs 149\n");
break;
default: printf(" Punishment no food for you\n");
}
return 0;
}
