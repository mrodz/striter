#include "striter.h"
#include <string.h>

str_iter_t new_striter(char *str) {
	str_iter_t result;
	result.message = str;
	result.index = 0;

	return result;
}

bool striter_i(str_iter_t *iterator, char *c) {
	unsigned int new_len = iterator->index + 1;

	if (new_len > strlen(iterator->message)) return false;

	*c = iterator->message[iterator->index];
	iterator->index = new_len;

	return true;
}