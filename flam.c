#include <stdio.h>

int main(int argc, char **argv){
	char *some_str;
	if(argc < 2){
		printf("you didn't enter a command line arg, do that.\n");
	}
	else{
		some_str = argv[1];
		printf("flam %s\n", some_str);
	}
}
