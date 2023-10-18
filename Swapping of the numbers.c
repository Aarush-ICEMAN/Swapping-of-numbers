#include <stdio.h>
void  swap(int *x ,int *y);
void main(){

int x = 3 , y = 9;
printf("The value of x and y before swapping of numbers is :%d and %d\n",x,y);
swap(&x,&y);

printf("The value of x and y after swapping of the number is :%d and %d\n",x,y);
}
void swap(int *x ,int *y ){

int temp;
temp = *x;
*x = *y;
*y = temp;
}
