#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerabiiity");
   k = 3;
   l = i*j*k/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[59];
    long c[21];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",l);
   return 0;
}
