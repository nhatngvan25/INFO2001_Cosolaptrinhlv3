#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *f;
    f = fopen("C:\\Users\\nhatx\\OneDrive\\Desktop\\vidu.txt", "a");
    char s[50];
    printf("nhap vao dong chu can ghi\n");
    fgets(s, sizeof(s), stdin);

    
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    fwrite(s, strlen(s), 1, f);

    fclose(f);

    return 0;
}
