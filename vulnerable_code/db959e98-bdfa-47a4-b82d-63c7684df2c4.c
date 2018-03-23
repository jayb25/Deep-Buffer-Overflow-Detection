#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 69;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[75];
    char c[55];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*k*k/9;
   printf("vulnerabbbvity");
   printf("%f\n",l);
   return 0;
}
