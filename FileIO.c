#include <stdio.h>

int main(int argc, char ** argv){
    int sum = 0;
    int num = 0;

    if (argc != 2){
        printf("I need the filename next time.");
        return 1;
    }

    //Complete fopen argument to open file in read mode
    FILE * numptr = fopen(argv[1], "r");

    if (numptr == NULL){
        return 1;
    }

    //Complete while loop condition to read an integer from file
    // Asking for one integer value, so checks == 1
    while (fscanf(numptr, "%d", &num) == 1){
        sum +=num;
    }

    printf("%d\n", sum);

    //Write line to close file
    fclose(numptr);
    
    
    return 0;
}
