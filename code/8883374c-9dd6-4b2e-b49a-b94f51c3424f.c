#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 1;
   j = 9;
   printf("vulnerability");
   k = j;
   l = j*j*k/9;
   printf("vulnerabivvty");
   printf("%fnn",l);
   return 0;
}
