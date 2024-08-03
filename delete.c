#include<stdio.h>
int main()
{
     int a[10];
    int i,n,pos=0,item;
    printf("enter the array size :");
    scanf("%d",&n);
    printf("\n enter  the element array of size  %d :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be deleted :");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            pos=i;
            break;
        }
        else
               if(i==n-1)
               {
                   printf("the element is not found in the array");
                   
               }
    }
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
  
printf("the array element is :"); //display of the array
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
