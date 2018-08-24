# Libft

This repository consists of my own library on C language. What consists of my own functions that I wrote be myself. 

That functions can be usefully for you!

Project of UNIT Factory (école 42).

# List Of Libft (LOL)


__#include <libft.h>__

__------------------------------------------------------------------------------------------------------------------------__

__ft_printf__ - this function is a copy of the popular original printf function in C language!

__------------------------------------------------------------------------------------------------------------------------__

__ft_memset__ - Fills (n bytes) of array elements with a character (which is passed as an argument).

__ft_bzero__ - Fills an array with zeros.

__ft_memcpy__ - Copies to the buffer (n bytes) the characters of the string.

__ft_memccpy__ - Copies the characters (n bytes) of the string to the buffer before the specified character.

__ft_memmove__ - Copies (n number of characters), that can overlap.

__ft_memchr__ - Finds a character in a string and returns a pointer to it.

__ft_memcmp__ - Compares two lines, outputs the difference between the characters.

__ft_memalloc__ - Selects the dynamic memory of type void.

__ft_memdel__ - Frees memory after "malloc".

__ft_isalpha__ - Checks whether this is a letter.

__ft_isdigit__ - Checks whether this is a digit.

__ft_isalnum__ - Checks whether this is a digit or a letter.

__ft_isascii__ - Checks whether the character is an ASCII table.

__ft_isprint__ - Checks if a character is output (we will see it or not).

__ft_toupper__ - Lower letters are converted to upper letters.

__ft_tolower__ - Upper letters are converted to lower letters.

__------------------------------------------------------------------------------------------------------------------------__

__get_next_line__ - This function will allow you to read every line ending with a newline character from a file descriptor.

__------------------------------------------------------------------------------------------------------------------------__

__For digit:__

__------------------------------------------------------------------------------------------------------------------------__

__ft_atoi__ - Translates from a data type character to an int data type.

__ft_itoa__ - Translates from a data type int to a data type char and returns an array.

__ft_sqrt__ - Determines from which number the root is square.

__ft_putnbr__ - Displays the int data type.

__ft_putnbr_fd__ - Writes the data type int, translating to char, into the form.

__------------------------------------------------------------------------------------------------------------------------__

__For string:__

__------------------------------------------------------------------------------------------------------------------------__

__ft_strlen__ - Counts the number of characters in the string (without '\0').

__ft_strdup__ - Duplicates the string.

__ft_strcpy__ - Copies a string to the buffer.

__ft_strncpy__ - Copies the bytes of the string to the buffer (n bytes).

__ft_strcat__ - Connects two lines.

__ft_strncat__ - Connects two lines (n bytes) or to end of line.

__ft_strlcat__ - Connects two lines and returns the total number of characters.

__ft_strchr__ - Finds a character in a string and returns a pointer to it.

__ft_strrchr__ - Find the last character in the string and return the pointer to it.

__ft_strstr__ - Searches for a string in a string and returns a pointer to the first character of the string that was searched for.

__ft_strnstr__ - Searches for a string in a string, only (n number), and returns a pointer to the first character of the string that was searched for.

__ft_strcmp__ - Compares two lines and outputs the difference of characters.

__ft_strncmp__ - Compares (n number) the characters of two lines and outputs the difference of characters.

__ft_strnew__ - Allocates a dynamic char memory.

__ft_strdel__ - Extends the string after "malloc".

__ft_strclr__ - The entire line is overwritten with '\ 0'.

__ft_striter__ - Each character of the string passes to a function (which is passed through a pointer).

__ft_striteri__ - Each character in the string and the index passes the function.

__ft_strmap__ - Creates a new line and writes the result of the function to which we are passing the string.

__ft_strmapi__ - Creates a new line and writes the result of the function to which we pass the string and index.

__ft_strequ__ - Verifies two lines: 1 - if they are identical and 0 - if not.

__ft_strnequ__ - Compare two (n number) characters in a string: 1 - if they are identical and 0 - if not.

__ft_strsub__ - Copies from a specific character a string, a specified number of characters.

__ft_strjoin__ - Combines two lines into one.

__ft_strtrim__ - Writes a string with no spaces at the beginning and at the end.

__ft_strsplit__ - Separates a string using a delimiter into separate word arrays.

__ft_count_words__ - Counts how many words per line are based on the delimiter.

__ft_putchar__ - Displays the symbol.

__ft_putstr__ - Displays the line.

__ft_putendl__ - Prints a string and puts '\ n' at the end.

__ft_putchar_fd__ - Writes a character to the form.

__ft_putstr_fd__ - Writes a string to the form.

__ft_putendl_fd__ - Writes a string to the form and puts '\ n' at the end.

__------------------------------------------------------------------------------------------------------------------------__

__For list:__

__------------------------------------------------------------------------------------------------------------------------__

__ft_lstnew__ - Creates a new list element and writes the content there.

__ft_lstdelone__ - Releases one list item.

__ft_lstdel__ - Releases leaf elements and sets the pointer to NULL.

__ft_lstiter__ - Sends to a function (whose address is passed to parameters) each sheet element.

__ft_lstadd__ - Adds an element to the list.

__ft_lstmap__ - Writes the elements that the function returns (whose address is transferred to the parameters) in a new list.

__ft_lstlen__ - Counts how many items are in the list.

__ft_lstprint__ - Displays symbolically the contents of the list.
