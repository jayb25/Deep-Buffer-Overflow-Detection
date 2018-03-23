#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 538;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   k = k-i*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
