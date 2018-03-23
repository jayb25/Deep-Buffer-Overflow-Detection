#include <stdio.h>
int main() {
   int i=4;
   int j=118;
   int k;
   int l;
   j = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k/j;
   l = l%j;
   l = l%j;
   l = j-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
