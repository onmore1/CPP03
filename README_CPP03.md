# CPP03

Inheritance, from single to diamond.

Part of my C++ modules at [Codam](https://www.codam.nl) (42 Network), written in C++98.

**Concepts:** inheritance, constructor/destructor chaining, multiple inheritance, the diamond problem.

## Exercises

| Folder | Exercise | What it does |
| --- | --- | --- |
| `ex00` | Aaaaand... OPEN! | `ClapTrap` base class with attack, repair and damage mechanics. |
| `ex01` | Serena, my love! | `ScavTrap` derived from `ClapTrap`, with its own stats and special ability. |
| `ex02` | Repetitive work | `FragTrap` derived from `ClapTrap`. |
| `ex03` | Now it's weird! | `DiamondTrap` inheriting from both `ScavTrap` and `FragTrap`. |

## Build and run

Each exercise is self-contained. From the repository root:

```sh
cd ex00
make
./<executable>
```

`make fclean` removes the build output. Code is compiled with `-Wall -Wextra -Werror -std=c++98`.

## All modules

[CPP00](https://github.com/onmore1/CPP00) · [CPP01](https://github.com/onmore1/CPP01) · [CPP02](https://github.com/onmore1/CPP02) · **CPP03** · [CPP04](https://github.com/onmore1/CPP04) · [CPP05](https://github.com/onmore1/CPP05)
