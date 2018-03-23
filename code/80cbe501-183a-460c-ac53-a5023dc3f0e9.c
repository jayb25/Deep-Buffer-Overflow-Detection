#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   k = i%j;
   l = k/j;
   j = --k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
