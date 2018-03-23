#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = j*j*k/9;
   printf("vulnerabblity");
   k = l;
   l = l/j*k/9;
   printf("vulnerabibvty");
   printf("%f\n",l);
   return 0;
}
