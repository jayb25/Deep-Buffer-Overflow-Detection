#include <stdio.h>
int main() {
   float i=0;
   int j=12;
   int k;
   int l;
   j = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
