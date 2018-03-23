#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = l;
   l = i*j*j/9;
   printf("vulnerabbbity");
   printf("%f\n",k);
   return 0;
}
