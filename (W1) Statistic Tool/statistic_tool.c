#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *in = stdin;

    if (argc > 1) {
        in = fopen(argv[1], "r");
        if (!in) {
            perror("fopen"); 
            return 1;
        }
    }

    long chars = 0, lines = 0, longest_line = 0, current_line = 0;
    int in_word = 0;      /* track word boundaries */
    long words = 0;       /* amount of words */

    int c;
    while ((c = fgetc(in)) != EOF) {
        chars++;

        if (c == '\n') {
            lines++;
            if (current_line > longest_line) longest_line = current_line;
            current_line = 0;
        } else {
            current_line++;
        }

        /* word-counting logic
           A word STARTS the moment you see a non-space character
           right after being in "not in a word" state. isspace(c) from
           <ctype.h> is your friend. You only need to increment `words`
           once per word — at the transition, not on every character. */
    }

    printf("lines: %ld\n", lines);
    printf("words: %ld\n", words);
    printf("chars: %ld\n", chars);
    printf("longest line: %ld\n", longest_line);

    if (in != stdin) fclose(in);
    return 0;
}