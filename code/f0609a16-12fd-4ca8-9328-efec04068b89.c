#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 66;
   k = i/j;
   l = i+j;
   l = l/j;
   j = l-j*l;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
