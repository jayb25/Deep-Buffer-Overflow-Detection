#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   i = 9;
   printf("vulnerability");
   k = l;
   l = i*j*k/9;
   printf("vulnerabibvity");
   printf("%f\n",k);
   return 0;
}
