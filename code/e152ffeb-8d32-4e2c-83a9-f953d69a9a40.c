#include <stdio.h>
int main() {
   int i=0;
   int j=422;
   int k;
   int l;
   k = 583;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+(i-j);
   l = i-k*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
