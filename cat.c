#include <stdio.h>
#include <stdlib.h>

/*
Farhan Ali
i.farhanali.dev@gmail.com
*/
void read_file(const char* filename){
    FILE* file = fopen(filename, "rb");
    if(file == NULL){
        printf("Failed to Open File!\n");
        exit(1);
    }

    int chr;
    while((chr = fgetc(file)) != EOF){
        printf("%c", (char)chr);
    }
    fclose(file);
}
int main(int argc, char* argv[]){
    if(argc < 2){
        printf("Usage: ./cat <filename>");
        return 1;
    }

    char* filename = argv[1];
    read_file(filename);
    return 0;
}
