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

The `libft` project was evaluated based on the following criteria:

1. **Code Quality**: The code must be clear, concise, and efficient. It should be well-organized and easy to read.

2. **Functionality**: All functions must work correctly and handle edge cases. The library should not have any memory leaks.

3. **Compiling**: The library must compile without any errors or warnings.

4. **Makefile**: The project should include a Makefile that compiles the library and includes rules like `all`, `clean`, `fclean`, and `re`.

5. **Bonus**: Bonus points were awarded for additional functions that are useful for the rest of the program.

### 🧑‍💻 Peer Evaluations (3/3)

Here are some of the comments received during the peer evaluation of the `libft` project:

> **Peer 1**: "Very good work Lumi! We talked a lot of her code and we made tests and all worked well. Code is easy to read and all solutions were very nice and easy to understand. Good luck to next evaluation!"

> **Peer 2**: "Lumi did outstanding work on the project and is very knowledgable about all of the code we checked together. She was easily able to describe how her code works, and dissect the different portions down to the correct type of return values to be outputted. I learned a bit more about NULL , and when and where to use it! Keep up the great work."

> **Peer 3**: "Lumi's code is extremely elegant, more readable than most I've seen so far. I feel I learnt a lot from seeing her syntax. Code all works and passes the norm, good luck with the rest of the evaluations!"

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/lkilpela/libft/blob/main/docs/LICENSE) file for details.