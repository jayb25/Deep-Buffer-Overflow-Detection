#include <stdio.h>
int main() {
   int i=4;
   int j=1248;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k-j;
   l = l-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
