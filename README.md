# ft_printf - Your Own Printf Function

## 📝 About
ft_printf is a project that involves reimplementing the famous printf() function from the C Standard Library. This project is an excellent opportunity to learn about variadic functions and improve your programming skills.

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

## ✨ Contributing
This project is for learning purposes only and not open for contributions.

## 📝 License
This project is licensed under the terms of the MIT license.