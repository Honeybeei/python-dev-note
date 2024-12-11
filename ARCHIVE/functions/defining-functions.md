# 🎯 Defining Functions

- [🎯 Defining Functions](#-defining-functions)
  - [🧩 Parts of a Function](#-parts-of-a-function)
  - [📝 Parameters and Arguments](#-parameters-and-arguments)
  - [⚡ Advanced Features](#-advanced-features)
    - [🏷️ Type Hints](#️-type-hints)
    - [📚 Docstrings](#-docstrings)

## 🧩 Parts of a Function

- In Python, a function is defined using the `def` keyword.
- The function definition consists of the following parts:
  - **Function Name**: The name of the function.
  - **Parameters**: The input values that the function takes.
  - **Body**: The block of code that defines the function's behavior.
  - **Return Value**: The output value that the function returns.

```python
def function_name(parameters): # Function Name and Parameters
    # Body of the function
    return value # Return value
```

## 📝 Parameters and Arguments

- **Parameters**: Parameters are the variables defined in the function definition. They are the placeholders listed in the function definition. They act as placeholders for the values that are passed to the function.
- **Arguments**: Arguments are the actual values that are passed to the function when it is called.

```python
def greet(name): # name is a parameter
    return f"Hello, {name}!"

print(greet("Alice"))  # Hello, Alice! # "Alice" is an argument
```

## ⚡ Advanced Features

### 🏷️ Type Hints

Type hints can be added to function parameters and return values to specify the expected data types.

```python
def add_numbers(a: int, b: int) -> int:
    return a + b
```

### 📚 Docstrings

Docstrings are used to document the purpose and usage of a function. They are enclosed in triple quotes. More notes in the [Comments and Docstrings](../basics/comments-and-docstrings.md) section.

```python
def add_numbers(a: int, b: int) -> int:
    """
    This function adds two numbers and returns the result.
    """
    return a + b
```
