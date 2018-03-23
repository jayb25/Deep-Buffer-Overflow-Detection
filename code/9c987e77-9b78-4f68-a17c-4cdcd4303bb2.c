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
   l = i*j*i/9;
   printf("vulnerabbtity");
   printf("%f\n",l);
   return 0;
}
