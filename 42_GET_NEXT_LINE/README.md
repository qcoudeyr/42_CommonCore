# Get_Next_Line

![Static Badge](https://img.shields.io/badge/PASS-125%2F125-0?style=flat-square&logo=42&logoColor=FFFFFFF&logoSize=auto&labelColor=000000&color=green) [ ![Language](https://img.shields.io/badge/Language-C-blue.svg?style=flat-square)](https://en.wikipedia.org/wiki/C_(programming_language)) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

A C function that reads a file line by line. This project is part of the 42 school curriculum.

## Table of contents

* [Introduction](#introduction)
* [Function Prototype](#function-prototype)
* [Installation](#installation)
* [Usage](#usage)
* [Bonus Part](#bonus-part)
* [Testing](#testing)
* [Contributing](#contributing)
* [License](#license)

## Introduction

get_next_line is a programming function that reads a line from a file descriptor. When called in a loop, the function allows reading the text file pointed to by the file descriptor, one line at a time.

## Function Prototype

```c
char *get_next_line(int fd);
```

## Installation

Clone the repository:

```sh
git clone https://github.com/yourusername/get_next_line.git
cd get_next_line
```

## Usage

Include the header in your C file:

```c
#include "get_next_line.h"
```

Example usage:

```c
int fd = open("example.txt", O_RDONLY);
char *line;

while ((line = get_next_line(fd)) != NULL)
{
    printf("%s", line);
    free(line);
}
close(fd);
```

## Bonus Part

The bonus part includes handling multiple file descriptors simultaneously:

- Can manage multiple file descriptors at the same time
- Uses only one static variable
- Same basic requirements as the mandatory part

## Testing

To test the function:

1. Compile with your preferred buffer size:

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 *.c
```

2. Create test files with various content
3. Use the provided test main to verify functionality

For testing edge cases, try:

- Empty files
- Files with/without newlines
- Very large lines
- Multiple file descriptors

## Contributing

Contributions are not expected as this is an educational project. Feel free to fork and adapt for learning purposes.

## License

This project is part of 42 School curriculum. Check your school's guidelines for usage and redistribution.
