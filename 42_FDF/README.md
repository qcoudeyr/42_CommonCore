# FDF (Fil De Fer) - 3D Wireframe Renderer

![Static Badge](https://img.shields.io/badge/PASS-110%2F125-0?style=flat-square&logo=42&logoColor=%23FFFFFFF&logoSize=auto&labelColor=000000&color=green) [ ![Language](https://img.shields.io/badge/Language-C-blue.svg?style=flat-square)](https://en.wikipedia.org/wiki/C_(programming_language)) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

A simple 3D wireframe renderer that reads a height map and displays it as a 3D model. This project is part of the 42 School curriculum, focusing on basic computer graphics concepts.

## Table of contents

* [Introduction](#introduction)
* [Installation](#installation)
* [Usage](#usage)
* [Controls](#controls)
* [File Format](#file-format)
* [Contributing](#contributing)
* [License](#license)

## Introduction

FDF (Fil De Fer or Wireframe) is a program that creates a simplified 3D graphic representation of a relief landscape. It takes a file containing coordinates and their heights, then renders them as a wireframe model using the MinilibX library.

## Installation

Prerequisites:

- GCC compiler
- Make
- MinilibX library
- X11 development files

To compile the program:

```sh
make
```

## Usage

To run the program, use the following command:

```sh
./fdf [path_to_map_file]
```

## Controls

- `W`, `A`, `S`, `D`: Move the model
- `+`, `-`: Zoom in/out
- Arrow keys: Rotate the model
- `ESC`: Exit the program

## File Format

The input file should be a simple text file containing rows of integers. Each integer represents the height at that point in the grid. For example:

```
0  0  0  0  0
0  1  1  1  0
0  1  2  1  0
0  1  1  1  0
0  0  0  0  0
```

## Contributing

Contributions are not expected as this is an educational project. Feel free to fork and adapt for learning purposes.

## License

This project is part of 42 School curriculum. Check your school's guidelines for usage and redistribution.
