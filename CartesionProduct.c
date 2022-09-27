#include<stdio.h>
void main()
{
    int a[100],b[100],i,q;
    printf("Enter the number of elements in the set : ");
    scanf("%d",&q);
    printf("Enter the elements of the first set.\n");
    for(i=0;i<q;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of the second set.\n");
    for(i=0;i<q;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("AxB={");
    for(i=0;i<q;i++)
    {
        printf("(%d,%d),",a[i],b[i]);
    }
    printf("}");
}
