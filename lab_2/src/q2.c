#include <stdio.h>

int main(){

    FILE *f1,*f2;

    f1 = fopen("../tests/q2_t.c","r");
    f2 = fopen("../tests/q2_o.c","w");

    char c1, c2;

    c1 = fgetc(f1);

    while (c1 != EOF){

        if(c1 == '#'){
            c2 = fgetc(f1);
            while (c2 != '\n'){
                c2 = fgetc(f1);
            }           
        }
        else{
            fputc(c1,f2);
        }

        c1 = fgetc(f1);
    }

    return 0;
}