//Nathan Nguyen
//(then change it to say // CMPS 3350 - lab 02 is all about git)
// CMPS 3350 - lab 02
// Prints each command-line argument passed into the program, one per line
#include <stdio.h>
#include <algorithm>
#include <cstring>

int main(int argc, char ** argv)
{
    for(int i = argc - 1; i >= 1; i--) {
        std::reverse(argv[i], argv[i] + strlen(argv[i])); 
        printf("arg %d: %s\n", i, argv[i]);
    }
    return 0;
}

