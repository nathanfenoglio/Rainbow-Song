#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    char *some_word;
    int some_int = 666;

    if(argc < 2){
        printf("you didn't enter any command line args. I prefer 1st a string and then an int for this one.\n");
        return 1;
    }
    else if(argc == 2){
        printf("It seems that you entered a string, but not an int to follow.\n");
        //will continue on though and use default value of some_int
    }
    else{
        some_int = atoi(argv[2]);    
    }

    some_word = argv[1];
    
    printf("flam %s flim %d\n", some_word, some_int);

    return 0;
}