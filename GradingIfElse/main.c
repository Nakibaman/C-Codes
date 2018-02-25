#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("Enter the marks");
    scanf("%d",&marks);
    if(marks>=80)
        printf("The Grade is A+");
    else if(marks>=70)
        printf("The Grade is A");
    else if(marks>=60)
        printf("The Grade is A-");
    else if(marks>=50)
        printf("The Grade is B");
    else if(marks>=40)
        printf("The Grade is C");
    else if(marks>=33)
        printf("The Grade is D");
    else
        printf("Failed");
    return 0;
}
