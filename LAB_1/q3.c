#include <stdio.h>
#include <stdlib.h>

int merge_files_alternatively(FILE *file1, FILE *file2, FILE *result) {
    int c1, c2;  

    while (1) {
        c1 = fgetc(file1);
        if (c1 != EOF) {
            fputc(c1, result); 
            if (c1 == '\n') {
                break;
            }
        } else {
            break;  
        }

        
        c2 = fgetc(file2);
        if (c2 != EOF) {
            fputc(c2, result);  
            if (c2 == '\n') {
                break;
            }
        } else {
            break; 
        }
    }
    return 0;
}

int main() {
    FILE *file1, *file2, *result;

    file1 = fopen("./test_files/lorem.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1.txt\n");
        return 1; 
    }

    file2 = fopen("./test_files/ipsum.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file2.txt\n");
        fclose(file1); 
        return 1; 
    }

    result = fopen("./test_files/result.txt", "w");
    if (result == NULL) {
        printf("Error opening result.txt\n");
        fclose(file1);
        fclose(file2);
        return 1;  
    }

    merge_files_alternatively(file1, file2, result);

    fclose(file1);
    fclose(file2);
    fclose(result);

    printf("Merging complete. Check 'result.txt' for the merged content.\n");

    return 0;
}
