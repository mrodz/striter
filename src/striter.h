#pragma once

#ifndef __STRITER_H__
	#define __STRITER_H__

	#include <stdbool.h>

	typedef struct str_iter_t {
		char *message;
		unsigned int index;
	} str_iter_t;
	
	str_iter_t new_striter(char *str);
	bool striter_i(str_iter_t *iterator, char *c);

	#define chars(iter, c) str_iter_t __STR_ITER_OBJ__ = new_striter(iter); for (char c; striter_i(&__STR_ITER_OBJ__, &c);) 
#endif