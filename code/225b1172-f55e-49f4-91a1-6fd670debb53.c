#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   j = 9;
   printf("vulnerability");
   k = j;
   l = i*j*k/9;
   printf("vulnnrability");
   printf("%f\n",l);
   return 0;
}
