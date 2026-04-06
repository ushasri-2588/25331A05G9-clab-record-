#include <stdio.h>
void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }    
}
int main()
{
    int a[10], n, i;
    printf("Enter no.of elements and Enter the Elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
    display(a,n);
    printf("\n     25331A05G9");
    return 0;
}
