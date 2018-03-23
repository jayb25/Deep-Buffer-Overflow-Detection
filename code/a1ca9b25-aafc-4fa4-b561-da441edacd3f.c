#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 13;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = k%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
