simple_shell

The project is the implementation of a simple c shell, often referred to as a command-line interpreter or command processor. The shell is a program that provides a user interface for accessing the operating system's services. It allows users to interact with the operating system by entering commands as text input.

OVERVIEW:
The project cover various aspects of a simple shell implementation, including handling built-in shell commands (such as cd, exit, env), managing memory allocation, handling special characters and logical operations, dealing with environment variables, and creating and manipulating linked lists.

The main file seems to be setting up the shell's main loop, reading user input, and handling the execution of commands. Additionally, there are files for string manipulation, error handling, memory management, and handling various special functionalities of the shell, such as handling comments and logical operators.

The provided source files appear to implement the necessary functionalities for a basic shell, including handling built-in commands, executing external commands, managing environment variables, and manipulating strings and memory.

hsh is an sh-compatible command language interpreter that executes commands read from the standard input or from a file.

USAGE:
To compile the project, we would use the following command:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh


This command compiles all the `.c` files in the directory and generates an executable file named `hsh`. The flags specified (`-Wall`, `-Werror`, `-Wextra`, `-pedantic`, `-std=gnu89`) are used for additional warning and error checking during the compilation process, ensuring that the code adheres to specific standards and best practices.

AUTHORS:
Nwokeohuru chijindu Chibuike, Chukwudalu chinemere Emmanuel.
