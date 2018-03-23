#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   j = 533;
   l = 64;
   k = l/j;
   l = i/j;
   l = j/j;
   l = k%j;
   l = j-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
