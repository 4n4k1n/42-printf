# ft_printf - Your Own Printf Function

## 📝 About
ft_printf is a project that involves reimplementing the famous printf() function from the C Standard Library. This project is an excellent opportunity to learn about variadic functions, format string parsing, and improve your programming skills. It's a fundamental project in the 42 curriculum that builds upon the libft foundation.

## 🛠️ Usage

### Requirements
- GCC compiler
- Make

### Installation
1. Clone the repository:
```bash
git clone https://github.com/yourusername/ft_printf.git
```

2. Compile the library:
```bash
make        # Compiles the library
```

This will create `libftprintf.a` in the root directory.

### Using the Library
To use the library in your projects:
1. Include the header in your C files:
```c
#include "ft_printf.h"
```

2. Compile with the library:
```bash
gcc your_file.c -L. -lftprintf
```

## 🔍 Conversions

### Mandatory Part
| Conversion | Description |
|------------|-------------|
| %c | Prints a single character |
| %s | Prints a string (as defined by the common C convention) |
| %p | Prints a void * pointer in hexadecimal format |
| %d | Prints a decimal (base 10) number |
| %i | Prints an integer in base 10 |
| %u | Prints an unsigned decimal (base 10) number |
| %x | Prints a number in hexadecimal (base 16) lowercase format |
| %X | Prints a number in hexadecimal (base 16) uppercase format |
| %% | Prints a percent sign |



## 🧮 Function Prototype

```c
int ft_printf(const char *format, ...);
```

The function returns the number of characters printed, or a negative value if an error occurs.

## 📋 Implementation Details

### Allowed Functions
- malloc
- free
- write
- va_start, va_arg, va_copy, va_end

### Key Aspects
- Variadic function handling
- String parsing and format specifier detection
- Type conversion and formatting
- Memory management

## 🧹 Cleaning Up
```bash
make clean    # Removes object files
make fclean   # Removes object files and library
make re       # fclean + make
```

## 🔍 Testing
While not required for submission, it's recommended to create tests to verify your implementation:

```c
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int result1, result2;
    
    result1 = printf("Original: Hello %s, %d, %x\n", "World", 42, 255);
    result2 = ft_printf("Custom: Hello %s, %d, %x\n", "World", 42, 255);
    
    printf("Original printf returned: %d\n", result1);
    printf("ft_printf returned: %d\n", result2);
    
    return (0);
}
```

## 🎯 Key Learning Objectives

- **Variadic Functions**: Understanding how to handle variable number of arguments using va_list, va_start, va_arg, and va_end
- **Format String Parsing**: Implementing logic to parse format specifiers and handle different conversion types
- **Type Conversion**: Converting various data types to their string representations
- **Memory Management**: Efficient allocation and deallocation of memory for string operations
- **Modular Programming**: Breaking down complex functionality into manageable, reusable functions
- **Error Handling**: Proper handling of edge cases and invalid inputs
- **Buffer Management**: Understanding how printf-like functions manage output

## 📁 Project Structure

```
1-printf/
├── Makefile
├── README.md
├── ft_printf.h          # Header file with prototypes and includes
└── src/
    ├── ft_printf.c      # Main printf function and format parsing
    ├── ft_putchar.c     # Character output functions
    ├── ft_putstr.c      # String output functions  
    ├── ft_putnbr.c      # Decimal number output
    ├── ft_putunbr.c     # Unsigned decimal output
    ├── ft_puthex.c      # Hexadecimal output functions
    ├── ft_putptr.c      # Pointer address output
    └── ft_error.c       # Error handling utilities
```

## 🔧 Technical Implementation

### Core Algorithm
1. Parse the format string character by character
2. When encountering '%', identify the conversion specifier
3. Extract the corresponding argument from the variadic list
4. Convert the argument to its string representation
5. Output the converted string using write() system call
6. Track and return the total number of characters printed

### Memory Considerations
- Uses write() system call for output (no internal buffering)
- Minimal memory allocation for temporary conversions
- Efficient string handling without unnecessary copying
- Proper cleanup of any allocated resources

## ✨ 42 Project Context
This project is part of the 42 School curriculum and follows the strict coding standards (42 Norm). It serves as a bridge between basic C programming (libft) and more advanced system programming concepts encountered in later projects.