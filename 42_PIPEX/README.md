# Pipex

[![Static Badge](https://img.shields.io/badge/PASS-115%2F125-black?style=flat-square&logo=42&logoColor=FFFFFFF&logoSize=auto&labelColor=000000&color=green) ![Language](https://img.shields.io/badge/Language-C-blue.svg?style=flat-square)](https://en.wikipedia.org/wiki/C_(programming_language)) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

Pipex is a C project that replicates the behavior of shell pipe operations, allowing you to create a program that mimics the shell command: `< file1 cmd1 | cmd2 > file2`.

## Table of Contents

* [Introduction](#introduction)
* [Installation](#installation)
* [Quick Start](#quick-start)
* [Usage](#usage)
* [Bonus Features](#bonus-features)
* [Known Issues and Limitations](#known-issues-and-limitations)
* [Contributing](#contributing)
* [License](#license)

## Introduction

The Pipex project is designed to help developers understand the intricacies of Unix pipe mechanisms by implementing a program that simulates shell pipe operations. By creating this program, you'll gain deep insights into file descriptors, process creation, and inter-process communication in Unix-like systems.

## Installation

### Prerequisites

- A Unix-like operating system (Linux, macOS)
- GCC compiler
- Make utility
- Basic understanding of C programming

### Compilation

1. Clone the repository
2. Navigate to the project directory
3. Compile the project using the provided Makefile

```bash
git clone <your-repository-url>
cd pipex
make
```

## Quick Start

The Pipex program takes exactly 4 arguments:

- `file1`: Input file
- `cmd1`: First shell command
- `cmd2`: Second shell command
- `file2`: Output file

Example:

```bash
./pipex infile "ls -l" "wc -l" outfile
```

This is equivalent to the shell command:

```bash
< infile ls -l | wc -l > outfile
```

## Usage

### Basic Usage

Execute the program with input file, two commands, and an output file:

```bash
./pipex input_file "first_command" "second_command" output_file
```

### Examples

```bash
./pipex infile "grep a1" "wc -w" outfile
./pipex infile "ls -l" "sort" outfile
```

## Bonus Features

If you implement the bonus part, Pipex supports:

1. Multiple pipes:

```bash
./pipex file1 cmd1 cmd2 cmd3 ... cmdn file2
```

2. Here-document support:

```bash
./pipex here_doc LIMITER cmd cmd1 file
```

**Note:** Bonus features are only evaluated if the mandatory part is perfect.

## Known Issues and Limitations

- Requires proper error handling
- Limited to the specified number of commands
- Dependent on system's command availability

## Contributing

This is an educational project. Contributions are not expected, but learning and exploration are encouraged.

## License

This project is part of the 42 school curriculum. Distributed under the 42 School License.
