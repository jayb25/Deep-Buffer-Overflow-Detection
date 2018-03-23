#include <stdio.h>
int main() {
   int i=4;
   int j=112;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i+j;
   k = 6-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
