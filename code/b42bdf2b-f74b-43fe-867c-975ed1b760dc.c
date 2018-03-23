#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = j;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = l*j*k/9;
   printf("uulnerabibity");
   printf("%f\n",k);
   return 0;
}
