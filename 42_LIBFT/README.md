# Libft: Your very first own library

![Static Badge](https://img.shields.io/badge/PASS-125%2F125-0?style=flat-square&logo=42&logoColor=%23FFFFFFF&logoSize=auto&labelColor=000000&color=green) [ ![Language](https://img.shields.io/badge/Language-C-blue.svg?style=flat-square)](https://en.wikipedia.org/wiki/C_(programming_language)) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

Libft is a custom implementation of the standard C library functions. This project is part of the 42 curriculum and aims to help students understand the inner workings of common C functions by re-implementing them from scratch.

## Table of contents

* [Introduction](#introduction)
* [Installation](#installation)
* [Quick start](#quick-start)
* [Usage](#usage)
* [Known issues and limitations](#known-issues-and-limitations)
* [Getting help](#getting-help)
* [Contributing](#contributing)
* [License](#license)
* [Acknowledgments](#acknowledgments)

## Introduction

Libft is a project that involves creating a library of standard C functions. The goal is to re-implement functions from the standard C library, as well as some additional utility functions that are commonly used in C programming. This project helps students at 42 understand how these functions work under the hood and gain a deeper understanding of C programming.

## Installation

To use Libft, you need to have a C compiler installed on your system. The following instructions will guide you through the installation process:

1. Clone the repository:

   ```sh
   git clone https://github.com/yourusername/libft.git
   cd libft
   ```
2. Compile the library:

   ```sh
   make
   ```
3. The compiled library `libft.a` will be created in the root directory of the project.

## Quick start

To use Libft in your project, follow these steps:

1. Include the header file in your source code:

   ```c
   #include "libft.h"
   ```
2. Link the compiled library when compiling your project:

   ```sh
   gcc -o your_program your_program.c -L. -lft
   ```

## Usage

Libft provides a variety of functions that can be used in your C programs. Here are some examples:

### Basic operation

1. String manipulation functions:

   ```c
   char *str = ft_strdup("Hello, world!");
   ft_strcpy(dest, src);
   ```
2. Memory management functions:

   ```c
   void *mem = ft_memalloc(size);
   ft_memdel(&mem);
   ```
3. List manipulation functions:

   ```c
   t_list *list = ft_lstnew(content, content_size);
   ft_lstadd(&list, new);
   ```

### More options

Libft also includes additional utility functions such as:

- `ft_atoi`
- `ft_isalpha`
- `ft_strsplit`
- `ft_putchar_fd`
- And many more...

Refer to the header file `libft.h` for a complete list of available functions and their descriptions.

## Known issues and limitations

None are known at this time.

## Getting help

If you encounter any issues or have questions, you can open an issue on the [GitHub repository](https://github.com/yourusername/libft/issues).

## Contributing

Contributions are welcome! Please read the [CONTRIBUTING.md](CONTRIBUTING.md) file for guidelines on how to contribute to this project.

## License

This project is licensed under the terms of the [Creative Commons 1.0 Universal license (CC0)](https://creativecommons.org/publicdomain/zero/1.0/).

## Acknowledgments

This project is part of the 42 curriculum. Special thanks to the 42 community for their support and resources.
