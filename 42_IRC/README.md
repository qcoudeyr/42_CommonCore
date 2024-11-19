# Ft_irc (Internet Relay Chat Server)

![Static Badge](https://img.shields.io/badge/PASS-125%2F125-0?style=flat-square&logo=42&logoColor=FFFFFFF&logoSize=auto&labelColor=000000&color=green) ![Static Badge](https://img.shields.io/badge/3_Persons-black?style=flat-square&label=Group&labelColor=black&color=blue) [![C++](https://img.shields.io/badge/C++-98-blue.svg?style=flat-square)]() [![TCP/IP](https://img.shields.io/badge/Protocol-TCP/IP-blue.svg?style=flat-square)]() [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

A C++98 implementation of an IRC (Internet Relay Chat) server with multiple client handling capabilities.

## Group

<p align="center">
<a href="https://github.com/RussellParadox"><img src="https://avatars.githubusercontent.com/u/121818957?v=4" title="Gdornic" width="50" height="50"></a>
<a href="https://github.com/BiGZ31"><img src="https://avatars.githubusercontent.com/u/101286697?v=4" title="Lmontgomri" width="50" height="50"></a>
<a href="https://github.com/qcoudeyr"><img src="https://avatars.githubusercontent.com/u/124463277?v=4" title="Qcoudeyr" width="50" height="50"></a>
</p>

## Table of Contents

* [Introduction](#introduction)
* [Prerequisites](#prerequisites)
* [Installation](#installation)
* [Usage](#usage)
* [Features](#features)
* [Supported Commands](#supported-commands)
* [Bonus Features](#bonus-features)
* [Testing](#testing)
* [Known Limitations](#known-limitations-and-limitations)
* [Contributing](#contributing)
* [License](#license)

## Introduction

This project implements an IRC server using C++98, providing real-time text-based communication with multiple client support. The server allows users to connect, authenticate, join channels, and exchange messages.

## Prerequisites

- C++ compiler supporting C++98
- Make
- Non-blocking I/O support
- TCP/IP network capabilities

## Compilation

Compile the project using the provided Makefile:

```sh
make
```

Compilation flags: `-Wall -Wextra -Werror -std=c++98`

## Usage

Run the server with a port and connection password:

```sh
./ircserv <port> <password>
```

Example:

```sh
./ircserv 6667 serverpass
```

## Features

- Multiple client handling
- Non-blocking I/O operations
- TCP/IP communication (IPv4/IPv6)
- User authentication
- Channel management
- Private messaging

## Supported Commands

### User Commands

- Authenticate
- Set nickname
- Set username
- Join channels
- Send private messages

### Operator Commands

- KICK: Eject a client from a channel
- INVITE: Invite a client to a channel
- TOPIC: Change or view channel topic
- MODE: Modify channel settings
  - Invite-only mode
  - Topic restrictions
  - Channel key (password)
  - Operator privileges
  - User limit

## Bonus Features

Optional additional implementations:

- File transfer
- IRC bot

## Testing

Recommended testing method:

```sh
nc 127.0.0.1 6667
```

Use partial command sending to test server robustness.

## Known Limitations and Constraints

- Server does not support server-to-server communication
- No forking allowed
- Single poll() (or equivalent) for I/O operations
- Must use non-blocking file descriptors

## Contributing

This is an educational project. Contributions are not expected, but learning and exploration are encouraged.

## License

Project is part of 42 School curriculum. Refer to school guidelines for usage and redistribution.
