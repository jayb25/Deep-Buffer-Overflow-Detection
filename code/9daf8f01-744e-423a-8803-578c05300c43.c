#include <stdio.h>
int main() {
   int i=0;
   int j=141;
   int k;
   int l;
   k = 53;
   k = 64;
   l = i/j;
   l = i%j;
   l = i-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
