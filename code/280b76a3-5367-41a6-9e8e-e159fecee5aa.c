#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = i;
   k = j-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
