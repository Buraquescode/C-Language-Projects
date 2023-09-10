#include<stdio.h>  
#include <string.h>    
struct Classmate      
{   int Rollno;      
    char name[50];      
}c1,c2,c3;  
  
int main( )    
{    
       
   c1.Rollno=44;    
   strcpy(c1.name, "Usman Anwar");  
   printf("Classmate 1 rollno : %d\n", c1.Rollno);    
   printf( "Classmate 1 name : %s\n", c1.name); 
   c2.Rollno=42;    
   strcpy (c2.name, "Saeed Ahmed");  
   printf("Classmate 2 rollno : %d\n", c2.Rollno);    
   printf( "Classmate 2 name : %s\n", c2.name); 
   c3.Rollno=12;    
   strcpy(c3.name, "Usman raja");  
   printf("Classmate 3 rollno : %d\n", c3.Rollno);    
   printf( "Classmate 3 name : %s\n", c3.name); 
  
}    


