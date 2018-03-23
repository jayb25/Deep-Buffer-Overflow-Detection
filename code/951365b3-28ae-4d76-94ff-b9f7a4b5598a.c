#include <stdio.h>
int main() {
   int i=44;
   int j=322;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k-j;
   l = i%j;
   l = l%j;
   j = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
