#include <string.h>
#include <stdio.h>
struct s{
  float i;
  char* j;
};
int main() {
   struct s k;
   char l[]= { 's','n','r','s','n','g' };
   k.i = -38;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[85];
    char c[40];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   k.j = l;
   printf("%f\n",k.i);
   printf("%s\n",k.j);
   return 0;
}
