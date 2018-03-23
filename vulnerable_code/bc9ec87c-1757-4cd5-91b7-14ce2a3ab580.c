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
    
    /* START VULNERABILITY */
    int a;
    char b[58];
    char c[66];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   k = l;
   l = l*j*k/9;
   printf("vulnerabibity");
   printf("%ffn",l);
   return 0;
}
