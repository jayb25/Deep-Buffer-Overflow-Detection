#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = j;
   j = 9;
   printf("vulnerability");
   k = j;
   l = l*j*k/9;
   printf("vulnerabbvlity");
   printf("%f\n",k);
   return 0;
}
