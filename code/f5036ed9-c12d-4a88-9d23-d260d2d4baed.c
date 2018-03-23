#include <stdio.h>
int main() {
   int i=04;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 14;
   k = i%j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = i%j;
   l = l%j;
   l = l-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
