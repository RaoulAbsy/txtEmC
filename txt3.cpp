#include <iostream>
#include <stdio.h>

//Criação do documento
int main(void) {
    FILE* file;
    file = fopen("teste.txt", "w");
    fprintf(file, "Teste numero 1");
    fclose(file);

    return 0;
}

//Edição do documento
/* int main()
{
    FILE* archive;
    archive = fopen("teste.txt", "a");

    if (archive == NULL) {
        printf("Arquivo nao localizado.");
        exit(0);
    }

    fprintf(archive, "Teste numero 2");

    fclose(archive);
}*/

//Leitura do documento
/*int main()
{
    FILE* archive;
    archive = fopen("teste.txt", "r");

    if (archive == NULL) {
        printf("Arquivo nao localizado.");
        exit(0);
    }
    char text[50];

        while (fgets(text, 50, archive) != NULL) {
            printf("%s", &text);
    }

    fclose(archive);
}*/