# cub3D

![Static Badge](https://img.shields.io/badge/PASS-110%2F125-0?style=flat-square&logo=42&logoColor=%23FFFFFFF&logoSize=auto&labelColor=000000&color=green) [ ![Language](https://img.shields.io/badge/Language-C-blue.svg?style=flat-square)](https://en.wikipedia.org/wiki/C_(programming_language)) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

A 3D game engine using raycasting, inspired by Wolfenstein 3D.

## Table of contents

* [Introduction](#introduction)
* [Installation](#installation)
* [Usage](#usage)
* [Controls](#controls)
* [Map Configuration](#map-configuration)
* [Known issues and limitations](#known-issues-and-limitations)
* [Contributing](#contributing)
* [License](#license)

## Introduction

cub3D is a graphic design project that creates a dynamic 3D perspective inside a maze using raycasting principles. The project is inspired by the groundbreaking game Wolfenstein 3D, which was the first FPS game ever.

## Installation

### Prerequisites

- GCC compiler
- Make
- MinilibX library
- Linux/macOS system

### Compilation

```sh
make
```

## Usage

To start the game, run the following command:

```sh
./cub3D [map_file]
```

## Controls

- `W` `A` `S` `D`: Move forward, left, backward, right
- `Left Arrow` `Right Arrow`: Rotate view
- `ESC`: Exit the game

## Map Configuration

The map file should be a `.cub` file containing the map layout. The map should be surrounded by walls ('1') and contain the following elements:

- `0`: Empty space
- `1`: Wall
- `N`, `S`, `E`, `W`: Player's starting position and orientation

## Known issues and limitations

- Limited to small map sizes due to performance constraints
- No support for textures or sprites
- Basic collision detection

## Contributing

Contributions are not expected as this is an educational project. Feel free to fork and adapt for learning purposes.

## License

This project is part of 42 School curriculum. Check your school's guidelines for usage and redistribution.
