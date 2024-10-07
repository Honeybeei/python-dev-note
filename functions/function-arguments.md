# 🎯 Function Arguments

- [🎯 Function Arguments](#-function-arguments)
  - [📚 Types of Function Arguments](#-types-of-function-arguments)
    - [📌 Positional Arguments](#-positional-arguments)
    - [🏷️ Keyword Arguments](#️-keyword-arguments)
    - [⚙️ Default Arguments](#️-default-arguments)
    - [🌟 Variable-length Arguments (args and kwargs)](#-variable-length-arguments-args-and-kwargs)
  - [🔑 Keyword-only Arguments](#-keyword-only-arguments)
  - [🔄 Argument Passing in Python](#-argument-passing-in-python)
  - [⛓️‍💥 Combining Different Types of Arguments](#️-combining-different-types-of-arguments)
  - [📦 Argument Unpacking](#-argument-unpacking)
    - [Unpacking with `*` (positional arguments)](#unpacking-with--positional-arguments)
    - [Unpacking with `**` (keyword arguments)](#unpacking-with--keyword-arguments)
  - [🏆 Best Practices for Function Arguments](#-best-practices-for-function-arguments)

In Python, functions can accept various types of arguments, allowing for flexible, reusable code. Understanding how to handle function arguments is essential for writing efficient and clear Python functions.

## 📚 Types of Function Arguments

### 📌 Positional Arguments

Positional arguments are the most straightforward type of argument. They are assigned to parameters based on their position in the function call.

```python
def greet(name, message):
    print(f"{message}, {name}!")

greet("Alice", "Hello")  # Output: Hello, Alice!
```

### 🏷️ Keyword Arguments

Keyword arguments are passed by explicitly naming the parameter in the function call. This makes the order irrelevant and enhances readability.

```python
def greet(name, message):
    print(f"{message}, {name}!")

greet(message="Goodbye", name="Bob")  # Output: Goodbye, Bob!
```

### ⚙️ Default Arguments

You can assign default values to parameters, allowing the function to be called without explicitly passing those arguments.

```python
def greet(name, message="Hello"):
    print(f"{message}, {name}!")

greet("Charlie")  # Output: Hello, Charlie!
greet("Dana", "Hi")  # Output: Hi, Dana!
```

Default arguments must always follow non-default arguments in the function signature.

### 🌟 Variable-length Arguments (args and kwargs)

Python allows you to pass a variable number of arguments to a function using `*args` for positional arguments and `**kwargs` for keyword arguments.

- `*args`: Collects extra **positional arguments** into a tuple.
- `**kwargs`: Collects extra **keyword arguments** into a dictionary.

Example with `*args`:

```python
def sum_all(*numbers):
    return sum(numbers)

print(sum_all(1, 2, 3, 4))  # Output: 10
```

Example with `**kwargs`:

```python
def print_person_info(**info):
    for key, value in info.items():
        print(f"{key}: {value}")

print_person_info(name="Alice", age=30, city="New York")
# Output:
# name: Alice
# age: 30
# city: New York
```

## 🔑 Keyword-only Arguments

In Python, you can enforce that certain arguments must be passed as keyword arguments by placing them after a `*` in the function definition.

```python
def order(item, *, quantity=1, price):  # from quantity onwards, all arguments must be passed as keywords
  print(f"Order: {quantity} x {item} at ${price} each")

order("apple", quantity=3, price=1.5)  # Output: Order: 3 x apple at $1.5 each
```

## 🔄 Argument Passing in Python

Python uses **pass-by-object-reference**, which means that arguments passed to a function are references to the original objects. Mutable objects (like lists or dictionaries) can be modified inside the function, while immutable objects (like integers or strings) cannot be changed within the function.

> Review: **Mutable vs. Immutable Objects**
>
> - **Mutable Data Types**: Lists, Dictionaries, Sets
> - **Immutable Data Types**: Integers, Floats, Strings, Tuples
>
> More details on mutability and immutability can be found in the [Variables and Data Types](../basics/variables-and-data-types.md) section.

```python
def modify_list(numbers):
    numbers.append(4)

my_list = [1, 2, 3]
modify_list(my_list)
print(my_list)  # Output: [1, 2, 3, 4]
```

However, if the object is immutable:

```python
def modify_number(x):
    x += 1

number = 10
modify_number(number)
print(number)  # Output: 10
```

## ⛓️‍💥 Combining Different Types of Arguments

You can combine different types of arguments in a single function, but the order should be as follows:

1. Positional arguments
2. Default arguments
3. `*args`
4. Keyword arguments
5. `**kwargs`

```python
def my_function(a, b=2, *args, c=3, **kwargs):
    print(f"a: {a}, b: {b}, c: {c}")
    print(f"args: {args}")
    print(f"kwargs: {kwargs}")

# Function calls
my_function(1)  
# a: 1, b: 2, c: 3
# args: ()
# kwargs: {}

my_function(1, 10, 20, 30, c=40, d=50)
# a: 1, b: 10, c: 40
# args: (20, 30)
# kwargs: {'d': 50}
```

## 📦 Argument Unpacking

Argument unpacking is a powerful feature in Python that allows you to pass a collection of items (like a list, tuple, or dictionary) into a function as individual arguments. There are two main types of argument unpacking:

### Unpacking with `*` (positional arguments)

You can unpack a list or tuple into individual positional arguments using `*`.

```python
def multiply(a, b, c):
    return a * b * c

numbers = [2, 3, 4]
result = multiply(*numbers) # Unpacks the list into individual arguments
print(result)  # Output: 24
```

### Unpacking with `**` (keyword arguments)

You can unpack a dictionary into keyword arguments using `**`.

```python
def print_person_info(name, age, city):
    print(f"{name} is {age} years old and lives in {city}")

person = {"name": "Alice", "age": 30, "city": "New York"}
print_person_info(**person)  # Unpacks the dictionary into keyword arguments
# Output: Alice is 30 years old and lives in New York
```

## 🏆 Best Practices for Function Arguments

- **Clarity over flexibility**: Don't use too many `*args` and `**kwargs` unless necessary, as they can make the function harder to understand.
- **Use default arguments wisely**: Default arguments should represent typical use cases but avoid complex default values (like mutable objects).
- **Be mindful of mutability**: Understand the difference between mutable and immutable objects to prevent unintended side effects in your functions.

---

> ⬅️ **[Previous: Defining Functions](./defining-functions.md)**
>
> ➡️ **[Next: Lambda Functions](./lambda-functions.md)**
>
> 🔝 **[Back to Top](#-function-arguments)**
>
> 🏠 **[Home](../README.md)**
