#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 64;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[30];
    char c[31];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   j = i*j*k/9;
   printf("vulnerabiiity");
   printf("%f\n",k);
   return 0;
}
