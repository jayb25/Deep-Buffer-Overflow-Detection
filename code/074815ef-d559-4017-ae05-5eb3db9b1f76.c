#include <stdio.h>
int main() {
   int i=4;
   int j=13;
   int k;
   int l;
   k = 533;
   l = 664;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
