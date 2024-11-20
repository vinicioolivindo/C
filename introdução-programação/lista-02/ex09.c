#include <stdio.h>
#include <ctype.h>

int main() {
    char str[51]; 
    
    while (fgets(str, sizeof(str), stdin) != NULL) {
        int i = 0;
        int flag = 0; 
        
        while (str[i] != '\0') {
            if (str[i] != ' ') {
                if (flag % 2 == 0) {
                    str[i] = toupper(str[i]);
                } else {
                    str[i] = tolower(str[i]);
                }
                flag++;
            }
            i++;
        }
        if (str[0] != ' ' && isalpha(str[0])) {
            str[0] = toupper(str[0]);
        }
        printf("%s", str);
    }

    return 0;
}
