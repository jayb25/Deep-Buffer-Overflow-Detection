#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = l-j;
   l = i-j;
   l = i+j;
   l = k-j*k;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
