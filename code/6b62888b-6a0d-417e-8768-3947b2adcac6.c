#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = i%j;
   l = l-j;
   j = k--*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
