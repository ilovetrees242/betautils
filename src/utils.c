#include <stdio.h>
#include <stdlib.h>

void logmsg(char *msg){
    printf("%s\n", msg);
}
void logerr(char *msg){
    fprintf(stderr, "ERROR: %s\n", msg);
    exit(1);
}
