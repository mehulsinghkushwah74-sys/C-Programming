// #include <stdio.h>

// int main() {
//     FILE *fp;

//     // File open karna write mode me
//     fp = fopen("notes.txt", "w");

//     // Check karna ki file properly open hui ya nahi
//     if (fp == NULL) {
//         printf("File open karne me error aaya!\n");
//         return 1;
//     }

//     // File me data write karna
//     fprintf(fp, "Namaste! Yeh pehla line hai file me.\n");
//     fprintf(fp, "C language file handling simple hai.\n");

//     // File close karna compulsory hai
//     fclose(fp);

//     printf("Data successfully file me save ho gaya!\n");
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     FILE *fp;
//     char buffer[100];

//     // File open karna read mode me
//     fp = fopen("notes.txt", "r");

//     if (fp == NULL) {
//         printf("File nahi mili ya open nahi ho saki!\n");
//         return 1;
//     }

//     // Line by line data read karke print karna
//     while (fgets(buffer, sizeof(buffer), fp) != NULL) {
//         printf("%s", buffer);
//     }

//     fclose(fp);
//     return 0;
// }

#include <stdio.h>
int main()
{
    FILE *fs;

    fs = fopen("mehul.txt", "w");

    if (fs == NULL)
    {
        printf("There is some error while opening the file");

        return 1;
    }
    else
    {
        fprintf(fs, "Hello my name is mehul singh kushwah\n");
        fprintf(fs, "C-Language is not that tough\n");

        fclose(fs);

        printf("Data has been placed inside the file succesfully\n");

        char buffer[100];

        fs = fopen("mehul.txt", "r");
        if (fs == NULL)
        {
            printf("error");
            return 1;
        }

        while (fgets((buffer), sizeof(buffer), fs) != NULL)
        {
            printf("%s", buffer);
        }

        fclose(fs);
    }

    return 0;
}