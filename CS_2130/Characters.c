#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t strlen(const char* s) {
        int count = 0;
        char *s2 = strdup(s);
        while(s2[count]!= '\0'){
                count++;
        }
        free(s2);
        return count;
    }

char *simple_split(char* s, char delim) {
        if(s == NULL || s[0] == '\0'){
                return NULL;
        }
        int count = 0;
        while(s[count] != delim){
                if(s[count] == '\0'){
                        return NULL;
                }
                count++;
        }

        s[count] = '\0';
        return &s[count+1];
}

int main() {
        const char *s = "even elephants exfoliate";
        size_t slen = strlen(s);
        puts(s + (slen/2));
        return 0;
}
