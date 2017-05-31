#include<stdio.h>
#include<malloc.h>
int main()
{
int ni,n=0;
scanf("%d",&ni);

int a=22;
int b=6,i;;
int l,m,j, space, rows, k=0;
for(i=1;i<=ni;i++)
{
n=n+i;
}
n++;
char **arr = (char **)malloc(n * sizeof(char *));
    	for (i=0; i<n; i++)
       		arr[i] = (char *)malloc(5 * sizeof(char));

for(i=0;i<n;i++)
	for(j=0;j<5;j++)
		arr[i][j]=0;

int temp1,temp2,nodigit=0;
	for (i=0;i<n;i++)
	{
		nodigit=0;
//		printf("\n%d",b);
		temp1=b;
		while(temp1!=0)
		{
			temp1=temp1/10;
			nodigit++;
		}
//		printf("\n%d",nodigit);
		temp1=b;
		for(l=4,m=0;m<nodigit;l--,m++)
		{	
			temp2=temp1%10;
			temp1=temp1/10;
			arr[i][l]=temp2;
		}
		
		b=b+a;
		a=a+16;
	} 


int coef = 1;

    for(i=0,l=0; i<n; i++)
    {
        for(space=1; space <= n-i; space++)
            printf("  ");

        for(j=0; j <= i; j++)
        {
            for(k=0;k<5;k++)
		printf("%d",arr[l][k]);
	l++;
	if(l==n-1)
		break;
	printf(" ");
        }
        if(l==n-1)
		break;
	printf("\n");
    }

/*for (i=0;i<n;i++)
{
printf("\n");
	for(j=0;j<5;j++)
		printf("%d ",arr[i][j]);
}*/
}

