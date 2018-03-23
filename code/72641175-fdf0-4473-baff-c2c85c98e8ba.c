#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   k = 6-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
