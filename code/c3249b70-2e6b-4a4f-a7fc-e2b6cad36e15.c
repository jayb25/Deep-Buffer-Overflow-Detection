#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerability");
   k = 3;
   k = i*j*k/9;
   printf("vulnerabbbbity");
   printf("%f\n",k);
   return 0;
}
