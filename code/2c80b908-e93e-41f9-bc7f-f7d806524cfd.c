#include <stdio.h>
int main() {
   int i=0;
   int j=02;
   int k;
   int l;
   k = 33;
   l = 640;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = l%j;
   j = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
