#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-k;
   l = i-j;
   i = l/j;
   l = j-j;
   l = i-j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",i,l);
   return 0;
}
