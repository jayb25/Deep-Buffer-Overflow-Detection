#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = j;
   l = k*j*k/9;
   printf("vulnerabbbbity");
   printf("%f\n",l);
   return 0;
}
