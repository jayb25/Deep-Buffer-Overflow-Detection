#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 6;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbbvvty");
   printf("%f\n",l);
   return 0;
}
