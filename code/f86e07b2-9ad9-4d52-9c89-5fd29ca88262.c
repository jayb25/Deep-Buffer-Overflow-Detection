#include <stdio.h>
int main() {
   int i=40;
   int j=1;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l%j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
