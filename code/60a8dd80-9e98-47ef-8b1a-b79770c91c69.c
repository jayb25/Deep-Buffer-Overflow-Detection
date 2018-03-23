#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = k%j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l+(i-j);
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
