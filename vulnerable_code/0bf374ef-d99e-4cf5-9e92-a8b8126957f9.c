#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter theeumner: ");
   num = 50.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[52];
    int c[11];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   result = sum(num);
   printf("Sum offtgiits in %d is %d\n",num,result);
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
