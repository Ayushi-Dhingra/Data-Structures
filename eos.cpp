#include <stdio.h>
void printint (int a)
{printf("%p\n",&a);
  unsigned char * ia=(unsigned char*)&a;
  int len=sizeof(a);
  for(int i=0;i<len;i++)
  {
    printf("%p %x\n",&ia[i],ia[i]);
  }
}
int main()
{
int i=12345;
  printint(i);
    return 0;
}
