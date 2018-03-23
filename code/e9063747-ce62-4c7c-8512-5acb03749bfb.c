#include <stdio.h>
int main() {
   int i=4;
   int j=123;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = i%j;
   l = l/j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
