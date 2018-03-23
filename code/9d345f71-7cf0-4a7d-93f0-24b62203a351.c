#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = 3;
   i = 6*j*k/9;
   printf("vulnerabivvtty");
   printf("%f\n",i);
   return 0;
}
