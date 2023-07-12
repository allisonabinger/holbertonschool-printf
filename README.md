# Holberton C21 //_printf 

The _printf function is a simplified version of the "printf" function in the C standard library. This repository contains all the files necessary to utilize the _printf function.


# printf

**printf** is a variadic function available in the **C** standard library, and is accessible through the header file *stdio.h*. The function prints its output on the screen, formatting the output in various ways. The **printf** function can take multiple arguments to print multiple data types, including but not limited to characters, strings, and integers. 
The syntax for **printf** is as follows:

    int printf(const char *format, ...)

### Functionality

The **printf** function takes a string in its *format* parameter as the input, and performs tasks based on the characters in the string. The input inside quotations (*""*) will be sent to the function, but specifiers are preceding by the *%* character. An example of the function without a specifier can look like this:



### Specifiers
**Specifiers** can be used to instruct the **printf** function to take additional arguments and print them into the string, which is especially useful for variables and parameters that change within the function. A list of some of the specifiers are shown below, however this is not all of the available options.

 - %d - prints an integer
 - %f - prints a floating-point number
 - %c - prints a character
 - %s - prints a string
 - %p - prints a memory address
 - %x - prints a hexadecimal value

Below is an example of the **printf** function using a specifier and a previously declared variable to print both the initial string and the value given by the specifier. 

# _printf

The recreation of the **printf ** function included several functions passing to each other to read and perform tasks to correctly print the **format* string given to the function, as well as interpreting any specifiers and additional arguments. 

The prototype for **_printf** is identical to **printf**'s:

    int _printf(const char *format, ...);

### Available Specifiers in _printf

This recreation is a simplified version of the **printf** function, and the only available specifiers are as follows:

 - %d - prints an integer
 - %i - prints an integer (same as %d)
 - %c - prints a character
 - %s - prints a string
 - %% - prints a literal *%*

### Header Files in _printf

The following are header files available in the C standard library that are used within the various files that make up the _printf function:
 - stdarg.h
 - stdlib.h
 - limits.h
 - string.h
 - unistd.h



# Understanding of _printf

The sequence of functions that are used for **_printf** can be understood by applying logic to building the function. 

> If I do this, what should happen? If that happens, what happens after that? What if I don't do that? What if I do that but then I don't do...
> 
> and so on. 

### Flowchart: How did we get here?

<img width="1344" alt="Screenshot 2023-07-11 at 8 40 51 PM" src="https://github.com/allisonabinger/holbertonschool-printf/assets/127708538/9ae57884-9a2a-4fba-a109-97725ba413dd">


### What do the functions do?

 
**_printf**

 - _printf receives a string and optional arguments following the string. If the string is valid, it is passed to the function **find_spec**

**find_spec**

 - This includes a list of conditions to occur if the function detects a specifier or a character. Simple characters are printed, null bytes terminate the function, but if a *%* is detected, then the function pauses and passes the input to **check_spec**.
 
 **check_spec**
 
 - This function checks for the next character after the *%* character to determine the actions to take next. 
 - If the character is another *%*, then a singular *%* is printed. If the next character is not *s, i, d,* or *c*, then *%* and the character are printed, but if they are, the function signals **find_spec** to send the specifier to **use_spec_struct**
 
 **use_spec_struct**
 
 - This function utilizes a previously declared array of functions that **use_spec_struct_** replaces the specifier with the output of said functions, depending on what the specifier is (*d, s, i, c*).
 
 - %d - **get_dec**
 - %c - **get_char**
 - %s - **get_string**
 
 **final functions**
 
 - The **get_dec**, **get_char**, and **get_string** functions read the list of arguments that was passed to the **_printf** function and completes various tasks and iterations to get information for **find_spec** to utilize in building the complete string for **_printf** to output. 

## Compilation

**_printf** was compiled using *gcc*

The following tags were used:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Summary

This project takes a very versatile and well-used function and allows students to examine the functionality and use cases, evaluate the    different factors, and compose an individual project to achieve the same outcome as **printf**


