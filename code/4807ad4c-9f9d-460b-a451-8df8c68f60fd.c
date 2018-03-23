#include <stdio.h>
int main() {
   float i=0;
   int j=12;
   int k;
   int l;
   l = 53;
   k = 6;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = i-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
