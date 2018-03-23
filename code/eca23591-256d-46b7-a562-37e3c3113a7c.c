#include <stdio.h>
int main() {
   int i=4;
   int j=34;
   int k;
   int l;
   j = 53;
   k = 62;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
