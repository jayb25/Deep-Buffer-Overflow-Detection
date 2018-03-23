#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i-j;
   l = i/j;
   l = l%j;
   l = j-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%dnn",l);
   return 0;
}
