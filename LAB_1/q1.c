#include <stdio.h>
#include <stdlib.h> 


int main(){

    FILE *f1;

    char filename[100], temp;
    int count = 0;
    int line_count = 0;

    printf("enter file name : ");
    scanf("%s",filename);
    printf("\n");

    f1 = fopen(filename,"r");

    temp = fgetc(f1);

    while(temp != EOF){
        if(temp == '\n'){
            line_count++;
        }
        count++;
        temp = fgetc(f1);
    }

    printf("the no. of Lines in this file are : %d \n", line_count);
    printf("the no. of Characters in this file are : %d", count);

    fclose(f1);

    return 0;

}
