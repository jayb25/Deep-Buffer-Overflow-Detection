#include <stdio.h>
int main() {
   int i=44;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = j/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l%j;
   j = 6-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
