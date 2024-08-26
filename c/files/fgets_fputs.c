#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char line[256];  // Buffer to hold each line

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }

    // Read each line from the source file and write it to the destination file
    while (fgets(line, sizeof(line), sourceFile) != NULL) {
        fputs(line, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copy completed successfully.\n");

    return 0;
}
