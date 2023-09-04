#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: file to append to, if NULL, return -1
 * @text_content: content to append, if NULL, do not append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
