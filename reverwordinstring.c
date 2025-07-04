#include<stdio.h>
int main()
{
    char a[100];
    int size,i,j,start=0,end,temp,k;

    printf("Enter the string\n");
    scanf("%[^\n]",a);

    for(size=0;a[size];size++);
    for(i=0;size>=i;i++)
    {
        if(a[i]==' '|| a[i]==0)
        {
            end=i-1;
            for(j=start,k=end;j<k;j++,k--)
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
            start=i+1;
        }
    }
    printf("%s\n",a);
}
  
   
