#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    int tall, weight;
    printf("enter your height :");
    scanf("%d", &tall);
    printf("enter your weight :");
    scanf("%d", &weight);


    printf("total : %d", tall - weight);

    return 0;
}
*/

int main()
{
    double point, gpa;
    printf("enter your point :");
    scanf("%lf", &point);
    gpa = point - 3;
    
    printf("your total : %lf", gpa);

    return 0;
}