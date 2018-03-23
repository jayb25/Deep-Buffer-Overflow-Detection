#include <stdio.h>
int main() {
   float i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   j = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
