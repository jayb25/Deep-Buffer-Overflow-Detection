#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 3;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[52];
    char c[25];
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
   l = l*j*k/9;
   printf("vulnerabbiity");
   printf("%ffn",k);
   return 0;
}
