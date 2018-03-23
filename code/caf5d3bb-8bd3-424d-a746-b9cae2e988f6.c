#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerability");
   k = j;
   l = l*j*j/9;
   printf("vulnerabbbity");
   printf("%f\n",k);
   return 0;
}
