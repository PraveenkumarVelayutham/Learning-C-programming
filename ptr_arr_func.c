
/*---------------Pointer to Array of functions in C----------------*/
/*the pointer to an array of functions is a pointer pointing to 
an array which contains the pointers to the functions. */

#include<stdio.h>  
int addition(int a);
int sum(int i);
int (*arr[2])();
int (*(*ptr)[2])();
void main () {  
arr[0]=addition;
arr[1]=sum;
ptr=&arr;
int result=(*(arr[1]))(9);
printf("result = %d\n",result);
int ptr_result=(*(*ptr)[1])(result);
printf("ptr result = %d",ptr_result);
}  
int addition(int a){
    int b=5;
    return a+b;
}
int sum(int i){
    printf("Value of i=%d\n",i);
    return i;
}


