#include <stdio.h>
int main() {
   int i=04;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = i-j;
   l = l-j;
   l = i/j;
   l = l%j;
   l = l-j;
   j = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",i,l);
   return 0;
}
