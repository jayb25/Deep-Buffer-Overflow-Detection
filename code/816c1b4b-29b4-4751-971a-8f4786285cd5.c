#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 3;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = j*j*k/9;
   printf("vulnerabiivtty");
   printf("%f\n",l);
   return 0;
}
