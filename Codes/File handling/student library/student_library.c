#include <stdio.h>
#include <string.h>

#define FINE_PER_DAY 10

int main() {
    FILE *file;
    char studentId[20], studentName[20], bookId[20];
    int lateDays, fine, i;

    file = fopen("library.txt", "a");

    if (file == NULL) {
        printf("File doesn't exist\n");
        return 1;
    }

    printf("File is opened\n");

    for (i = 1; i <= 5; i++) {
        printf("\nStudent %d\n", i);

        printf("Enter Student ID: ");
        fgets(studentId, sizeof(studentId), stdin);
        studentId[strcspn(studentId, "\n")] = '\0';

        printf("Enter Student Name: ");
        fgets(studentName, sizeof(studentName), stdin);
        studentName[strcspn(studentName, "\n")] = '\0';

        printf("Enter Book ID: ");
        fgets(bookId, sizeof(bookId), stdin);
        bookId[strcspn(bookId, "\n")] = '\0';

        printf("Enter Number of Late Days: ");
        while (scanf("%d", &lateDays) != 1) {
            printf("Invalid input. Enter Number of Late Days: ");
            while (getchar() != '\n');
        }
        while (getchar() != '\n');

        fine = lateDays * FINE_PER_DAY;

        fprintf(file, "%-15s%-15s%-15s%-10d%-10d\n",
                studentId, studentName, bookId, lateDays, fine);
    }

    fclose(file);
    printf("\nData saved successfully.\n");

    return 0;
}