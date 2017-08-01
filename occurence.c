#include<stdio.h>
#include<conio.h>
int occurence(int a[],int num,int size)
    {
        int count=0;
        int i;
        for(i=0;i<num;i++)
        {

            if(a[i]==num)
                count++;
        }
        return count;
    }
int main()
{

    int a[5]={1,3,4,5,5};
    int num=5;
    int size=5;
    int r=occurence(a,num,size);
    printf("%d",r);
    return 0;
}
