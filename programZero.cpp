#include <cstdio>

int main() {
    int j;
for(j=48;j<48+10;j++) {
        printf("%d %c \n", j, j);
    }
    printf("\n");



    // part 2 
printf("the size of an int is %d \n", sizeof(int)); 
printf("the size of an short int is %d \n", sizeof(short int));
printf("the size of an long int is %d \n", sizeof(long int));
printf("the size of an float is %d \n", sizeof(float));
printf("the size of an char is %d \n", sizeof(char));
printf("the size of an unsigned char is %d \n", sizeof(unsigned char)); //end of pt 2 



} //end program 


/*
g++ programZero.cpp -o programZero.exe
./programZero.exe
*/