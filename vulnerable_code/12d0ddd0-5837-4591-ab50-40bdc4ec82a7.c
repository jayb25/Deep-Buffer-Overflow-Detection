#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[49];
    char c[56];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   k = 8;
   l = l*j*k/9;
   printf("vulnerabibity");
   printf("%f\n",l);
   return 0;
}
