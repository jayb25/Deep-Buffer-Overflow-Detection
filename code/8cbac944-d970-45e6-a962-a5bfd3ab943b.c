#include <stdio.h>
int main() {
   int i=0;
   int j=42;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l-j;
   l = i-j*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
