# Makefile
## Overview

This repository contains solutions to various tasks related to Makefiles as part of the ALX Low-Level Programming curriculum. Each task has specific requirements and constraints that must be followed to meet the learning objectives.

## Getting Started

To compile and run the programs in this repository, you need to have the following environment set up:

- Operating System: Ubuntu 20.04 LTS
- Compiler: GCC 9.3.0
- Make Utility: GNU Make 4.2.1

Ensure that you have the required software installed before proceeding.

## Usage

Each task is associated with a specific Makefile, which defines the rules for building and managing the project. To compile the programs, follow these steps:

1. Navigate to the directory of the task you want to compile.
2. Run the `make` command with the appropriate Makefile.
3. Execute the generated executable to test the program.

## Task Descriptions

### Task 0: Basic Makefile

- **Executable Name:** school
- **Rules:** all
- **Description:** Create a basic Makefile with a single rule to build the executable.

### Task 1: Makefile with Compiler and Source Files

- **Executable Name:** school
- **Rules:** all
- **Variables:** CC, SRC
- **Description:** Enhance the Makefile to specify the compiler and source files.

### Task 2: Makefile with Object Files

- **Executable Name:** school
- **Rules:** all
- **Variables:** CC, SRC, OBJ, NAME
- **Description:** Add support for generating object files without listing them explicitly.

### Task 3: Makefile with Cleaning Rules

- **Executable Name:** school
- **Rules:** all, clean, oclean, fclean, re
- **Variables:** CC, SRC, OBJ, NAME, RM
- **Description:** Implement cleaning rules to remove temporary files and the executable.

### Task 4: Complete Makefile with Compiler Flags

- **Executable Name:** school
- **Rules:** all, clean, fclean, oclean, re
- **Variables:** CC, SRC, OBJ, NAME, RM, CFLAGS
- **Description:** Create a comprehensive Makefile with support for compiler flags.

### Task 5: Island Perimeter (Python Script)

- **File Name:** 5-island_perimeter.py
- **Description:** Implement a Python function to calculate the perimeter of an island defined by a grid.

### Task 6: Advanced Makefile

- **Executable Name:** school
- **Rules:** all, clean, fclean, oclean, re
- **Variables:** CC, SRC, OBJ, NAME, RM, CFLAGS
- **Constraints:** Follow specific guidelines regarding variable usage and cleaning rules.
