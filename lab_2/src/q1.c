#include <stdio.h>

int main(){

    FILE *f1,*f2;

    f1 = fopen("../tests/q1_test.c","r");
    f2 = fopen("../tests/q1_out.c","w");

    char c1, c2;

    c1 = fgetc(f1);

    while (c1 != EOF){

        if(c1 == ' '){
            c2 = fgetc(f1);
            while (c2 == ' ')
            {
                c2 = fgetc(f1);
            }
            fputc(c1,f2);
            fputc(c2,f2);            
        }

        else if(c1 == '\t'){
            fputc(' ', f2);
        }
        else{
            fputc(c1,f2);
        }

        c1 = fgetc(f1);
    }

    return 0;
}