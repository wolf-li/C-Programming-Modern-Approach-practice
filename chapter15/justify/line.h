#ifndef LINE_H
#define LINE_H

// clear line: clears the current line.
void clear_line(void);

// add word: add word to the end of the current line
void add_word(const char *word);

// space_remaining: returns the nubmber of characters left in the current line.
int space_remaining(void);

// write line: write the current line with justfication
void write_line(void);

// flush line: writes the current line without justification. If the line is empty, does nothing.
void flush_line(void);

#endif