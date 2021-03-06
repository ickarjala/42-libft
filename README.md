# Libft
### Custom C library to replace some standard libc functions

**NOTE:** use the old version for now, this version is unstable and will not be liked by Moulinette.

This was an introductory project for [Hive Helsinki](https://www.hive.fi/en/),
the Finnish branch of the [42 Coding School](https://42.fr/en/homepage/) network.

The idea was to re-code from scratch the functionality of a bunch of the standard libc functions, to learn to code in C as well as
have a base library which to build upon as we are prohibited from using most built-in standard library functions in our projects.

The version tagged as [old](https://github.com/ickarjala/42-libft/tree/old) is the first state of the project to pass the evaluations.

The functions include:

* String manipulation
* Memory setting, clearing
* Array operations
* Comparisons, iteration

With bonuses regarding linked lists and custom functions.
Find details with the respective subdirectories.

* _Part 1_ (Mandatory)
* _Part 2_ (Mandatory)
* _Bonus_
* _Extra_ (Custom functions)

### (NOTE: I am in the process of cleaning up and re-organizing this repository, some info may not be up to date.)

## Installation
``cd`` into the root folder and ``make`` with the appropriate rules to compile libft, then link it with your own programs.
See Makefile for further details.

The supported targets are:\
``all`` : standard deploy build\
``so`` : dynamic library\
``debug``,``db`` : build with debug symbols, additional -W flags and fsanitize\
``clean`` : remove object files\
``fclean`` : remove objects and binary\
``re`` : full rebuild

Plus a utility command for running Norminette on the project:\
``norme``

There is also a separate Makefile in eval_tests/ for compiling the library with a tester and some utilities,
but it is also very much WIP.

## TODO:
* Makefile should be able to build .so despite .a existing
* add PRE_BUILD_MESSAGE for make targets
* fix Makefile colors
* write a script to automate building a moulinette-compliant directory with only needed files
