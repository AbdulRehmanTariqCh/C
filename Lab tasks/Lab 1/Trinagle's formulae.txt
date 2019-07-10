#include<stdio.h>
int main()
{
    float height,base,side;
    do{
        printf("Enter the length of triangle's base: ");
        scanf("%f",&base);
        if(base<0)
            printf("Enter a non-negative number!\n");
    }
    while(base<0);
    do{
        printf("Enter the length of triangle's height: ");
        scanf("%f",&height);
        if(height<0)
            printf("Enter a non-negative number!\n");
    }
    while(height<0);
    do{
        printf("Enter the length of triangle's remaining side: ");
        scanf("%f",&side);
        if(side<0)
            printf("Enter a non-negative number!\n");
    }
    while(side<0);
    printf("Area of triangle= %.1f\nPerimeter of triangle= %.1f\n",(base*height)/2,base+height+side);

    system("pause");
    return 0;
}
