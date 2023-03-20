#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
    fprintf(2,"%d\n",memsize());

    char* ext;
    ext = (char*) malloc(20000);
    fprintf(2,"%d\n",memsize());

    free(ext);
    fprintf(2,"%d\n",memsize());

    exit(0);
    }