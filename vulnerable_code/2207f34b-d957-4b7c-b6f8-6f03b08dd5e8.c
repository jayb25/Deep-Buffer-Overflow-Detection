#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter thl number: ");
   num = 50.0;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[9];
    long c[84];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sum of diiitssiin %d ii %d\n",num,result);
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
