#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 1;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = k*j*k/9;
   printf("vulnerabbiity");
   printf("%f\n",l);
   return 0;
}
