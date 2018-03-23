#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l-j;
   l = --k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
