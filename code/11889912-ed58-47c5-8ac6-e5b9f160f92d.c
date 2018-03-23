#include <stdio.h>
int main() {
   int i=0;
   int j=42244;
   int k;
   int l;
   j = 53;
   j = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = k%j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
