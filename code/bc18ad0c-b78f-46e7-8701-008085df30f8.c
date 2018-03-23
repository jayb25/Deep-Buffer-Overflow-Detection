#include <stdio.h>
int main() {
   float i=4;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/4;
   l = i/j;
   l = l%j;
   l = j%j;
   l = l%j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
