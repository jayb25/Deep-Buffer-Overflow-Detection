#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   j = j;
   l = i*j*k/9;
   printf("vulnerabbbiity");
   printf("%f\n",k);
   return 0;
}
