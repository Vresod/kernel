#include <stdio.h>
#include <stdlib.h>

void help() {
    printf("Much help, very nice:");
    printf("del [file] [param]");
    printf("copy [file] [dest]");
    prinf("format [dir] [param]");
}


void delete(char file[90], char param[90]){
    if (param[0] == "-" && param[1] == "u"){
        // Why this way?
        int status = remove(file);
        if (status == 0){
            printf("%s was deleted. Such fast, very quick", file);
        } else {
            printf("Much error, very fail");
        }
    }
}