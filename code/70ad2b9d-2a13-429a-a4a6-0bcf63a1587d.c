#include <stdio.h>
int main() {
   int i=0;
   int j=183;
   int k;
   int l;
   j = 63;
   l = 69;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
