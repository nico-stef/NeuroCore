#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ifstream file("input.txt");
    
    if (!file.is_open()) {
        cerr << "Eroare: Nu se poate deschide fisierul input.txt" << endl;
        return 1;
    }
    
    int word_count = 0;
    bool in_word = false;
    char ch;
    
    // Citeste caracter cu caracter
    while (file.get(ch)) {
        // Daca caracterul este spatiu, tab, newline sau alt whitespace
        if (isspace(ch)) {
            in_word = false;
        } 
        // Daca caracterul nu este whitespace si nu suntem deja intr-un cuvant
        else if (!in_word) {
            in_word = true;
            word_count++;
        }
    }
    
    file.close();
    
    cout << "Numarul de cuvinte: " << word_count << endl;
    
    return 0;
}
