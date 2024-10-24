#include <stdio.h>


// from question 10
int calculate_string_size(char *string_) {
   
    // Conta qts elementos existem até o utlimo caracter '\0' (nulo)
    int count = 0;
    while (string_[count] != '\0') {
        count++;
    }
    
    return count;
}

void reverse_string(char *str) {
    int init_count = 0;
    int final_count = 0;
    
    final_count = calculate_string_size(str);
    final_count--;  // ignora '\n' do fgets 
 
    // Lógica de inversão
    while (init_count < final_count) {
        // Inversão viabilizada por meio de variavel auxiliar temp
        char temp = str[init_count];
        str[init_count] = str[final_count];
        str[final_count] = temp;
        
        init_count++;
        final_count--;
    }
}

int main() {
    char word[500];
    
    printf("Enter a string: ");
    fgets(word, sizeof(word), stdin);
    
    // Reverte string
    reverse_string(word);
    printf("Reversed string: %s\n", word);
    
    return 0;
}
