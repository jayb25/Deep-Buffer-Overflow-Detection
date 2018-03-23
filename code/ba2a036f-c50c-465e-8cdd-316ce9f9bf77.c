#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l-j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
