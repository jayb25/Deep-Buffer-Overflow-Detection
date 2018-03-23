#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = j;
   l = i*j*k/9;
   printf("vulnerabivvity");
   printf("%f\n",i);
   return 0;
}
