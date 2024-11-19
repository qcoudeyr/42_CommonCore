# Philosophers

[![Static Badge](https://img.shields.io/badge/PASS-100%2F125-black?style=flat-square&logo=42&logoColor=FFFFFFF&logoSize=auto&labelColor=000000&color=green) ![Language](https://img.shields.io/badge/Language-C-green?style=flat-square)](https://file+.vscode-resource.vscode-cdn.net/home/someonecautious/Documents/project/42/42_PHILOSOPHER/)

A C programming project exploring threading, mutexes, and process synchronization using a dining philosophers simulation.

## Table of contents

* [Introduction](#introduction)
* [Installation](#installation)
* [Quick start](#quick-start)
* [Usage](#usage)
* [Known issues and limitations](#known-issues-and-limitations)
* [Contributing](#contributing)
* [License](#license)

## Introduction

The Philosophers project is an educational exercise in concurrent programming, focusing on:

- Creating and managing threads
- Understanding mutex synchronization
- Preventing deadlocks and race conditions
- Simulating the classic dining philosophers problem

The project involves creating a simulation where philosophers alternate between eating, thinking, and sleeping, with careful management of shared resources (forks).

## Installation

### Prerequisites

- C compiler (gcc/cc)
- Make
- POSIX threads library (pthread)

### Setup

1. Clone the repository
2. Navigate to the project directory
3. Compile the project using the provided Makefile

```sh
git clone https://github.com/yourusername/philosophers.git
cd philosophers
make
```

## Quick start

Run the program with the following arguments:

```sh
./philo <number_of_philosophers> <time_to_die> <time_to_eat> <time_to_sleep> [number_of_times_each_philosopher_must_eat]
```

Example:

```sh
./philo 4 800 200 200 7
```

### Argument Breakdown

- `number_of_philosophers`: Number of philosophers and forks
- `time_to_die`: Milliseconds before a philosopher dies of starvation
- `time_to_eat`: Milliseconds a philosopher spends eating
- `time_to_sleep`: Milliseconds a philosopher spends sleeping
- `number_of_times_each_philosopher_must_eat`: Optional stopping condition

## Usage

The program simulates philosophers at a round table with the following rules:

- Philosophers alternate between eating, thinking, and sleeping
- Each philosopher needs two forks to eat
- Philosophers die if they don't eat within `time_to_die` milliseconds

The simulation logs state changes for each philosopher, including:

- Taking forks
- Eating
- Sleeping
- Thinking
- Dying

## Known issues and limitations

- No global variables allowed
- Strict memory management required
- Must prevent data races
- Simulation stops when a philosopher dies or meets eating requirements

## Contributing

Contributions are welcome! Please follow these guidelines:

1. Fork the repository
2. Create a new branch for your feature
3. Ensure code follows the project's norm
4. Write tests for new functionality
5. Submit a pull request

Key contribution areas:

- Bug fixes
- Performance improvements
- Additional simulation features

Please read the project's coding standards and ensure:

- Code is written in C
- Follows the provided norm
- No memory leaks
- Proper thread and mutex management

## Contributing

This is an educational project. Contributions are not expected, but learning and exploration are encouraged.

## License

Project is part of 42 School curriculum. Refer to school guidelines for usage and redistribution.

## Acknowledgments

This project is inspired by the classic dining philosophers problem, a fundamental concurrency challenge in computer science, illustrating the complexities of resource allocation and synchronization.
