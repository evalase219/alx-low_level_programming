#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_word(char *str);
char **strtow(char *str);

/**
 * word_len - function that locates the index marking the end of the
 * first word.
 * @str: string to be located.
 *
 * Return: return the index marking at the end of the initial word.
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_word - function that counts the number of words in a string.
 * @str: string to be counted.
 *
 * Return: return the number of word.
 */
int count_word(char *str)
{
	int index = 0, word = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			word++;
			index += word_len(str + index);
		}
	}
	return (word);
}

/**
 * strtow - function that splits a string into words.
 * @str: string to split.
 *
 *
 * Return: return str = NULL, str = '' or on failure NULL.NULL.
 * if not pointer to an array of strings.
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, word, m, alphabet, n;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word = count_word(str);
	if (word == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (word + 1));
		if (strings  == NULL)
			return (NULL);

	for (m = 0; m < word; m++)
	{
		while (str[index] == ' ')
			index++;
	alphabet = word_len(str + index);

	strings[m] = malloc(sizeof(char) * alphabet + 1);

	if (strings[m] == NULL)
	{
		for (; m >= 0; m--)
			free(strings[m]);

		free(strings);
		return (NULL);
	}
	for (n = 0; n < alphabet; n++)
		strings[m][n] = str[index++];
	strings[m][n] = '\0';
	}
	strings[m] = NULL;

	return (strings);
}
