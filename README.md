# 42ad

My C projects from the 42 Abu Dhabi Common Core: a `printf` re-implementation and `get_next_line`.

![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=black)
![Make](https://img.shields.io/badge/Make-427819?style=flat-square&logo=gnu&logoColor=white)

Each project follows its 42 curriculum subject and uses the standard 42 file header.

## Contents

| Path | Project | What is in this repository |
|---|---|---|
| `ft_printf copy/` | ft_printf | Source files, header and Makefile |
| `get_next_line copy/` | get_next_line | Mandatory and bonus source files |
| `libft copy` | libft | A submodule pointer with no `.gitmodules` entry, so no files are included |
| `not us` | - | A submodule pointer with no `.gitmodules` entry, so no files are included |

## ft_printf

A re-implementation of `printf(3)`, built into the static library `libftprintf.a`.

- Conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` and `%%`
- Returns the number of characters written, or `-1` if a write fails
- Prints `(null)` for a NULL string and `0x0` for a NULL pointer
- No flags, field width or precision (the bonus part is not implemented)
- `test.c` is a scratch file that calls the standard `printf`

```bash
cd "ft_printf copy"
make                                         # builds libftprintf.a (also: clean, fclean, re)
cc -Wall -Wextra -Werror main.c libftprintf.a   # main.c is your own test program
```

## get_next_line

`char *get_next_line(int fd)` returns the next line from a file descriptor, including the trailing newline when there is one, or `NULL` at end of file or on error.

- `BUFFER_SIZE` defaults to 42 and can be set at compile time with `-D BUFFER_SIZE=n`
- The bonus version keeps a separate buffer for each file descriptor (up to `FD_MAX`, default 10240), so several descriptors can be read in turn
- There is no Makefile; compile the files together with your own `main.c`

```bash
cd "get_next_line copy"
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c main.c   # bonus
```

Folder names end in ` copy` as committed, so quote them in the shell.

---

Built by [Awaiz Ahmed](https://github.com/4waiz)
