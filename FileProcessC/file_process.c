#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int word_count = 0;
    int in_word = 0;
    
    // Deschide fisierul input.txt pentru citire
    file = fopen("input.txt", "r");
    
    if (file == NULL) {
        printf("Eroare: Nu se poate deschide fisierul input.txt\n");
        return 1;
    }
    
    // Citeste caracter cu caracter
    while ((ch = fgetc(file)) != EOF) {
        // Daca caracterul este spatiu, tab, newline sau alt whitespace
        if (isspace(ch)) {
            in_word = 0;
        } 
        // Daca caracterul nu este whitespace si nu suntem deja intr-un cuvant
        else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
    }
    
    fclose(file);
    
    printf("Numarul de cuvinte: %d\n", word_count);
    
    return 0;
}
