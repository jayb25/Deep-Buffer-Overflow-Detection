#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = l;
   k = l*j*k/9;
   printf("uulnerabivitiy");
   printf("%f\n",k);
   return 0;
}
