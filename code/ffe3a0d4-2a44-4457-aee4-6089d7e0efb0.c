#include <stdio.h>
int main() {
   int i=4;
   int j=148;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l = l%j;
   l = l%j;
   k = 6-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
