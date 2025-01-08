#include<stdio.h>
#include<stdlib.h>

FILE *f1;
char c2;

char print_rev(char c){
    char c1 = fgetc(f1);

    if(c1 != EOF){
        c2 = print_rev(c1);
        printf("%c",c2);
        return c1;
    }
    else{
        return '\0';
    }
}

int main(){

    char filename[100], temp;

    printf("enter file name : ");
    scanf("%s",filename);
    printf("\n");

    f1 = fopen(filename,"r");

    temp = fgetc(f1);

    print_rev(temp);

    return 0;
}
