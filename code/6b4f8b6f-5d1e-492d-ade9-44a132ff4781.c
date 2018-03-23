#include <stdio.h>
int main() {
   int i=0;
   int j=44;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%1;
   l = l-j;
   j = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
