# ✨ Python Decorators

- [✨ Python Decorators](#-python-decorators)
  - [🎯 What Are Decorators?](#-what-are-decorators)
    - [Basic Syntax:](#basic-syntax)
  - [🚀 Creating a Simple Decorator](#-creating-a-simple-decorator)
    - [Explanation:](#explanation)
  - [📦 Using Multiple Decorators](#-using-multiple-decorators)
  - [🧑‍🏫 Decorators with Arguments](#-decorators-with-arguments)
    - [Explanation:](#explanation-1)
  - [🧩 Built-in Decorators: `@staticmethod`, `@classmethod`, and `@property`](#-built-in-decorators-staticmethod-classmethod-and-property)
    - [`@staticmethod`](#staticmethod)
    - [`@classmethod`](#classmethod)
    - [`@property`](#property)
  - [✨ Advanced Decorators: `functools.wraps`](#-advanced-decorators-functoolswraps)
  - [🔄 Common Use Cases](#-common-use-cases)
  - [🛠 Best Practices for Writing Decorators](#-best-practices-for-writing-decorators)
  - [🎯 Key Takeaways](#-key-takeaways)

## 🎯 What Are Decorators?

A **decorator** is a function in Python that modifies the behavior of another function or class. Decorators allow you to wrap another function in order to extend or alter its behavior, without modifying the function itself.

They are often used for logging, enforcing access control, instrumentation, or modifying inputs/outputs of a function.

In Python, functions are **first-class citizens**, meaning they can be passed around as arguments to other functions. Decorators take advantage of this feature.

### Basic Syntax:

A decorator is applied using the `@decorator_name` syntax before the definition of the function you want to decorate.

```python
@decorator_name
def some_function():
    pass
```

This is equivalent to:

```python
def some_function():
    pass

some_function = decorator_name(some_function)
```

## 🚀 Creating a Simple Decorator

Let’s create a basic decorator that prints the execution time of a function:

```python
import time

def time_decorator(func):
    def wrapper(*args, **kwargs):
        start_time = time.time()
        result = func(*args, **kwargs)
        end_time = time.time()
        print(f"Function {func.__name__} executed in {end_time - start_time:.4f} seconds")
        return result
    return wrapper
```

Now, we can use this decorator:

```python
@time_decorator
def calculate_square(n):
    return n ** 2

print(calculate_square(5))
```

### Explanation:

- **`wrapper` function**: The decorator wraps the original function inside another function (`wrapper`), adding additional logic (in this case, measuring execution time). Closure allows the `wrapper` function to access the original function's arguments and return value.
- **`*args, **kwargs`**: These ensure that the wrapper function can accept any number of arguments and keyword arguments, just like the original function.

## 📦 Using Multiple Decorators

You can apply multiple decorators to a single function. The decorators are applied from the top down:

```python
@decorator_one
@decorator_two
def my_function():
    pass
```

This is equivalent to:

```python
my_function = decorator_one(decorator_two(my_function))
```

## 🧑‍🏫 Decorators with Arguments

Sometimes you want your decorator to accept arguments. To achieve this, you need to add another layer of function nesting:

```python
def repeat_decorator(n_times):
    def decorator(func):
        def wrapper(*args, **kwargs):
            for _ in range(n_times):
                result = func(*args, **kwargs)
            return result
        return wrapper
    return decorator
```

Now you can control how many times a function is executed:

```python
@repeat_decorator(3)
def greet():
    print("Hello!")

greet()
```

### Explanation:

- **`repeat_decorator(3)`**: This creates the decorator that will repeat the function three times.
- The decorator returns the actual wrapper, which handles the execution.

## 🧩 Built-in Decorators: `@staticmethod`, `@classmethod`, and `@property`

Python provides several built-in decorators to simplify common tasks, especially in object-oriented programming:

### `@staticmethod`

Declares a method that does not access or modify the class or instance state.

```python
class Math:
    @staticmethod
    def add(a, b):
        return a + b

# You can call it directly from the class
print(Math.add(2, 3))  # Output: 5
```

> When you want to group functions together in a class but they don't need access to the class variables or instance

### `@classmethod`

Declares a method that takes the class as its first argument (`cls`).

```python
class Animal:
    species_count = 0

    def __init__(self, name):
        self.name = name
        Animal.species_count += 1

    @classmethod
    def total_species(cls):
        return f"Total species: {cls.species_count}"

# Creating instances
dog = Animal("Dog")
cat = Animal("Cat")

# Call class method
print(Animal.total_species())  # Output: Total species: 2
```

> When you need to work with class-level variables or methods that should affect the class itself, not the instance

### `@property`

Allows you to define methods that can be accessed like attributes.

```python
class Rectangle:
    def __init__(self, width, height):
        self._width = width
        self._height = height

    @property
    def area(self):
        return self._width * self._height

rect = Rectangle(5, 10)
print(rect.area)  # Output: 50
```

you can also define a setter and a deleter methods using `@property.setter` and `@property.deleter`.

```python
class Rectangle:
    def __init__(self, width, height):
        self._width = width
        self._height = height

    @property
    def width(self):
        return self._width

    @width.setter
    def width(self, value):
        if value > 0:
            self._width = value
        else:
            raise ValueError("Width must be positive!")

rect = Rectangle(5, 10)
rect.width = 8  # This calls the setter
print(rect.width)  # Output: 8

rect.width = -2  # This raises a ValueError
```

## ✨ Advanced Decorators: `functools.wraps`

When writing decorators, you may notice that the metadata (like the name and docstring) of the original function is lost. This is where `functools.wraps` comes in. It preserves the original function's metadata:

```python
from functools import wraps

def my_decorator(func):
    @wraps(func)
    def wrapper(*args, **kwargs):
        print("Calling function...")
        return func(*args, **kwargs)
    return wrapper

@my_decorator
def my_function():
    """This is my function."""
    pass

print(my_function.__name__)  # Output: my_functions
```

By applying `@wraps(func)` in the `wrapper`, the original function’s name, docstring, and other attributes are preserved.

## 🔄 Common Use Cases

Decorators are widely used for various purposes, including:

1. **Logging**: Track when functions are called and with what arguments.
2. **Authorization**: Restrict access to certain parts of an application.
3. **Caching**: Store the results of expensive function calls to avoid repeated computation.
4. **Rate Limiting**: Control the frequency at which a function can be called.

For example, here’s a logging decorator:

```python
def log_decorator(func):
    @wraps(func)
    def wrapper(*args, **kwargs):
        print(f"Function {func.__name__} was called with {args} and {kwargs}")
        return func(*args, **kwargs)
    return wrapper
```

## 🛠 Best Practices for Writing Decorators

1. **Use `@wraps`**: Always use `functools.wraps` to maintain the original function’s metadata.
2. **Handle Function Signature Properly**: Ensure the decorator supports any kind of function signature using `*args` and `**kwargs`.
3. **Keep Them Reusable**: Write decorators in a way that they can be used across different parts of your codebase.

## 🎯 Key Takeaways

- **Decorators** enhance or modify the behavior of functions or methods.
- They are extremely useful for **cross-cutting concerns** like logging, authorization, and caching.
- Use `functools.wraps` to ensure your decorator doesn't overwrite important metadata of the decorated function.

---

> ⬅️ **[Previous: closures](./closures.md)**
>
> ➡️ **[Next: Lists and List Comprehensions](../data-structures/list.md)**
>
> 🔝 **[Back to Top](#-python-decorators)**
>
> 🏠 **[Home](../README.md)**
