#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[18];
    char c[29];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   j = i;
   l = i*j*k/9;
   printf("vulnerabbbvty");
   printf("%f\n",k);
   return 0;
}
