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
   l = l*j*k/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[17];
    long c[92];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",l);
   return 0;
}
