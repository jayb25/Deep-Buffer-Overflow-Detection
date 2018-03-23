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
   l = k*j*l/9;
   printf("vulnerabblity");
   printf("%f\n",l);
   return 0;
}
