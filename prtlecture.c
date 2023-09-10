/*DEF: The pointer in C language is a variable which stores the address 
of another variable. This variable can be of type int, char, array, function, 
or any other pointer.

int n = 10;   
int* p = &n;/ Variable p of type pointer, 
is pointing to the address of the variable n of type integer.  

The pointer in c language can be declared using * (asterisk symbol). 
It is also known as indirection pointer used to dereference a pointer.
For Example:
int *a;//pointer to int  
char *c;//pointer to char 
*/



/*
#include<stdio.h>  
int main()
{
int number=50;    
int *p;      
p=&number; 
printf("Address of p variable is %x \n",p); 
printf("Value of p variable is %d \n",*p);  
}      
*/


//Increament and Decreament in pointers:
/*

#include<stdio.h>  
int main()
{  
int number=50;        
int *p;      
p=&number;       
printf("Address of p variable is %x \n",p);        
p=p-1;        
printf("After decrement: Address of p variable is %u \n",p); 
}
*/

//Subtraction and Addition in pointers:

/*
#include<stdio.h>  
int main()
{  
int number=50;        
int *p;     
p=&number;      
printf("Address of p variable is %u \n",p);        
p=p-3;    
printf("After subtracting 3: Address of p variable is %u \n",p);        
return 0;  
} 
*/



//Function Pointers:

#include <stdio.h>  
int add(int,int);  
int main()  
{  
   int a,b, (*ip)(a,b), result;    
   printf("Enter the values of a and b : ");  
   scanf("%d %d",&a,&b);  
   ip=add;  
   result=(*ip)(a,b);  
   printf("Value after addition is : %d",result);    
}  
int add(int a,int b)  
{  
    int c=a+b;    
}  




   