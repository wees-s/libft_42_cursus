markdown
# 💻 libft – 42 Cursus

The **libft** is the first mandatory project of the Common Core at [42 School](https://42.fr/en/homepage/). In this project, we are required to recreate a set of standard C library functions from scratch — without relying on the actual libc.

This challenge forces students to understand low-level logic, memory manipulation, and pointer handling at the core of C programming.

---

##  Implemented Functions & Logic

**Functions:**  

`ft_isalnum` / `ft_isalpha` / `ft_isascii` / `ft_isdigit` / `ft_isprint`

Each function returns `1` (true) or `0` (false) depending on the character classification using ASCII values.

#### Example – `ft_isalnum(int c)`
```c
return ((c >= 'A' && c <= 'Z')
     || (c >= 'a' && c <= 'z')
     || (c >= '0' && c <= '9'));
````

We check whether the character falls into the ASCII range of uppercase, lowercase, or numeric digits. If so, return 1; otherwise, return 0.

---

**Functions:**
`ft_toupper` / `ft_tolower`

These functions convert characters to uppercase or lowercase by manipulating their ASCII values.

#### Example – `ft_tolower(int ch)`

```c
if (ch >= 65 && ch <= 90)
    return (ch + 32);
return (ch);
```

If the character is between `'A'` (65) and `'Z'` (90), it converts to lowercase by adding 32 — a direct ASCII offset.

---

**Functions:**
`ft_memchr` `ft_memmove` `ft_memset` `ft_memcpy` `ft_memcmp`

Memory: Find, change, copy, compare, set...

#### Example - `ft_memchr(const void *s, int c, size_t n)`

```c
void *ft_memchr(const void *s, int c, size_t n);
```

#### Implementation logic:

```c
unsigned char cc = (unsigned char)c;
unsigned char *ss = (unsigned char *)s;
size_t i = 0;

while (i < n)
{
    if (ss[i] == cc)
        return ((void *)&ss[i]);
    i++;
}
return (NULL);
```

Instead of depending on string types, `memchr` works with `void*` and casts everything to `unsigned char` to compare raw bytes, making it suitable for binary data.

---
**Functions:**
`ft_strchr` `ft_strdup` `ft_striteri` `ft_strjoin` `ft_split` `ft_strlcat` `ft_strlcpy` `ft_strlen` `ft_strmapi` `ft_strncmp` `ft_strnstr` `ft_strrchr` `ft_strtrim` `ft_substr` `ft_atoi`

#### Example - `**ft_split(char const *s, char c)`

```c
**ft_split(char const *s, char c)
```

#### Implementation logic:

```c
static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		flag;

	flag = 1;
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c) || (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0')))
			j++;
		i++;
		while (flag == 1 && s[i] != '\0')
		{
			if (s[i] == c)
				flag = 0;
			i++;
		}
		if (flag == 0 && s[i] != '\0')
			flag = 1;
	}
	if (s[i] == c)
		j = j - 1;
	return (j);
}

static char	*word(size_t first, size_t last, char const *s)
{
	char	*string;
	size_t	size;
	size_t	i;

	i = 0;
	size = last - first;
	string = (char *)malloc(size * (sizeof(char)) + 1);
	if (!string)
		return (NULL);
	while (first != last)
	{
		string[i] = s[first];
		first++;
		i++;
	}
	string[i] = '\0';
	return (string);
}

static	void	*free_all(char **s, size_t size)
{
	while (size > 0)
	{
		free(s[size]);
		size--;
	}
	free(s);
	return (NULL);
}

static char	**ft_fill_word(const char *s, char c, char **res, size_t size)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == '\0' && s[i - 1] == c)
			break ;
		res[k] = word(j, i, s);
		if (!(*res))
			return (free_all(res, size));
		i++;
		k++;
	}
	res[k] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	size;

	size = count_words(s, c);
	res = (char **)malloc((size + 1) * sizeof(char *));
	if (!res)
		return ((char **)ft_strdup(""));
	res = ft_fill_word(s, c, res, size);
	return (res);
}
```
---
**Functions:**
`ft_bzero` `ft_calloc`

#### Example - `*ft_calloc(size_t count, size_t size)`

```c
*ft_calloc(size_t count, size_t size)
```

#### Implementation logic:

```c
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp_mem;
	size_t			i;

	temp_mem = malloc(count * size);
	i = 0;
	if (!temp_mem)
		return (NULL);
	while (i < count * size)
	{
		temp_mem[i] = 0;
		i++;
	}
	return (temp_mem);
}
```
---

**Functions:**
`ft_putchar_fd` `ft_putendl_fd` `ft_putnbr_fd` `ft_putstr_fd`

#### Example - `ft_putchar_fd(char c, int fd)`

```c
ft_putchar_fd(char c, int fd)
```

#### Implementation logic:

```c
void	ft_putchar_fd(char c, int fd)
{
	if (!fd || fd < 0)
		fd = 1;
	write(fd, &c, 1);
}
```
---
##  Why This Matters

Rewriting libc functions manually may seem redundant at first glance. But the point is to deeply understand how low-level operations work:

* No shortcuts
* No black-box libraries
* No assumptions

Just you, the compiler, and raw logic.

You’ll learn:

* Memory operations
* ASCII-based conditionals
* Function prototyping
* Code hygiene
* Defensive programming

---

##  How to Compile & Use

Compile the library with:

```bash
make
```

Then include it in your project:

```c
#include "libft.h"
```

Link the compiled archive (`libft.a`) to your program during compilation:

```bash
gcc main.c -L. -lft
```

---

##  Project Structure

```
libft/
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_memchr.c
├── ft_tolower.c
├── ft_toupper.c
├── libft.h
├── Makefile
└── ...
```

---

##  Author

**Wesley Alexandre**
Cadet at 42 São Paulo

---

##  License

This project is part of the 42 School academic program.
Use it as a learning reference — don’t copy it blindly. Learn by doing. That’s the 42 way.

```
