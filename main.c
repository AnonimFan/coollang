#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _UNIX
#include <unistd.h>
#elif _WIN32
#include <windows.h>
#endif

int eputs(const char *str)
{
    printf("[ERROR]: %s\n", str);
}

int main(int argc, char **argv)
{

    if (argc < 2 || argc > 2) {
        eputs("either too many or no arguments\n");
        return 1;
    }
    char *lines[1000];
    FILE *file1 = fopen(argv[1], "r");
    FILE *asm1 = fopen("temp.asm", "w");

    char line[256];
    if (file1 == NULL) {
        eputs("no file with that name exists");
        return 1;
    }
    while(fgets(line, 256, file1)) {
        printf("%s", line);
        if (strstr(line, "printf")) {
            fprintf(asm1 "%define printf 1\nsegment .text\n_start: \n    mov rax, printf\n    mov rdi, 1");
        }
    }



    //eputs("no erro here");
    fclose(file1);


    return 0;
}
