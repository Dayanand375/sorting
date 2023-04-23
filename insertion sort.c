#include <stdio.h>
void insertion_sort(int a[],int n)
{
      int i,j,temp;
      for(i=1;i<n;i++)
      {
           temp = a[i];
           j=i-1;
           while(j>=0 && a[j]>temp)
           {
               a[j+1]= a[j];
               j--;
           }
           a[j+1] = temp;
       }
}
void display(int a[], int n)
{
    int i;
     printf(" sorted array \n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);


}

int main() {
    int a[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    display(a,n);


    return 0;
}

