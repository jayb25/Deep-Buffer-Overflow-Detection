#include <stdio.h>
int main() {
   int i=0;
   int j=114;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
