<h1 align="center">
	🖨️  FT_PRINTF
</h1>

<p align="center">
	<b><i>A Custom implementation of the printf function in C</i></b><br>
</p>

<p align="center">
    <img alt="score" src="https://img.shields.io/badge/score-100%2F100-brightgreen" />
<p align="center">
    <img alt="solo" src="https://img.shields.io/badge/solo-yellow" />
    <img alt="estimated time" src="https://img.shields.io/badge/estimation-70%20hours-blue" />
    <img alt="XP earned" src="https://img.shields.io/badge/XP-882-orange" />
<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/lkilpela/ft_printf?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/lkilpela/ft_printf?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/lkilpela/ft_printf?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/lkilpela/ft_printf?color=green" />
</p>

## 🖨️ About The Project

`ft_printf` is a custom implementation of the standard C library function `printf`. This project is part of the Hive Helsinki curriculum.

The `printf` function is a common standard library function used in C for formatted output. The goal of this project is to recreate `printf` function to gain a deeper understanding of data types, variadic functions, and string manipulation in C.

This project serves as a solid foundation for understanding how to handle and format different types of data in C. It is a great exercise for learning about variadic functions and the intricacies of data formatting.

This project was completed as a **solo project**.

## 🏁 Getting Started

## 🛠️ Installation & Setup

1. Clone the repository: `git clone https://github.com/username/ft_printf.git`
2. Navigate into the project directory: `cd ft_printf`
3. Compile the project: `make`

## Usage

After compiling the project, you can use the `ft_printf` function in the same way you would use the standard `printf` function.

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!", "world");
    return (0);
}
```

## 📝 Evaluation Requirements

The `ft_printf` project was evaluated based on the following criteria:

1. **Code Quality**: The code must be clear, concise, and efficient. It should be well-organized and easy to read. The use of global variables is forbidden and the project must conform to the school's norminette rules.

2. **Functionality**: The `ft_printf` function must work correctly and handle all format specifiers and flags of the real `printf`. The library should not have any memory leaks.

3. **Compiling**: The library must compile without any errors or warnings. The project should compile with the `-Wall -Wextra -Werror` flags.

4. **Makefile**: The project should include a Makefile that compiles the library and includes rules like `all`, `clean`, `fclean`, and `re`. The Makefile should recompile only the necessary files when a change is made.

### 🧑‍💻 Peer Evaluations (3/3)

Here are some of the comments received during the peer evaluation of the `libft` project:

> **Peer 1**: "Lumi did a great work with her printf. All her functions are smart and efficient, her code is very clean and well organized. She also showed a good understanding of subject. Well done and good luck with evaluations :)"

> **Peer 2**: "Lumi had nice and clean printf implementation. We ran some tests and went trough the code, everything worked perfectly and there were no norm errors or other issues. Once again it was interesting to see different ways to implement the conversions. Nice job Lumi! Good luck for the last evaluation!"

> **Peer 3**: "Lumi did a great job! We went tru function, it was written very clear and easy to read. Lumi was able to explain all her functions very well. Was happy t meet you, and keep coding! "

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/lkilpela/libft/blob/main/docs/LICENSE) file for details.