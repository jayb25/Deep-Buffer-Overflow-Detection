#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   k = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabibity");
   printf("%ffn",l);
   return 0;
}
