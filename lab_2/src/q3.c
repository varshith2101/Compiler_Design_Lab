#include <stdio.h>
#include <string.h>

char* toggle(char* s){
    int i=0;
    while(s[i] != '\0'){
        s[i] = s[i] - 32;
    }

    return s;
}

int main(){

    const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do", "double", 
        "else", "enum", "extern", "float", "for", "goto", "if", "inline", "int", 
        "long", "register", "restrict", "return", "short", "signed", "sizeof", 
        "static", "struct", "switch", "typedef", "union", "unsigned", "void", 
        "volatile", "while"
    };

    int num_keywords = sizeof(keywords) / sizeof(keywords[0]);

    // if (strcmp(keywords[i]) == 0) {
    //         printf("The string '' is a C keyword.\n");
    // }

    FILE *f1,*f2;

    f1 = fopen("../tests/q2_t.c","r");
    f2 = fopen("../tests/q2_o.c","w");

    char c1, c2;
    char buff[20];

    c1 = fgetc(f1);

    while (c1 != EOF){

        while(c1 != ' '){
            fputc(c1,f2);
            c1 = fgetc(f1);
            continue;
        }

        c1 = fgetc(f1);
    }

    return 0;
}