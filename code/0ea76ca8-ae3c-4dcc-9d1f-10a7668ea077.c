#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   j = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = j%j;
   j = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
