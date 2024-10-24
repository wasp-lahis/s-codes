#include <stdio.h>

int calculate_string_size(char *string_) {
   
    // Conta qts elementos existem até o utlimo caracter '\0' (nulo)
    int count = 0;
    while (string_[count] != '\0') {
        count++;
    }
    
    return count;
}

int main() {
    char input_string[500];
    
    printf("Insert a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    
    // Calcula o tamanho
    int size_ = calculate_string_size(input_string);
    printf("Input string size is: %d\n", size_ - 1); // size_ - 1 ignora o '\n' do fgets.
    
    return 0;
}


