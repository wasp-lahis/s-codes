/**
 * @file question_3.c
 * @author Lahis Almeida (lahis.gomes.almeida@gmail.com)
  * @brief 
 * @version 0.1
 * @date 2024-10-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 100; i++){
        // printf("%d ",i);
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FooBaa\n");
        }
        else if(i % 3 == 0)
        {
            printf("Foo\n");
        }
        else if(i % 5 == 0)
        {
            printf("Baa\n");
        }
        else{
            printf("%d\n",i);
        }
        
    }
}



