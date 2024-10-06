# ⚠️ Exception Handling

- [⚠️ Exception Handling](#️-exception-handling)
  - [❓ What Are Exceptions?](#-what-are-exceptions)
    - [Common Built-in Exceptions](#common-built-in-exceptions)
  - [🛠️ The `try-except` Block](#️-the-try-except-block)
    - [Basic Syntax](#basic-syntax)
    - [Example](#example)
  - [🔄 Handling Multiple Exceptions](#-handling-multiple-exceptions)
    - [Multiple `except` Clauses](#multiple-except-clauses)
    - [Grouping Exceptions](#grouping-exceptions)
    - [Using Exception Hierarchy](#using-exception-hierarchy)
  - [🔎 `else` and `finally` Clauses](#-else-and-finally-clauses)
    - [The `else` Clause](#the-else-clause)
    - [The `finally` Clause](#the-finally-clause)
  - [🚀 Raising Exceptions](#-raising-exceptions)
    - [Raising Built-in Exceptions](#raising-built-in-exceptions)
    - [Raising Custom Exceptions](#raising-custom-exceptions)
  - [🧰 Built-in Exceptions Overview](#-built-in-exceptions-overview)
    - [Common Exceptions](#common-exceptions)
  - [🛡️ Creating Custom Exceptions](#️-creating-custom-exceptions)
    - [Defining a Custom Exception](#defining-a-custom-exception)
    - [Using Custom Exceptions](#using-custom-exceptions)
  - [💡 Best Practices in Exception Handling](#-best-practices-in-exception-handling)
  - [📖 Under the Hood: How Exceptions Work](#-under-the-hood-how-exceptions-work)
    - [Stack Unwinding Example](#stack-unwinding-example)
  - [🧠 Key Takeaways](#-key-takeaways)

## ❓ What Are Exceptions?

In Python, an **exception** is an event that occurs during the execution of a program that disrupts the normal flow of instructions. When an error occurs, Python generates an object known as an **exception**. If not handled, the exception can cause the program to crash.

### Common Built-in Exceptions

Some of the most common built-in exceptions include:

- **`ZeroDivisionError`**: Raised when division or modulo by zero takes place.
- **`TypeError`**: Occurs when an operation is applied to an object of inappropriate type.
- **`ValueError`**: Triggered when a function receives an argument of the right type but an inappropriate value.
- **`IndexError`**: Happens when an index is not found in a sequence.
- **`KeyError`**: Raised when a key is not found in a dictionary.

Understanding exceptions is crucial for building robust programs that can handle unexpected situations gracefully.

## 🛠️ The `try-except` Block

To handle exceptions in Python, you use the `try-except` construct. This allows you to test a block of code for errors and handle them appropriately.

### Basic Syntax

```python
try:
    # Code that might raise an exception
except ExceptionType:
    # Code to execute if an exception occurs
```

### Example

```python
try:
    number = int(input("Enter a number: "))
    print(f"The reciprocal is {1 / number}")
except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")
except ValueError:
    print("Error: Invalid input. Please enter a valid number.")
```

In this example:

- **`try` Block**: Contains code that might throw an exception.
- **`except` Block**: Catches and handles specific exceptions.

## 🔄 Handling Multiple Exceptions

You can handle multiple exceptions by specifying multiple `except` clauses or by grouping exceptions in a single clause.

### Multiple `except` Clauses

```python
try:
    # Code that might raise exceptions
except ValueError:
    # Handle ValueError
except ZeroDivisionError:
    # Handle ZeroDivisionError
```

### Grouping Exceptions

```python
try:
    # Code that might raise exceptions
except (ValueError, ZeroDivisionError):
    # Handle both ValueError and ZeroDivisionError
```

### Using Exception Hierarchy

Exceptions in Python form a hierarchy, with `BaseException` at the top. Catching a parent exception class will also catch its child exceptions.

```python
try:
    # Code that might raise exceptions
except Exception:
    # This will catch most exceptions, but it's better to catch specific ones
```

> **Best Practice**: Always catch the most specific exception first to avoid inadvertently catching unexpected exceptions.

## 🔎 `else` and `finally` Clauses

The `try` statement can have optional `else` and `finally` clauses for additional control flow.

### The `else` Clause

The `else` block executes if no exceptions were raised in the `try` block.

```python
try:
    # Code that might raise an exception
except ExceptionType:
    # Handle exception
else:
    # Execute if no exceptions occurred
```

**Example:**

```python
try:
    result = 10 / 2
except ZeroDivisionError:
    print("Cannot divide by zero.")
else:
    print(f"Result is {result}")
```

### The `finally` Clause

The `finally` block executes no matter what, whether an exception was raised or not. It's typically used for cleanup actions like closing files or releasing resources.

```python
try:
    # Code that might raise an exception
except ExceptionType:
    # Handle exception
finally:
    # This will execute regardless of what happened above
```

**Example:**

```python
try:
    file = open("sample.txt", "r")
    data = file.read()
except FileNotFoundError:
    print("File not found.")
finally:
    file.close()
    print("File closed.")
```

> **Note**: If the file doesn't exist, attempting to close it in the `finally` block will raise another exception. It's safer to use context managers (`with` statement) for file operations.

## 🚀 Raising Exceptions

You can raise exceptions in your code using the `raise` keyword. This is useful when you want to enforce certain constraints or when an error condition occurs in your program logic.

### Raising Built-in Exceptions

```python
def set_age(age):
    if age < 0:
        raise ValueError("Age cannot be negative.")
    print(f"Age is set to {age}")
```

**Example:**

```python
try:
    set_age(-5)
except ValueError as e:
    print(f"An error occurred: {e}")
```

### Raising Custom Exceptions

You can define and raise custom exceptions to represent specific error conditions in your application.

```python
class NegativeAgeError(Exception):
    """Exception raised for negative age inputs."""
    pass

def set_age(age):
    if age < 0:
        raise NegativeAgeError("Age cannot be negative.")
    print(f"Age is set to {age}")
```

## 🧰 Built-in Exceptions Overview

Understanding built-in exceptions helps in handling errors effectively.

### Common Exceptions

- **`AttributeError`**: Raised when an attribute reference or assignment fails.
- **`ImportError`**: Triggered when an import statement fails to find the module definition.
- **`IOError`**: Occurs when an I/O operation fails.
- **`KeyboardInterrupt`**: Raised when the user hits the interrupt key (usually `Ctrl+C`).
- **`MemoryError`**: Happens when an operation runs out of memory.

For a full list, refer to the [official Python documentation](https://docs.python.org/3/library/exceptions.html).

## 🛡️ Creating Custom Exceptions

Creating custom exceptions can make your code more readable and error handling more specific.

### Defining a Custom Exception

```python
class CustomError(Exception):
    """Base class for other exceptions"""
    pass

class InputTooSmallError(CustomError):
    """Raised when the input value is too small"""
    pass

class InputTooLargeError(CustomError):
    """Raised when the input value is too large"""
    pass
```

### Using Custom Exceptions

```python
number = 10

while True:
    try:
        guess = int(input("Enter a number: "))
        if guess < number:
            raise InputTooSmallError
        elif guess > number:
            raise InputTooLargeError
        else:
            print("Congratulations! You guessed it correctly.")
            break
    except InputTooSmallError:
        print("This value is too small, try again.")
    except InputTooLargeError:
        print("This value is too large, try again.")
```

## 💡 Best Practices in Exception Handling

- **Catch Specific Exceptions**: Always catch specific exceptions instead of using a bare `except:` clause.

    ```python
    # Good
    try:
        # code
    except ValueError:
        # handle ValueError

    # Bad
    try:
        # code
    except:
        # handle all exceptions (not recommended)
    ```

- **Don't Suppress Exceptions**: Avoid empty `except` blocks that suppress exceptions without handling them.

    ```python
    # Not recommended
    try:
        # code
    except Exception:
        pass  # Silently ignores all exceptions
    ```

- **Use Finally for Cleanup**: Utilize the `finally` block for releasing resources like files or network connections.

    ```python
    try:
        # code
    finally:
        # cleanup code
    ```

- **Avoid Using Exceptions for Flow Control**: Do not use exceptions to control the normal flow of your program.

- **Log Exceptions**: When catching exceptions, consider logging them for debugging purposes.

    ```python
    import logging

    try:
        # code
    except Exception as e:
        logging.error(f"An error occurred: {e}")
    ```

- **Re-raise Exceptions When Necessary**: If you catch an exception but can't handle it, re-raise it.

    ```python
    try:
        # code
    except SomeSpecificException:
        # handle exception
    except Exception:
        # re-raise the exception
        raise
    ```

## 📖 Under the Hood: How Exceptions Work

When an exception is raised:

1. **Exception Object Creation**: Python creates an exception object representing the error.
2. **Search for Handler**: The interpreter looks for a matching `except` clause in the current scope.
3. **Stack Unwinding**: If no handler is found, Python unwinds the call stack, looking for a handler in calling functions.
4. **Program Termination**: If no handler is found, the program terminates and prints a traceback.

### Stack Unwinding Example

```python
def function_a():
    function_b()

def function_b():
    function_c()

def function_c():
    raise ValueError("An error occurred.")

try:
    function_a()
except ValueError as e:
    print(f"Caught an exception: {e}")
```

In this example:

- The exception is raised in `function_c`.
- Python searches for an `except` block in `function_c`, then `function_b`, then `function_a`, and finally in the `try` block where `function_a()` is called.
- The exception is caught, and the message is printed.

## 🧠 Key Takeaways

- **Exception Handling**: Use `try-except` blocks to handle exceptions and prevent program crashes.
- **Specificity**: Catch specific exceptions to handle known error conditions.
- **Cleanup**: Use `finally` for cleanup actions that must occur regardless of exceptions.
- **Custom Exceptions**: Define custom exceptions to represent unique error conditions in your application.
- **Best Practices**: Follow best practices to write robust, maintainable code that handles errors gracefully.

---

> ⬅️ **[Previous: Loop Control Statements](./loop-control-statements.md)**
>
> ➡️ **[Next: Defining Functions](../functions/defining-functions.md)**
>
> 🔝 **[Back to Top](#️-exception-handling)**
>
> 🏠 **[Home](../README.md)**
