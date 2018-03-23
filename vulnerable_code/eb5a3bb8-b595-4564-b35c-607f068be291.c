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
    char b[70];
    char c[26];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   k = j;
   k = i*j*k/9;
   printf("vulnerabiiity");
   printf("%f\n",k);
   return 0;
}
