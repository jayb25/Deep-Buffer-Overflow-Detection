#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = l;
   l = l*j*k/9;
   printf("vulnerabibiity");
   printf("%f\n",l);
   return 0;
}
