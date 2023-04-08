#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[20];
    char surname[20];
    int year;
}  human;

int sort (const void *a, const void *b){
	human *humanA = (human *)a;
    human *humanB = (human *)b;
    return (humanA->year - humanB->year);
}

int main(int argc, char *argv[]) {
	FILE *f = fopen("C:\c labs\Labs\Laba7\"input.txt", "r");
    int count = 0;
    char buffer[100];
    while (fgets(buffer, 100, f) != NULL) {
        count++;
    }
    fseek(f, 0, SEEK_SET);
    
    
}
