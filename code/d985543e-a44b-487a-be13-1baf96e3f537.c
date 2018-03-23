#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
