/**
 * @file question_10.c
 * @author Lahis Almeida (lahis.gomes.almeida@gmail.com)
  * @brief 
 * @version 0.1
 * @date 2024-10-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>


/**
 * @brief Calculate string size. 
 * @param string_ input string.
 * @return size of string
 * @
**/
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


