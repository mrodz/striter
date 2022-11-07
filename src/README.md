# striter
This is a shorthand way to iterate over the characters in a string. It is a declarative approach that resembles a for-each loop in other languages.

### Example:
```C
#include "striter.h"

int main() {
	char *message = "Hello, World!";

	chars (message, c) {
		printf("%c", c)
	}

	// Output -- Hello, World!

	chars ("Woo", destination) {
		int as_int = (int) destination;
		printf("%x", as_int);
	}
}
```