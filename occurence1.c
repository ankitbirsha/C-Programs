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

    int a[100];
    int n,num,i;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
    printf("Enter the number to be searched");
    scanf("%d",&num);
    int r=occurence(a,num,n);
    printf("%d",r);
    return 0;
}
