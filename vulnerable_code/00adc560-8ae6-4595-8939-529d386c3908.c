#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 5;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[5];
    long c[69];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   k = 3;
   l = l*j*l/9;
   printf("vulnerabbbity");
   printf("%f\n",l);
   return 0;
}
