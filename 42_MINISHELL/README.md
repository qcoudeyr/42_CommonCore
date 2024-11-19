# Minishell

![Static Badge](https://img.shields.io/badge/PASS-115%2F125-black?style=flat-square&logo=42&logoColor=FFFFFFF&logoSize=auto&labelColor=000000&color=green)[ ![Language](https://img.shields.io/badge/Language-C-blue.svg?style=flat-square)](https://en.wikipedia.org/wiki/C_(programming_language)) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

A lightweight, bash-like shell implementation in C, designed to provide an interactive command-line interface.

## Table of Contents

* [Introduction](#introduction)
* [Prerequisites](#prerequisites)
* [Installation](#installation)
* [Usage](#usage)
* [Features](#features)
* [Built-in Commands](#built-in-commands)
* [Signal Handling](#signal-handling)
* [Bonus Features](#bonus-features)
* [Known Limitations](#known-limitations)
* [Contributing](#contributing)
* [License](#license)

## Introduction

Minishell is a simplified shell implementation that allows users to interact with the operating system through a command-line interface. It provides basic shell functionality while offering insights into process management and file descriptors.

## Prerequisites

- GCC or Clang compiler
- Make
- Readline library
- POSIX-compliant operating system

## Installation

Compile the project using the provided Makefile:

```sh
make
```

Compilation flags: `-Wall -Wextra -Werror`

## Usage

Run the shell:

```sh
./minishell
```

## Features

- Interactive prompt
- Command history
- Executable search (PATH, relative, and absolute paths)
- Input/Output Redirections
  - `<`: Redirect input
  - `>`: Redirect output
  - `<<`: Heredoc input
  - `>>`: Append output
- Pipes (`|`) support
- Environment variable expansion
- Quote handling (single and double)
- Signal management

## Built-in Commands

- `echo` (with `-n` option)
- `cd` (relative and absolute paths)
- `pwd`
- `export`
- `unset`
- `env`
- `exit`

## Signal Handling

Interactive mode behavior:

- `Ctrl-C`: Display new prompt
- `Ctrl-D`: Exit shell
- `Ctrl-\`: No action

## Bonus Features

Optional advanced features:

- Logical operators `&&` and `||`
- (Not Supported)Wildcard `*` support for current directory

## Known Limitations

- Uses readline() which may cause memory leaks
- Limited to specified shell functionalities
- Follows bash behavior for reference
- Due to wrong understanding of the subject, it doesn't perfectly process the command as described in the [GNU SHELL](https://www.gnu.org/software/bash/manual/bash.html)

## Memory Management

- All heap-allocated memory must be properly freed
- No memory leaks allowed in custom code

## Contributing

This is an educational project. Contributions are not expected, but learning and exploration are encouraged.

## Reference

When in doubt about implementation details, bash behavior serves as the reference standard.
Here some help : [GNU SHELL](https://www.gnu.org/software/bash/manual/bash.html)

## License

Project is part of 42 School curriculum. Refer to school guidelines for usage and redistribution.

**Note**: The project focuses on creating a functional shell that demonstrates understanding of system programming concepts.
