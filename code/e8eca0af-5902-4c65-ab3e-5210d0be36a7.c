#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 646;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   l = j-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
