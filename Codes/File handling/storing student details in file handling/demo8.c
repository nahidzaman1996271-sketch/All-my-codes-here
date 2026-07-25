#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char name[20];
    int age, num, i;
    long phoneNumber;

    file = fopen("student.txt", "a");

    if (file == NULL) {
        printf("File doesn't exist\n");
        return 1;
    }

    printf("File is opened\n");

    printf("Enter number of students: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Invalid number of students.\n");
        fclose(file);
        return 1;
    }
    while (getchar() != '\n');

    for (i = 1; i <= num; i++) {
        printf("Enter student name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

        printf("Enter student age: ");
        while (scanf("%d", &age) != 1) {
            printf("Invalid input. Enter student age: ");
            while (getchar() != '\n');
        }

        printf("Enter student phone number: ");
        while (scanf("%ld", &phoneNumber) != 1) {
            printf("Invalid input. Enter student phone number: ");
            while (getchar() != '\n');
        }
        while (getchar() != '\n');

        fprintf(file, "%-15s%-8d%-15ld\n", name, age, phoneNumber);
    }

    fclose(file);
    printf("Data saved successfully.\n");

    return 0;
}