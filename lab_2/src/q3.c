#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_KEYWORD_LENGTH 50

const char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double",
    "else", "enum", "extern", "float", "for", "goto", "if", "inline", "int", 
    "long", "register", "restrict", "return", "short", "signed", "sizeof", 
    "static", "struct", "switch", "typedef", "union", "unsigned", "void", 
    "volatile", "while"
};

int num_keywords = sizeof(keywords) / sizeof(keywords[0]);

void to_uppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int is_keyword(const char *word) {
    for (int i = 0; i < num_keywords; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1;  
        }
    }
    return 0;  
}

int main() {
    FILE *input_file;
    char word[MAX_KEYWORD_LENGTH];
    char c;
    int index = 0;

    input_file = fopen("../tests/q3_t.c", "r");
    if (input_file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((c = fgetc(input_file)) != EOF) {
        if (isalpha(c)) {
            word[index++] = c;

            while (isalpha(c = fgetc(input_file)) || isdigit(c)) {
                word[index++] = c;
            }
            word[index] = '\0';  
            if (is_keyword(word)) {
                to_uppercase(word);  
                printf("%s ", word);  
            } else {
                printf("%s ", word);  
            }

            index = 0;

            if (c != EOF && !isalpha(c) && !isdigit(c)) {
                printf("%c", c);  
            }
        }
    }

    fclose(input_file);  
    return 0;
}
