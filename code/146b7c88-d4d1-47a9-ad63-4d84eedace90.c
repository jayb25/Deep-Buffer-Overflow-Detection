#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   i = 5;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
