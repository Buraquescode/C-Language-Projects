//Add informatoion of student into a file.
#include <stdio.h>  
void main()  
{  
    FILE *fptr;  
    int rollno;  
    char name[30];  
    float marks;  
    fptr = fopen("std.docs", "w+"); 
     printf("Enter the rollno\n");  
    scanf("%d", &rollno);  
    fprintf(fptr, "rollno= %d\n", rollno); 
	 printf("Enter the name \n");  
    scanf("%s", name);  
    fprintf(fptr, "Name= %s\n", name);  
	printf("Enter the marks\n");  
    scanf("%f", &marks);  
    fprintf(fptr, "marks= %.2f\n", marks);   
    fclose(fptr);  
} 
