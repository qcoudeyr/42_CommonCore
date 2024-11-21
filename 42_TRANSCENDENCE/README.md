# Transcendence

![Static Badge](https://img.shields.io/badge/PASS-125%2F125-black?style=flat-square&logo=42&logoColor=FFFFFFF&logoSize=auto&labelColor=000000&color=green) ![Static Badge](https://img.shields.io/badge/3_Persons-black?style=flat-square&label=Group&labelColor=black&color=blue) [![License](https://img.shields.io/badge/License-42-blue.svg?style=flat-square)](https://www.42.fr/)

A real-time multiplayer Pong game web application with user authentication, chat features, and a matchmaking system.

## Group

<p align="center">
<a href="https://github.com/RussellParadox"><img src="https://avatars.githubusercontent.com/u/121818957?v=4" title="Gdornic" width="50" height="50"></a>
<a href="https://github.com/BiGZ31"><img src="https://avatars.githubusercontent.com/u/101286697?v=4" title="Lmontgomri" width="50" height="50"></a>
<a href="https://github.com/qcoudeyr"><img src="https://avatars.githubusercontent.com/u/124463277?v=4" title="Qcoudeyr" width="50" height="50"></a>
</p>

## Table of contents

* [Introduction](#introduction)
* [Installation](#installation)
* [Quick start](#quick-start)
* [Usage](#usage)
* [Features](#features)
* [Getting help](#getting-help)
* [Contributing](#contributing)
* [License](#license)

## Introduction

42_TRANSCENDENCE is the final project of the 42 common core, implementing a real-time multiplayer Pong game. The project features user authentication, a chat system, and live gameplay using modern web technologies.

## Technologies Used

<p align="center">
<a href="https://developer.mozilla.org/en-US/docs/Web/JavaScript" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/javascript-colored.svg" width="36" height="36" alt="JavaScript" /></a><a href="https://www.python.org/" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/python-colored.svg" width="36" height="36" alt="Python" /></a><a href="https://www.typescriptlang.org/" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/typescript-colored.svg" width="36" height="36" alt="TypeScript" /></a><a href="https://git-scm.com/" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/git-colored.svg" width="36" height="36" alt="Git" /></a><a href="https://www.gnu.org/software/bash/" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/gnubash.svg" width="36" height="36" alt="GNU Bash" /></a><a href="https://developer.mozilla.org/en-US/docs/Glossary/HTML5" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/html5-colored.svg" width="36" height="36" alt="HTML5" /></a><a href="https://www.w3.org/TR/CSS/#css" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/css3-colored.svg" width="36" height="36" alt="CSS3" /></a><a href="https://www.postgresql.org/" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/postgresql-colored.svg" width="36" height="36" alt="PostgreSQL" /></a><a href="https://www.djangoproject.com/" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/django-colored.svg" width="36" height="36" alt="Django" /></a><a href="https://www.docker.com/" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/docker-colored.svg" width="36" height="36" alt="Docker" /></a>
</p>
<p align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/Grafana-black?style=flat-square&logo=grafana&logoColor=%23F46800&color=black&link=">
<img alt="Static Badge" src="https://img.shields.io/badge/Prometheus-black?style=flat-square&logo=prometheus&logoColor=%23E6522C&color=black&link=">
<img alt="Static Badge" src="https://img.shields.io/badge/Vault-black?style=flat-square&logo=vault&logoColor=%23FFEC6E&color=black&link=">
<img alt="Static Badge" src="https://img.shields.io/badge/ELK_Stack-black?style=flat-square&logo=elastic&logoColor=white&labelColor=black&color=black&link=">
<img alt="Static Badge" src="https://img.shields.io/badge/Redis-black?style=flat-square&logo=redis&logoColor=%23FF4438&color=black&link=">
<img alt="Static Badge" src="https://img.shields.io/badge/Nginx-black?style=flat-square&logo=nginx&logoColor=%23009639&color=black&link=">
<img alt="Static Badge" src="https://img.shields.io/badge/Portainer-black?style=flat-square&logo=portainer&logoColor=%2313BEF9&color=black&link=">
</p>

## Video Showcase

[tr_fullvideo.webm](https://github.com/user-attachments/assets/516f7878-a5fd-4431-8c7b-287e58d4c7e2)

## Installation

Prerequisites:

- Docker and Docker Compose
- Node.js (v16+)
- PostgreSQL

```bash
# Clone the repository
git clone https://github.com/yourusername/42_TRANSCENDENCE.git
cd 42_TRANSCENDENCE

# Build and run with Docker
# NEED ROOT !
make
```

## Quick start

1. Visit `https://pong-br.com/` in your browser
2. Create an account or Login
3. Create or join a game room
4. Wait until some join the room
5. Start playing!

## Usage

### User Authentication

- Login use JWT token
- Create and customize your profile
- Add friends and invite them to play

### Game Features

- Play Pong against other players
- View live game statistics
- Track your match history
- Global leaderboard

### Chat System

- Create chat channels
- Direct messaging

## Features

- Real-time multiplayer Pong game
- Tournement with 3 to 8 players
- Chat system with public and private channels
- Friend system and user profiles
- Match history and statistics
- Usage of ThreeJs

## Getting help

For issues and feature requests, please use the GitHub Issues section of this repository.

## Contributing

This is an educational project. Contributions are not expected, but learning and exploration are encouraged.

## License

This project is part of the 42 school curriculum. Distributed under the 42 School License.
