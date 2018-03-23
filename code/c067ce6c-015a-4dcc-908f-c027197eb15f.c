#include <stdio.h>
int main() {
   int i=0;
   int j=444;
   int k;
   int l;
   k = 53;
   l = 66;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k--*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
