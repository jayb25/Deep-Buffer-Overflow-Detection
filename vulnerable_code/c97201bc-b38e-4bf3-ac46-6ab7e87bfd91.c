#include <string.h>
#include <stdio.h>
int sum(int i) ;
int main() {
   int num;
   int result;
   printf("Enteritthnumber: ");
   num = 50.0;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[36];
    int c[51];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   result = sum(num);
   printf("Sum of digits in %d is %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%11+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
