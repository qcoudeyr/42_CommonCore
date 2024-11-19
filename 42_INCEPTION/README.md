# Inception

![Static Badge](https://img.shields.io/badge/PASS-125%2F125-0?style=flat-square&logo=42&logoColor=FFFFFFF&logoSize=auto&labelColor=000000&color=green) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

A Docker-based system administration project that sets up a small infrastructure with multiple services using Docker Compose.

## Table of Contents

* [Introduction](#introduction)
* [Prerequisites](#prerequisites)
* [Installation](#installation)
* [Project Structure](#project-structure)
* [Configuration](#configuration)
* [Usage](#usage)
* [Services](#services)
* [Bonus Features](#bonus-features)
* [Known Issues](#known-issues-and-limitations)
* [Contributing](#contributing)
* [License](#license)

## Introduction

This project aims to broaden knowledge of system administration by using Docker. It involves creating a virtualized infrastructure with multiple interconnected services running in separate containers.

## Prerequisites

- Virtual Machine
- Docker
- Docker Compose
- Make

## Installation

1. Clone the repository
2. Navigate to the project directory
3. Configure your `.env` file with required credentials
4. Run `make` to build and start the infrastructure

```sh
git clone <repository-url>
cd inception
make
```

## Project Structure

```
.
├── Makefile
├── srcs/
│   ├── docker-compose.yml
│   ├── .env
│   └── requirements/
│       ├── nginx/
│       ├── wordpress/
│       └── mariadb/
└── secrets/
```

## Configuration

- Domain name must be configured to point to your local IP
- Domain format: `login.42.fr`
- Environment variables stored in `.env`
- Sensitive information stored in `secrets/`

## Usage

Access the WordPress site via `https://login.42.fr`

## Services

- **NGINX**: Webserver with TLSv1.2/1.3
- **WordPress**: Website with php-fpm
- **MariaDB**: Database service

## Bonus Features

Optional services include:

- Redis cache
- FTP server
- Static website
- Adminer
- Custom service

## Known Issues and Limitations

- Must be run on a Virtual Machine
- Requires manual domain configuration
- No pre-built images allowed

## Contributing

Contributions are not expected as this is an educational project. Feel free to fork and adapt for learning purposes.

## License

This project is part of 42 School curriculum. Check your school's guidelines for usage and redistribution.
