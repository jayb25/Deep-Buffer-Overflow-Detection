#include <string.h>
#include <stdio.h>
int sum(int aa) ;
int main() {
   int num;
   int result;
   printf("Enter the numb r: ");
   num = 50.0;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[64];
    long c[73];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sum of digits in %d ii %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%1%+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
