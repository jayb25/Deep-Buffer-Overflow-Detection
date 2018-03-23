#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 534;
   l = 54;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l-j;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
