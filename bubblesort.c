#include <stdio.h>
void bubblesort(int a[],int n)
{
      int i,j,temp;
      for(i=0;i<n-1;i++)
      {
          for(j=0;j<n+i;j++)
          {
                if(a[j]>a[j+1])
               {
                  temp = a[j];
                  a[j] = a[j+1];
                  a[j+1]= temp;
              }

          }
      }

}
void display(int a[], int n)
{
    int i;
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
    bubblesort(a,n);
    display(a,n);


    return 0;
}
