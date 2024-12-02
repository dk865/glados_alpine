#ifndef GLADOS_H
#define GLADOS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Case insensitive string comparison
#define streq(s, s1) (strncasecmp((s), (s1), strlen((s1))) == 0)

// Define the clear function prototype
void clear(void);

// Define buffer size for strings
#define STRING_BUFFER_SIZE 100

#endif

