#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 538;
   l = 66;
   k = i/j;
   l = l/j;
   l = l/j;
   k = l-j*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
