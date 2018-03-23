#include <stdio.h>
int main() {
   int i=40;
   int j=42;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = j-j;
   l = 6+j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
