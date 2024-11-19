# Born2beRoot

![Static Badge](https://img.shields.io/badge/PASS-125%2F125-0?style=flat-square&logo=42&logoColor=%23FFFFFFF&logoSize=auto&labelColor=000000&color=green)[ ![Language](https://img.shields.io/badge/Language-SHELL-blue.svg?style=flat-square)](https://en.wikipedia.org/wiki/C_(programming_language)) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

This project aims to introduce you to the fascinating world of virtualization. You will create your first machine in VirtualBox under specific instructions. Then, at the end of this project, you will be able to set up your own operating system while implementing strict rules.

## Table of contents

* [Introduction](#introduction)
* [Installation Requirements](#installation-requirements)
* [Project Setup](#project-setup)
* [Configuration Steps](#configuration-steps)
* [Monitoring Script](#monitoring-script)
* [Evaluation Points](#evaluation-points)
* [Contributing](#contributing)
* [License](#license)

## Introduction

Born2beRoot is a system administration project that focuses on creating and configuring a Virtual Machine following strict rules. This project teaches the basics of system administration, including:

- Setting up a Virtual Machine
- Implementing password policies
- Setting up partitions with LVM
- Configuring SSH and UFW
- Setting up sudo with strict rules

## Installation Requirements

- Oracle VirtualBox (or UTM for Apple Silicon Macs)
- Debian or Rocky Linux ISO
- Minimum 8GB of free disk space
- At least 1GB RAM for the Virtual Machine

## Project Setup

1. Download and install VirtualBox
2. Create a new Virtual Machine with the following specifications:
   - Type: Linux
   - Version: Debian 64-bit
   - Memory size: 1024MB
   - Create a virtual hard disk (8GB minimum)

## Configuration Steps

This project requires specific configurations including:

- Setting up encrypted partitions using LVM
- Implementing strong password policy
- Installing and configuring sudo
- Setting up UFW firewall
- Configuring SSH service
- Creating user groups and implementing specific rules

## Monitoring Script

A monitoring script must be created that displays specific system information every 10 minutes:

- Architecture and kernel version
- Physical and virtual processors
- Memory usage
- Disk usage
- CPU load
- Last reboot
- LVM status
- Active connections
- User count
- Network and IP information
- Number of sudo commands executed

## Evaluation Points

Key aspects that will be evaluated:

- Correct OS installation and configuration
- Proper implementation of password policies
- Correct sudo configuration
- UFW and SSH setup
- Functional monitoring script
- Understanding of implemented rules and commands

For detailed setup instructions and configuration guides, refer to the project PDF in the intranet.

## Contributing

Contributions are not expected as this is an educational project. Feel free to fork and adapt for learning purposes.

## License

This project is part of 42 School curriculum. Check your school's guidelines for usage and redistribution.
