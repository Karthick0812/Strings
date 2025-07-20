//Length of the string
#include <stdio.h>
int strlength(char *a)
{
    int i=0;
    while(i[a]!='\0')
    {
        i++;
    }
    return i;
}

int main() {
  char a[100];
  printf("enter the string\n");
  scanf("%[^\n]",a);
  int length=strlength(a);
  printf("length of the string=%d\n",length);

    return 0;
}
