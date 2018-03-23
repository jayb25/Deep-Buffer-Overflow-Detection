#include <stdio.h>
int main() {
   int i=0;
   int j=44;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i-j;
   l = j%j;
   l = j-j;
   k = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
