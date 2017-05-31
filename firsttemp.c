#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
int a=22;
int b=6,i;
int i, space, rows, k=0;

for (i=0;i<n;i++)
{
printf("%d",b);
b=b+a;
a=a+16;

    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }
    

}
}
