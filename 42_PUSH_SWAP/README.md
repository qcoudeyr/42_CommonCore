# Push_swap

[![Static Badge](https://img.shields.io/badge/PASS-125%2F125-black?style=flat-square&logo=42&logoColor=FFFFFFF&logoSize=auto&labelColor=000000&color=green) ![Language](https://img.shields.io/badge/Language-C-blue.svg?style=flat-square)](https://en.wikipedia.org/wiki/C_(programming_language)) [![Sorting Algorithm](https://img.shields.io/badge/Algorithm-Sorting-green.svg?style=flat-square)](https://en.wikipedia.org/wiki/Sorting_algorithm) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

A sorting algorithm project that challenges you to sort a stack of integers using a limited set of instructions with the lowest possible number of actions.

## Table of Contents

* [Introduction](#introduction)
* [Installation](#installation)
* [Quick Start](#quick-start)
* [Usage](#usage)
* [Project Rules](#project-rules)
* [Bonus Features](#bonus-features)
* [Benchmarks](#benchmarks)
* [Known Issues and Limitations](#known-issues-and-limitations)
* [Contributing](#contributing)
* [License](#license)

## Introduction

Push_swap is a challenging algorithm project that teaches developers about sorting algorithms, complexity, and efficient data manipulation. The goal is to sort a stack of integers using a limited set of predefined instructions while minimizing the total number of operations.

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
cd push_swap
make
```

## Quick Start

The Push_swap program takes a list of integers as arguments and outputs the smallest list of instructions to sort the stack.

Example:

```bash
./push_swap 2 1 3 6 5 8
```

## Usage

### Sorting Integers

Execute the program with a list of integers:

```bash
./push_swap 4 67 3 87 23
```

### Checking Sort Instructions

Use the provided checker to verify the sorting instructions:

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
```

## Project Rules

### Stack Manipulation Instructions

- `sa`: Swap the first 2 elements of stack a
- `sb`: Swap the first 2 elements of stack b
- `ss`: Swap first 2 elements of both stacks
- `pa`: Push the top element from stack b to stack a
- `pb`: Push the top element from stack a to stack b
- `ra`: Rotate stack a upwards
- `rb`: Rotate stack b upwards
- `rr`: Rotate both stacks
- `rra`: Reverse rotate stack a
- `rrb`: Reverse rotate stack b
- `rrr`: Reverse rotate both stacks

## Bonus Features

### Checker Program

A bonus feature allows you to create a checker program that:

- Reads sorting instructions from standard input
- Applies instructions to the initial stack
- Verifies if the stack is correctly sorted

**Note:** Bonus features are only evaluated if the mandatory part is perfect.

## Benchmarks

### Validation Criteria

- Sort 100 random numbers in fewer than 700 operations
- Sort 500 random numbers in fewer than 5500 operations

## Known Issues and Limitations

- Limited to the specified set of stack manipulation instructions
- Performance depends on the chosen sorting algorithm
- Requires careful implementation to minimize operation count

## Contributing

This is an educational project. Contributions are not expected, but learning and exploration are encouraged.

## License

This project is part of the 42 school curriculum. Distributed under the 42 School License.

## Acknowledgments

- 42 School for providing the project specifications
- Algorithm complexity learning opportunities
- Sorting algorithm design challenges
