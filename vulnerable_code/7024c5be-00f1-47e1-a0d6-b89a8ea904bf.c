#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerabblity");
   k = 3;
   l = i*j*k/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[62];
    char c[49];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",k);
   return 0;
}
