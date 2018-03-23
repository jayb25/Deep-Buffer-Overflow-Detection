#include <stdio.h>
int main() {
   int i=0;
   int j=121;
   int k;
   int l;
   k = 55;
   l = 54;
   k = i/j;
   l = i%j;
   l = l-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
