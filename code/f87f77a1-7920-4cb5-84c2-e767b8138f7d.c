#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   k = 533;
   k = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
