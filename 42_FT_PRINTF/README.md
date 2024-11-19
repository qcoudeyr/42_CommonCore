# Ft_printf

![Static Badge](https://img.shields.io/badge/PASS-100%2F125-0?style=flat-square&logo=42&logoColor=FFFFFFF&logoSize=auto&labelColor=000000&color=green) [ ![Language](https://img.shields.io/badge/Language-C-blue.svg?style=flat-square)](https://en.wikipedia.org/wiki/C_(programming_language)) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

A custom implementation of the printf function from the C standard library.

## Table of contents

* [Introduction](#introduction)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Supported Conversions](#supported-conversions)
* [Testing](#testing)
* [Contributing](#contributing)
* [License](#license)

## Introduction

This project is part of the 42 school curriculum. The goal is to recreate the printf function from the C standard library, learning about variadic functions, string formatting, and memory management in C.

## Requirements

- gcc compiler
- Make
- C standard library

## Installation

Clone the repository and compile the library:

```
git clone https://github.com/yourusername/ft_printf.git
cd ft_printf
make
```

## Usage

Include the header file in your C program and use the `ft_printf` function as you would use `printf`:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```

## Supported Conversions

- %c: character
- %s: string
- %p: pointer
- %d, %i: integer
- %u: unsigned integer
- %x, %X: hexadecimal

## Testing

To run the tests, use the following command:

```
make test
```

## Contributing

Contributions are not expected as this is an educational project. Feel free to fork and adapt for learning purposes.

## License

This project is part of 42 School curriculum. Check your school's guidelines for usage and redistribution.
