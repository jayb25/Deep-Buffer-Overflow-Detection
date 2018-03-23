#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 52;
   l = 6/k;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i%j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
