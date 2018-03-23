#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Etter thee number: ");
   num = 50.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[44];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sun of diibts in %d is %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%10+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
