#include <stdio.h>
int main() {
   int i=44;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 62;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i%j;
   j = k-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
