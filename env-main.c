#include <stdio.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main() {
    char* env[] = {"env1", "env2", "env3", NULL};
    int i = 0;
    
    while (env[i] != NULL) {
        printf("%s\n", env[i]);
        i++;
    }
    
    return 0;
}



