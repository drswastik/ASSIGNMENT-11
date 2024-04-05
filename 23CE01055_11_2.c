#include <stdio.h>
#include <string.h>

char* removeDuplicates(char* s) {
    int len = strlen(s);
    int top = -1;     
    for (int i = 0; i < len; ++i) {
        if (top >= 0 && s[i] == s[top]) {
            --top;
        } else {
            
            s[++top] = s[i];
        }
    }    
    s[top + 1] = '\0';   
    return s;
}

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);    
    char* result = removeDuplicates(str);   
    printf("Final string after duplicate removals: %s\n", result);

return 0;
}
