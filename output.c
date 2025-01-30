#include <stdio.h>

int main() {
    FILE *file;

    // فتح الملف للكتابة
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // كتابة الأرقام من 1 إلى 10
    for (int i = 1; i <= 10; i++) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);

    // فتح الملف للقراءة
    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // قراءة البيانات وطباعتها
    int number;
    printf("Reading from file:\n");
    while (fscanf(file, "%d", &number) != EOF) {
        printf("%d\n", number);
    }
    fclose(file);

    return 0;
}
