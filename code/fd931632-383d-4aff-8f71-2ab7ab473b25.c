#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 533;
   l = 60;
   k = i%j;
   l = l/j;
   l = j/j;
   l = i/j;
   l = l%j;
   l = i-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
