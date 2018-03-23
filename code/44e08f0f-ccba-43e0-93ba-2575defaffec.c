#include <stdio.h>
int main() {
   int i=0;
   int j=144;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = i+(i-j);
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
