````markdown
# 💻 libft – 42 Cursus

The **libft** is the first mandatory project of the Common Core at [42 School](https://42.fr/en/homepage/). In this project, we are required to recreate a set of standard C library functions from scratch — without relying on the actual libc.

This challenge forces students to understand low-level logic, memory manipulation, and pointer handling at the core of C programming.

---

## 📚 Implemented Functions & Logic

### 🔹 Character Classification

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

### 🔹 Case Conversion

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

### 🔹 Memory Search

**Function:**
`ft_memchr`

Searches the first `n` bytes of memory area `s` for the byte `c`.

#### Prototype:

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

## 🧠 Why This Matters

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

## 🛠 How to Compile & Use

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

## 🗂 Project Structure

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

## ✍️ Author

**Wesley Alexandre**
Pisciner at 42 São Paulo

---

## 📜 License

This project is part of the 42 School academic program.
Use it as a learning reference — don’t copy it blindly. Learn by doing. That’s the 42 way.

```
