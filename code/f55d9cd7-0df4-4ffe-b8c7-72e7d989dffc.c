#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = l*j*l/9;
   printf("vulnerability");
   printf("%f\n",l);
   return 0;
}
