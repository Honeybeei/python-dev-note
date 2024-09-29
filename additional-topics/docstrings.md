# 📘 Docstrings

## ❓ What are Docstrings?

Docstrings, short for **documentation strings**, are string literals that appear right after the definition of a function, method, class, or module. They are used to explain the purpose of the code block and provide documentation on its functionality.

Unlike regular comments, docstrings are retained during runtime, which means they can be accessed using Python's built-in `help()` function or the `__doc__` attribute.

### Example:

```python
def greet(name):
    """Return a greeting message for the given name."""
    return f"Hello, {name}!"
```

## 📝 Types of Docstrings

### Single-line Docstrings

Single-line docstrings are used for functions or methods that are simple and do not require detailed explanations. The description fits in one line and ends with a period.

```python
def square(x):
    """Return the square of a number."""
    return x * x
```

### Multi-line Docstrings

Multi-line docstrings are used when a more detailed description is necessary. This format is typically used for more complex functions, classes, or modules.

A common structure:

- A short summary of the functionality.
- A blank line to separate the summary from detailed descriptions.
- Detailed explanations of parameters, return values, and exceptions (if any).

```python
def divide(a, b):
    """
    Divide two numbers and return the result.
    
    Parameters:
    a (float): The numerator.
    b (float): The denominator.
    
    Returns:
    float: The quotient of the division.
    
    Raises:
    ZeroDivisionError: If the denominator is zero.
    """
    if b == 0:
        raise ZeroDivisionError("Cannot divide by zero.")
    return a / b
```

## 🔍 Accessing Docstrings

Docstrings can be accessed at runtime using Python's `help()` function or the `__doc__` attribute of the function, class, or module.

### Example:

```python
def multiply(x, y):
    """Return the product of two numbers."""
    return x * y

# Accessing the docstring using __doc__
print(multiply.__doc__)  # Output: "Return the product of two numbers."

# Accessing the docstring using help()
help(multiply)
```

## 🏛️ Docstring Standards and Conventions

While Python does not enforce a strict docstring format, adhering to a consistent style improves code readability. Below are some widely-used conventions:

### PEP 257

PEP 257 is the official Python style guide for docstrings. Key recommendations include:

- Use triple double quotes (`"""`) for docstrings.
- The first line should be a short summary of the object's purpose.
- Leave a blank line between the summary and any further explanation (for multi-line docstrings).
- End the docstring with a period.

### Google Style Docstrings

The Google style is commonly used for more detailed docstrings, especially in larger projects. It structures the docstring with sections like `Args`, `Returns`, and `Raises`.

```python
def factorial(n):
    """
    Calculate the factorial of a number.

    Args:
    n (int): The number to calculate the factorial for.

    Returns:
    int: The factorial of the number.
    
    Raises:
    ValueError: If n is a negative number.
    """
    if n < 0:
        raise ValueError("n must be a non-negative integer.")
    if n == 0:
        return 1
    return n * factorial(n - 1)
```

### NumPy Style Docstrings

The NumPy style is popular in scientific computing projects and is known for its clear sectioning and alignment.

```python
def mean(data):
    """
    Calculate the mean of a list of numbers.

    Parameters
    ----------
    data : list of float
        A list of numbers to calculate the mean from.

    Returns
    -------
    float
        The mean of the numbers in the list.
    """
    return sum(data) / len(data)
```

## 🧰 Best Practices for Writing Docstrings

- Keep them concise but informative.
- Always describe what the function, method, or class does, including its parameters and return values.
- Ensure docstrings explain any exceptions raised.
- Follow a consistent style guide across the project (PEP 257, Google, or NumPy).

## 📚 Docstrings in Classes

Classes and methods should have their own docstrings, even if they are part of the same class. This ensures that the purpose of both the class and its methods is clear.

### Example:

```python
class Dog:
    """
    A class to represent a dog.

    Attributes
    ----------
    name : str
        The name of the dog.
    age : int
        The age of the dog.
    breed : str
        The breed of the dog.
    """

    def __init__(self, name, age, breed):
        """
        Initialize a Dog object with name, age, and breed.

        Parameters
        ----------
        name : str
            The name of the dog.
        age : int
            The age of the dog.
        breed : str
            The breed of the dog.
        """
        self.name = name
        self.age = age
        self.breed = breed

    def bark(self):
        """Make the dog bark."""
        return "Woof!"
```

## 📖 Why Use Docstrings?

- **Improved Readability**: Docstrings make your code easier to understand for others (and future you).
- **Better Documentation**: Tools like `help()` rely on docstrings to auto-generate useful documentation.
- **Coding Standards**: Writing docstrings is a good habit and is often required for production-level code in larger projects.

## 🔗 Further Reading

- PEP 257: [Docstring Conventions](https://www.python.org/dev/peps/pep-0257/)
- Google Python Style Guide: [Docstrings](https://google.github.io/styleguide/pyguide.html#38-comments-and-docstrings)
- NumPy/SciPy Documentation Guide: [Docstring Standards](https://numpydoc.readthedocs.io/en/latest/format.html)
