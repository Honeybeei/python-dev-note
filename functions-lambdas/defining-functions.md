# 🛠 Defining Functions

## 📝 What are Functions?

In Python, a **function** is a block of reusable code that performs a specific task. Functions allow you to organize your code into manageable sections, avoid repetition, and make your programs more modular.

### Defining a Function

To define a function in Python, you use the `def` keyword, followed by the function name and parentheses `()` which may include parameters. The function block is then indented.

Here's the basic syntax:

```python
def function_name(parameters):
    """
    Optional docstring explaining the function.
    """
    # Code block to perform task
    return result
```

> More information on **docstrings** is [here](../additional-topics/docstrings.md).

#### Example

```python
def greet(name):
    """
    Prints a greeting message to the user.
    
    Parameters:
    name (str): The name of the person to greet.
    
    Returns:
    None
    """
    print(f"Hello, {name}!")
```

### Function Execution

Once you've defined a function, you can **call** it by using its name followed by parentheses, passing any required arguments.

```python
greet("Alice")
# Output: Hello, Alice!
```

> **Note:** If a function does not have a return statement, it returns `None` by default.

## 📌 Why Use Functions?

Functions are one of the building blocks of code organization. Here’s why they matter:

- **Reusability**: Once defined, a function can be reused multiple times.
- **Modularity**: Dividing a program into functions makes the code easier to read and maintain.
- **Abstraction**: You don’t need to know the internal details of a function to use it.

## 🚨 Function Naming Rules

- Function names should be **descriptive** of the task they perform.
- Function names should use lowercase letters and underscores (`_`) to separate words.
- Avoid using Python's reserved keywords (e.g., `def`, `class`, `return`, etc.).

```python
def calculate_total(price, tax_rate):
    # This function calculates the total price including tax
    total = price + (price * tax_rate)
    return total
```

## 🛠 Return Statement

The `return` statement is used to send a result back to the caller. Without a `return`, the function will return `None`.

```python
def add(a, b):
    return a + b

result = add(5, 10)
print(result)  # Output: 15
```

### Multiple Returns

Python functions can return multiple values as a tuple:

```python
def get_person_info():
    name = "Alice"
    age = 30
    return name, age

name, age = get_person_info()
print(name)  # Output: Alice
print(age)   # Output: 30
```

## 🏷️ Type Support in Functions

Python is a dynamically typed language, meaning that you don't need to specify the type of variables. However, for better code clarity and error checking, Python supports **type annotations**.

### Type Annotations for Parameters

You can specify the expected types for function parameters using a colon (`:`) after the parameter name:

```python
def greet(name: str):
    print(f"Hello, {name}!")
```

### Type Annotations for Return Values

Similarly, you can specify the expected return type using an arrow (`->`) after the parameter list:

```python
def add(a: int, b: int) -> int:
    return a + b
```

These type hints don't enforce the type at runtime (Python remains dynamically typed), but they help with **readability** and **static analysis** tools like **mypy**.

### Example with Type Annotations and Docstring

```python
def calculate_area(width: float, height: float) -> float:
    """
    Calculates the area of a rectangle.
    
    Parameters:
    width (float): The width of the rectangle.
    height (float): The height of the rectangle.
    
    Returns:
    float: The calculated area of the rectangle.
    """
    return width * height
```

By using type annotations, you're providing additional context to readers (and tools) about the types the function works with, making your code more reliable and maintainable.

## 👀 What’s Next?

- [Lambda Functions](./lambda-functions.md)
- [Function Arguments](./function-arguments.md)
- [Other topics](../README.mdd)
