#include<stdio.h>
int main()
{
    int arr[5000],arr1[5000],arr2[5000],arr3[5000],n,i,j1,j2,j3,count1=0,count2=0,count3=0,w;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",arr+i);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]==1)
            count1++;
        if(arr[i]==2)
            count2++;
        if(arr[i]==3)
            count3++;
    }

    if(count1<=count2 && count1<=count3)
        w=count1;
    else if(count2<=count3 && count2<=count1)
        w=count2;
    else if(count3<=count2 && count3<=count1)
        w=count3;
    printf("%d\n",w);

    j1=0;
    j2=0;
    j3=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            arr1[j1]=i+1;
            j1++;
        }
        else if(arr[i]==2)
        {
            arr2[j2]=i+1;
            j2++;
        }
        else if(arr[i]==3)
        {
            arr3[j3]=i+1;
            j3++;
        }
    }

    for(i=0; i<w; i++)
    {
        printf("%d %d %d\n",arr1[i],arr2[i],arr3[i]);
    }
}
