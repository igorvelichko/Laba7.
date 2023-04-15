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
    int x = 0;
    char s[100];
    while (fgets(s, 100, f) != NULL) {
        x++;
    }
    fseek(f, 0, SEEK_SET);
    
    human *arr1 = malloc(sizeof(human) * x);
    human *arr2 = malloc(sizeof(human) * x);
    
    printf("Данные людей, считанные из файла:\n");
    for (int i = 0; i < count; i++) {
        fscanf(f_input, "%s %s %d", arr1[i].name, arr1[i].surname, &arr1[i].year_of_birth);
        printf("%s %s, %d year\n", arr1[i].surname, arr1[i].name, arr1[i].year_of_birth);
    }
    
    fclose(f_input);
    
    memcpy(arr2, arr1, sizeof(human) * count);
    qsort(arr2, count, sizeof(human), compare_years);
    printf("\nMas:\n");
    for (int i = 0; i < count; i++) {
        printf("%s %s, %d year\n", arr2[i].surname, arr2[i].name, arr2[i].year_of_birth);
    }
    free(arr1);
    free(arr2);

    return 0;
}
