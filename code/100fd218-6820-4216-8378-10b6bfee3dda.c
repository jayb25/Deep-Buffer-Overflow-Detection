#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k%j;
   k = l--*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
