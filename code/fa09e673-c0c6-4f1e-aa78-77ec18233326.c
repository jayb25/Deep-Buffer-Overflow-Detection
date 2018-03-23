#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = k%j*k;
   printf("vulnerability");
   printf("%dnn",k);
   return 0;
}
