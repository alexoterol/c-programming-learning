#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void){
    char dictionary[] = {['A']='4',['B']='8',['E']='3',['I']='1',['O']='0',['S']='5'};

    char c, original_message[MAX_SIZE] = {0};
    int i = 0;

    printf("Enter message: ");
    while((c = getchar()) != '\n' && i < MAX_SIZE)
        original_message[i++] = c;

    printf("In B1FF-speak: ");

    for (i = 0 ; i < MAX_SIZE ; i++){
        c = toupper(original_message[i]);
        if (dictionary[c])
            putchar(dictionary[c]);
        else
            putchar(c);
    }
    printf("!!!!!!!!!!\n");
    return 0;
}