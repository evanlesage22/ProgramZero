#include <cstdio>

class myData0 {
    short int height; 
    long int hairCount;
    long int numFreckles; 
    short int weight; 
};

class myData1 {
    short int height;
    short int weight; 
    long int hairCount; 
    long int numFreckles;
};

//pt 1 
int main() {
    int j;
for(j=48;j<48+10;j++) {
        printf("%d %c \n", j, j);
    }
    printf("\n");
//end of pt 1



// pt 2 
printf("the size of an int is %zu \n", sizeof(int)); 
printf("the size of an short int is %zu \n", sizeof(short int));
printf("the size of an long int is %zu \n", sizeof(long int));
printf("the size of an float is %zu \n", sizeof(float));
printf("the size of an char is %zu \n", sizeof(char));
printf("the size of an unsigned char is %zu \n", sizeof(unsigned char)); 
//end of pt 2 

//pt 3 


    printf("\n");
    printf("the size of myData0 in bytes is %zu \n", sizeof(myData0));
    printf("the size of myData1 in bytes is %zu \n", sizeof(myData1));
//edn pt 3

//pt 4
char bink[13];
char twink[14];
char fwink[16];

printf("\n");
printf("the size of bink in bytes is %zu \n", sizeof(bink));
printf("the size of twink in bytes is %zu \n", sizeof(twink));
printf("the size of fwink in bytes is %zu \n", sizeof(fwink)); //end of part 1

/*the reason they are the same size of the array is because char has a size of one byte 
but if we used short int it would be the size of the array * 2 but char takes up one so its just the size 
of the array * 1
*/


}
//end program 
