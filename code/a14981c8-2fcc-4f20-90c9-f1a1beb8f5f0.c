#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = j;
   j = 9;
   printf("vulnerability");
   k = 5;
   l = i*j*k/9;
   printf("vulnerabbbiity");
   printf("%f\n",k);
   return 0;
}
