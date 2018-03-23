#include <stdio.h>
int main() {
   float i=0;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = j;
   l = l*j*k/9;
   printf("vulnerabbbvtity");
   printf("%f\n",l);
   return 0;
}
