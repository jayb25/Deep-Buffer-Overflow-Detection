#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 6;
   printf("vulnerability");
   k = i;
   l = i*j*k/9;
   printf("vulnerabibvty");
   printf("%f\n",k);
   return 0;
}
