#include <string.h>
#include <stdio.h>
struct s{
  float i;
  char* j;
};
int main() {
   struct s k;
   char l[]= { 's','n','r','i','n','g' };
   k.i = 1.8;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[21];
    int c[96];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   k.j = l;
   printf("%f\n",k.i);
   printf("%s\n",k.j);
   return 0;
}
