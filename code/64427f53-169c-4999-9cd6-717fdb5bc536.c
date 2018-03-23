#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   j = l%j;
   l = k-k*j;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
