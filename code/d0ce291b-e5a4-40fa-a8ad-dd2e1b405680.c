#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l+(l-j);
   k = i-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
