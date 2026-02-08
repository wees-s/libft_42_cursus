<img width="2000" height="1000" alt="image" src="https://github.com/user-attachments/assets/65e9804b-1873-49f0-b6d5-58524ee82310" />

# libft

A custom implementation of standard C library functions as part of the 42 School curriculum.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Function Categories](#function-categories)
- [Project Structure](#project-structure)
- [Compilation](#compilation)
- [Testing](#testing)
- [Author](#author)

## Description

`libft` is the first project of the Common Core at 42 School. This project requires recreating a set of standard C library functions from scratch without relying on the actual libc. It teaches fundamental concepts of C programming including memory management, string manipulation, and low-level operations.

## Features

- ✅ Complete reimplementation of essential libc functions
- ✅ Memory-safe implementations with proper error handling
- ✅ Optimized performance for educational purposes
- ✅ Strict compilation with `-Wall -Wextra -Werror`
- ✅ Comprehensive function coverage across multiple categories
- ✅ Clean, readable, and well-documented code

## Installation

1. Clone the repository:
```bash
git clone [your-repository-url]
cd libft
```

2. Compile the library:
```bash
make
```

This will create the `libft.a` static library file.

## Usage

Include the header file in your C program:

```c
#include "libft.h"
```

Link the library when compiling:

```bash
gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
```

Example usage:

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, World!");
    char **words = ft_split(str, ' ');
    
    ft_putstr_fd("Original: ", 1);
    ft_putendl_fd(str, 1);
    
    ft_putstr_fd("First word: ", 1);
    ft_putendl_fd(words[0], 1);
    
    free(str);
    // Remember to free split result properly
    return (0);
}
```

## Function Categories

### Character Classification & Conversion

| Function | Description | Example |
|----------|-------------|---------|
| `ft_isalpha` | Check if character is alphabetic | `ft_isalpha('A')` → 1 |
| `ft_isdigit` | Check if character is numeric | `ft_isdigit('5')` → 1 |
| `ft_isalnum` | Check if character is alphanumeric | `ft_isalnum('Z')` → 1 |
| `ft_isascii` | Check if character is ASCII | `ft_isascii(128)` → 0 |
| `ft_isprint` | Check if character is printable | `ft_isprint(' ')` → 1 |
| `ft_toupper` | Convert to uppercase | `ft_toupper('a')` → 'A' |
| `ft_tolower` | Convert to lowercase | `ft_tolower('A')` → 'a' |

### String Manipulation

| Function | Description | Example |
|----------|-------------|---------|
| `ft_strlen` | Calculate string length | `ft_strlen("Hello")` → 5 |
| `ft_strchr` | Find first occurrence of character | `ft_strchr("Hello", 'e')` → ptr to 'e' |
| `ft_strrchr` | Find last occurrence of character | `ft_strrchr("Hello", 'l')` → ptr to last 'l' |
| `ft_strncmp` | Compare strings up to n characters | `ft_strncmp("ab", "ac", 2)` → -1 |
| `ft_strnstr` | Locate substring in string | `ft_strnstr("Hello", "ell", 5)` → ptr to "ello" |
| `ft_strdup` | Duplicate string | `ft_strdup("Hello")` → new string copy |

### String Operations

| Function | Description | Example |
|----------|-------------|---------|
| `ft_substr` | Extract substring | `ft_substr("Hello", 1, 3)` → "ell" |
| `ft_strjoin` | Concatenate two strings | `ft_strjoin("Hello", " World")` → "Hello World" |
| `ft_strtrim` | Trim characters from string | `ft_strtrim("  Hello  ", " ")` → "Hello" |
| `ft_split` | Split string by delimiter | `ft_split("a,b,c", ',')` → ["a", "b", "c"] |
| `ft_strmapi` | Apply function to each character | Transform string with index-aware function |
| `ft_striteri` | Apply function to each character (void) | Modify string in place with function |

### Memory Operations

| Function | Description | Example |
|----------|-------------|---------|
| `ft_memset` | Fill memory with constant byte | `ft_memset(ptr, 0, 10)` → zero 10 bytes |
| `ft_bzero` | Zero memory | `ft_bzero(ptr, 10)` → zero 10 bytes |
| `ft_memcpy` | Copy memory area | `ft_memcpy(dest, src, 10)` → copy 10 bytes |
| `ft_memmove` | Copy memory (overlap-safe) | Safe copy even with overlapping areas |
| `ft_memchr` | Scan memory for character | `ft_memchr(ptr, 'A', 10)` → find 'A' in 10 bytes |
| `ft_memcmp` | Compare memory areas | `ft_memcmp(ptr1, ptr2, 10)` → compare 10 bytes |

### String Copying

| Function | Description | Example |
|----------|-------------|---------|
| `ft_strlcpy` | Copy string with size limit | `ft_strlcpy(dst, src, size)` → safe copy |
| `ft_strlcat` | Concatenate with size limit | `ft_strlcat(dst, src, size)` → safe concat |

### Memory Allocation

| Function | Description | Example |
|----------|-------------|---------|
| `ft_calloc` | Allocate and zero memory | `ft_calloc(10, sizeof(int))` → zero'd array |

### Conversion

| Function | Description | Example |
|----------|-------------|---------|
| `ft_atoi` | String to integer | `ft_atoi("-123")` → -123 |

### File Descriptor Output

| Function | Description | Example |
|----------|-------------|---------|
| `ft_putchar_fd` | Output character to fd | `ft_putchar_fd('A', 1)` → print 'A' |
| `ft_putstr_fd` | Output string to fd | `ft_putstr_fd("Hello", 1)` → print "Hello" |
| `ft_putendl_fd` | Output string + newline to fd | `ft_putendl_fd("Hello", 1)` → print "Hello\n" |
| `ft_putnbr_fd` | Output number to fd | `ft_putnbr_fd(42, 1)` → print "42" |

## Project Structure

```
libft/
├── ft_isalpha.c         # Character classification
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_toupper.c         # Character conversion
├── ft_tolower.c
├── ft_strlen.c          # String functions
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strdup.c
├── ft_substr.c          # String operations
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_memset.c          # Memory functions
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_strlcpy.c         # String copying
├── ft_strlcat.c
├── ft_calloc.c          # Memory allocation
├── ft_atoi.c            # Conversion
├── ft_putchar_fd.c      # File descriptor output
├── ft_putstr_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── libft.h              # Header file with prototypes
├── Makefile             # Compilation rules
└── README.md            # This file
```

## Compilation

The project uses a Makefile with the following targets:

- `make` or `make all`: Compiles the library
- `make clean`: Removes object files
- `make fclean`: Removes object files and the library
- `make re`: Performs fclean followed by all

### Compilation Flags

The project is compiled with strict flags to ensure code quality:
- `-Wall`: Enable all warnings
- `-Wextra`: Enable extra warnings
- `-Werror`: Treat warnings as errors

## Testing

To test the `libft` functions, you can create a comprehensive test program:

```c
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // Test string functions
    printf("=== STRING FUNCTIONS ===\n");
    printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen("Hello"));
    printf("ft_strchr(\"Hello\", 'e'): %s\n", ft_strchr("Hello", 'e'));
    
    // Test memory functions
    printf("\n=== MEMORY FUNCTIONS ===\n");
    char buffer[10];
    ft_memset(buffer, 'A', 5);
    buffer[5] = '\0';
    printf("After ft_memset: %s\n", buffer);
    
    // Test string operations
    printf("\n=== STRING OPERATIONS ===\n");
    char *joined = ft_strjoin("Hello", " World");
    printf("ft_strjoin result: %s\n", joined);
    free(joined);
    
    char **split_result = ft_split("one,two,three", ',');
    printf("ft_split result: [%s] [%s] [%s]\n", 
           split_result[0], split_result[1], split_result[2]);
    
    // Free split result properly
    for (int i = 0; split_result[i]; i++)
        free(split_result[i]);
    free(split_result);
    
    // Test conversion
    printf("\n=== CONVERSION ===\n");
    printf("ft_atoi(\"-123\"): %d\n", ft_atoi("-123"));
    
    // Test character classification
    printf("\n=== CHARACTER CLASSIFICATION ===\n");
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
    printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
    printf("ft_tolower('A'): %c\n", ft_tolower('A'));
    
    return (0);
}
```

## Key Implementation Details

### Memory Safety
All functions that allocate memory include proper error checking and return `NULL` on allocation failure.

### Edge Cases
Functions handle edge cases such as:
- NULL pointer inputs
- Empty strings
- Zero sizes
- Invalid file descriptors

### Performance
Implementations prioritize clarity and correctness while maintaining reasonable performance for educational purposes.

## Author

**wedos-sa** - Cadet at 42 São Paulo
