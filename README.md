# libft

_This project has been created as part of the 42 curriculum by molasz-a._

> Part of [42 Barcelona — molasz-a](https://github.com/Molasz/42), a monorepo centralizing every project completed at 42 Barcelona.

## Description

C programming quickly becomes tedious without access to standard utility functions. **libft** is a project to reimplement those functions from scratch, understanding how they work at a low level. The result is a static library (`libft.a`) that serves as a personal toolbox throughout the entire 42 curriculum.

The project is divided into three parts: reimplementations of libc functions, additional utility functions not found in the standard library, and a set of linked list manipulation functions (bonus).

---

## Functions

![Skills](https://skillicons.dev/icons?i=c,linux)

### Part 1 — Libc reimplementations

| Function     | Description                                      |
| ------------ | ------------------------------------------------ |
| `ft_isalpha` | Checks if a character is alphabetic              |
| `ft_isdigit` | Checks if a character is a digit                 |
| `ft_isalnum` | Checks if a character is alphanumeric            |
| `ft_isascii` | Checks if a character is in the ASCII range      |
| `ft_isprint` | Checks if a character is printable               |
| `ft_strlen`  | Returns the length of a string                   |
| `ft_memset`  | Fills a memory area with a given byte            |
| `ft_bzero`   | Sets a memory area to zero                       |
| `ft_memcpy`  | Copies memory (no overlap handling)              |
| `ft_memmove` | Copies memory (handles overlapping regions)      |
| `ft_strlcpy` | Size-bounded string copy                         |
| `ft_strlcat` | Size-bounded string concatenation                |
| `ft_toupper` | Converts a character to uppercase                |
| `ft_tolower` | Converts a character to lowercase                |
| `ft_strchr`  | First occurrence of a character in a string      |
| `ft_strrchr` | Last occurrence of a character in a string       |
| `ft_strncmp` | Compares two strings up to n characters          |
| `ft_memchr`  | Searches for a byte in a memory area             |
| `ft_memcmp`  | Compares two memory areas                        |
| `ft_strnstr` | Finds a substring within a length-limited string |
| `ft_atoi`    | Converts a string to an integer                  |
| `ft_calloc`  | Allocates zero-initialized memory                |
| `ft_strdup`  | Duplicates a string via `malloc`                 |

### Part 2 — Additional functions

| Function        | Description                                                  |
| --------------- | ------------------------------------------------------------ |
| `ft_substr`     | Extracts a substring from a string                           |
| `ft_strjoin`    | Concatenates two strings into a new one                      |
| `ft_strtrim`    | Trims a set of characters from both ends of a string         |
| `ft_split`      | Splits a string by a delimiter into a NULL-terminated array  |
| `ft_itoa`       | Converts an integer to a string                              |
| `ft_strmapi`    | Applies a function to each character, returning a new string |
| `ft_striteri`   | Applies a function to each character in-place                |
| `ft_putchar_fd` | Writes a character to a file descriptor                      |
| `ft_putstr_fd`  | Writes a string to a file descriptor                         |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor   |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor                       |

### Part 3 — Linked list (bonus)

Functions to manipulate singly-linked lists using the `t_list` struct:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

| Function          | Description                                              |
| ----------------- | -------------------------------------------------------- |
| `ft_lstnew`       | Creates a new list node                                  |
| `ft_lstadd_front` | Adds a node at the front of the list                     |
| `ft_lstadd_back`  | Adds a node at the back of the list                      |
| `ft_lstsize`      | Returns the number of nodes in the list                  |
| `ft_lstlast`      | Returns the last node of the list                        |
| `ft_lstdelone`    | Frees a single node using a delete function              |
| `ft_lstclear`     | Frees all nodes of the list                              |
| `ft_lstiter`      | Iterates over the list, applying a function to each node |
| `ft_lstmap`       | Creates a new list by applying a function to each node   |

---

## ⚙️ Instructions

```bash
# Compile the mandatory part
make

# Compile including bonus (linked list) functions
make bonus

# Cleanup
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # full recompilation
```

To use **libft** in another project:

```c
#include "libft.h"
```

```bash
cc main.c -L. -lft -o my_program
```

---

_molasz-a · 42 Barcelona_
