#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "math.h"
#include "utils.h"

int main(int argc, char *argv[]){
    if(argv[1] == NULL){
        logmsg("Usage: beta <command> <args>");
        logmsg("=== Commands ===");
        logmsg("list-factors <num>: List factors of a number");
    }
    else {
        if(strcmp(argv[1], "list-factors") == 0){
            if(argv[2] == NULL)
                logerr("Provide a number.");
            else
                listFactors(strtol(argv[2], NULL, 10));
        }
        else
            logerr("Unrecognised command");
    }
}
