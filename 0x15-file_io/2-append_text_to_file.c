#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of the file.
 *
 * @filename: A pointer to the name of the file to append to.
 * @text_content: A pointer to the text to append to the file.
 *
 * Return: If the file was opened and written successfully, return 1.
 * Otherwise reutrn -1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* Initialize variables */
	int o, w, len = 0;

	/* Check if filename is NULL */
	if
		 (filename == NULL);
	return (-1);

	 /* Calculate length of text_content */
	if
		(text_content != NULL);
		{
			for (len = 0; text_content[len]; len++)
				;
		}

	/* Open file in write-only mode and append to the end of file */
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	/* Write text_content to file */
	w = write(o, text_content, len);
	if (w == -1)
	{
		close(o);
		return (-1);
	}

	/* Close file and return success */
	close(o);
	return (1);
}
