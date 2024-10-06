# 📘 Variables and Data Types

- [📘 Variables and Data Types](#-variables-and-data-types)
  - [📦 Variables](#-variables)
    - [What is a Variable?](#what-is-a-variable)
    - [Dynamic Typing](#dynamic-typing)
    - [Naming Conventions and Best Practices](#naming-conventions-and-best-practices)
  - [🏷️ Constants](#️-constants)
  - [🔢 Basic Data Types](#-basic-data-types)
    - [Integers(`int`)](#integersint)
    - [Floats(`float`)](#floatsfloat)
    - [Strings(`str`)](#stringsstr)
    - [Booleans(`bool`)](#booleansbool)
  - [🧱 Compound Data Types](#-compound-data-types)
    - [Lists(`list`)](#listslist)
    - [Tuples(`tuple`)](#tuplestuple)
    - [Dictionaries(`dict`)](#dictionariesdict)
    - [Sets(`set`)](#setsset)
  - [📐 Type Checking and Conversion](#-type-checking-and-conversion)
    - [`type()` function](#type-function)
    - [Type Conversion](#type-conversion)
  - [🔗 Mutability and Immutability](#-mutability-and-immutability)

## 📦 Variables

### What is a Variable?

Variables in Python are used to store data values. Unlike many other programming languages, Python does not require you to declare a variable’s type explicitly. A variable is created the moment you assign a value to it.

```python
x = 5 # x is a nickname for the memory location where 5 is stored
```

### Dynamic Typing

Python variables are dynamically typed, meaning you can reassign a variable to a different data type.

```python
x = 5 # x is an integer
x = "Hello, World!" # x is a string
```

> Under the hood, Python uses pointers to reference memory locations where data is stored. When you assign a variable to a value, you are essentially creating a pointer to the memory location where the value is stored.

### Naming Conventions and Best Practices

In Python, variable names should follow specific rules:

- Variable names must start with a letter (a-z, A-Z) or an underscore (`_`), followed by letters, numbers, or underscores.
- Variable names are case-sensitive (`var` and `Var` are different).
- Avoid using Python keywords as variable names (`class`, `for`, `if`, `etc`.).

Good practices:

- Use meaningful variable names (`num_students` instead of `n`).
- Use snake_case (all lowercase with underscores) for variable names (`student_name`).

## 🏷️ Constants

Although Python does not have a true constant type, the convention is to define constants using all-uppercase names:

```python
PI = 3.14159
PYTHON_VERSION = 3
```

> Other naming conventions will be covered in the [Style Guide](../additional-topics/style-guide.md) section.

## 🔢 Basic Data Types

### Integers(`int`)

Integers are whole numbers without a decimal point. They can be positive or negative. They have unlimited precision.

```python
x = 5
y = -10
```

### Floats(`float`)

Floating-point numbers are real numbers with a decimal point. They are used to represent values with fractional components.

```python
pi = 3.14159
height = 5.8
```

### Strings(`str`)

Strings are sequences of characters enclosed in single (`'`) or double (`"`) quotes.

```python
name = "Alice"
message = 'Hello, World!'
```

### Booleans(`bool`)

Booleans represent one of two values: `True` or `False`.

```python
u_r_handsome = False
i_love_python = True
```

## 🧱 Compound Data Types

Python supports several compound data types. Each will be covered in detail in later sections. Here, we provide a brief overview.

### Lists(`list`)

- Ordered collection of items.
- Any data type can be stored.
- Mutable (can be changed).

```python
fruits = ["apple", "banana", "cherry"]
```

### Tuples(`tuple`)

- Almost identical to lists.
- BUT, immutable (cannot be changed).

```python
coordinates = (5, 10, 10.3)
```

### Dictionaries(`dict`)

- Unordered collection of key-value pairs.
- Mutable (can be changed).

```python
person = {
    "name": "Jun",
    "age": 29,
    "city": "Seoul"
}
```

### Sets(`set`)

- Unordered collection of unique items.
- Mutable (can be changed).

```python
unique_numbers = {1, 2, 3, 4, 5}
```

## 📐 Type Checking and Conversion

Python allows you to check the type of a variable using the `type()` function and convert between different data types.

### `type()` function

To check the type of a variable:

```python
x = 5
print(type(x)) # <class 'int'>
```

### Type Conversion

You can convert between types using functions like `int()`, `str()`, `float()`, etc.

```python
x = 5
y = str(x) # "5"

z = 3.14
w = int(z) # 3, truncates the decimal part

# when it fails, it raises a ValueError
invalid_number = "Hello, World!"
int(invalid_number) # ValueError raised -> will be stopped here
```

More on type conversion in the [Type Conversion](./type-conversion.md) section.

## 🔗 Mutability and Immutability

- **Mutable Data Types**: Lists, Dictionaries, Sets
- **Immutable Data Types**: Integers, Floats, Strings, Tuples

> Under the hood:
> Mutable data types can be changed after they are created. When you modify a mutable object, Python changes the object in memory. They are passed by reference.
> Immutable data types cannot be changed after they are created. When you modify an immutable object, Python creates a new object in memory.

```python
# Immutable
x = 5
print(id(x)) # 140732674004048

x = 10
print(id(x)) # 140732674004208: Different memory location

# Mutable
y = [1, 2, 3]
print(id(y)) # 140732674004048

y.append(4)
print(id(y)) # 140732674004048: Same memory location
```
