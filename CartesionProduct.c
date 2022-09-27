#include<stdio.h>
void main()
{
    int a[100],b[100],i,j,q,p;
    printf("Enter the number of elements in the set A : ");
    scanf("%d",&q);
    printf("Enter the elements of the set A.\n");
    for(i=0;i<q;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of elements in the set B : ");
    scanf("%d",&p);
    printf("Enter the elements of the set B.\n");
    for(i=0;i<p;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("AxB={");
    for(i=0;i<q;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("(%d,%d),",a[i],b[j]);
        }
    }
    printf("}");
}
