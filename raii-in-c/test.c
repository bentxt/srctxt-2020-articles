# include <stdio.h>
# include "sds.h"





void clean_up(int *final_value)
{
    printf("Cleaning up\n");
    printf("Final value: %d\n",*final_value);
}

void clean_up_string(sds *final_value)
{
    printf("Cleaning up SSString\n");
    printf("Final value: %d\n",*final_value);
  sdsfree(*final_value);
}

int returnfive  () {
    printf("yyyy up\n");
     int five __attribute__ ((__cleanup__(clean_up))) = 2;
     five = 5;
    return five;

}

void mystring () {
  sds mystring __attribute__ ((__cleanup__(clean_up_string))) = sdsnew("fuuuu");
  //sds mystring = sdsnew("Hello World!");
   printf("MY SSSS %s\n", mystring);
}

 int main(int argc, char **argv)
 {
     /* declare cleanup attribute along with initiliazation
     Without the cleanup attribute, this is equivalent
     to:int avar = 1;
     */
//     int avar __attribute__ ((__cleanup__(clean_up))) = 1;
//    avar = 5;
     //int five = returnfive();
     // printf("Vall %i \n", five);

   //void *blk = ^ void (void){ printf("lkalkalka\n"); };
   void (^blk)(void) = ^{
      sds mystring = sdsnew("Hello World!");
      printf("MY SSSS %s\n", mystring);
 /* allocate memory */
              buf = alloca(bytes);
   };

    for (;;) {
//   blk();
//     mystring();
    }

     return 0;
 }
