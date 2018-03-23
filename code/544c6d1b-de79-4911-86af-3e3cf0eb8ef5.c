#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = l;
   l = k*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
