#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark,a;
    printf("Enter a students Mark -");
    scanf("%d",&mark);
    a=mark/10;
    switch(a){
    case 10:
    case 9:
    case 8:
        printf("GPA is A+");
        break;
    case 7:
        printf("GPA is A");
        break;
    case 6:
        printf("GPA is A-");
        break;
    case 5:
        printf("GPA is B");
        break;
    case 4:
        printf("GPA is C");
        break;
    default:
        if(mark>=33)
            printf("GPA is D");
        else
            printf("Failed");
    }
    return 0;
}
