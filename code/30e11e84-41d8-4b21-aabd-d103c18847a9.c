#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 8;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbbvty");
   printf("%f\n",k);
   return 0;
}
