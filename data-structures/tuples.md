# 📚 Tuples in Python

- [📚 Tuples in Python](#-tuples-in-python)
  - [🎯 What is a Tuple?](#-what-is-a-tuple)
  - [🔑 Key Characteristics](#-key-characteristics)
  - [🎯 Creating Tuples](#-creating-tuples)
    - [Tuple Packing and Unpacking](#tuple-packing-and-unpacking)
  - [🛠️ Common Tuple Operations](#️-common-tuple-operations)
    - [1. Accessing Elements](#1-accessing-elements)
    - [2. Tuple Slicing](#2-tuple-slicing)
    - [3. Checking for Existence](#3-checking-for-existence)
    - [4. Iterating Over Tuples](#4-iterating-over-tuples)
    - [5. Length of a Tuple](#5-length-of-a-tuple)
  - [🧰 Useful Tuple Methods](#-useful-tuple-methods)
  - [🚀 Advanced Tuple Features](#-advanced-tuple-features)
    - [1. Nested Tuples](#1-nested-tuples)
    - [2. Tuples as Keys in Dictionaries](#2-tuples-as-keys-in-dictionaries)
  - [🔗 Tuples vs Lists](#-tuples-vs-lists)
  - [🧠 Best Practices](#-best-practices)

## 🎯 What is a Tuple?

A **tuple** in Python is an **immutable**, **ordered** collection of elements. Once created, the items within a tuple **cannot be changed**, making tuples useful for data that should not be modified. They are often used to group related data together, like coordinates or configurations.

```python
# Example of a tuple
coordinates = (10.0, 20.5)
```

## 🔑 Key Characteristics

- **Ordered**: Elements in a tuple maintain their order, just like lists.
- **Immutable**: Once a tuple is created, its elements cannot be modified, added, or removed.
- **Heterogeneous**: Tuples can contain elements of different data types.
- **Indexed**: You can access elements in a tuple by their index, starting at 0.

```python
# Accessing elements
coordinates = (10.0, 20.5)
print(coordinates[0])  # Output: 10.0
```

> Tuples are often used to represent fixed collections of related values, like a person's name and age, or database records.

## 🎯 Creating Tuples

Tuples are defined using parentheses `()` and can contain any number of elements.

```python
# Creating a tuple with multiple elements
person = ("Alice", 30)

# Creating a tuple with a single element (must include a comma)
single_element = (42,)
```

### Tuple Packing and Unpacking

You can "pack" multiple values into a tuple and "unpack" them into individual variables.

```python
# Tuple Packing
person = ("Alice", 30)

# Tuple Unpacking
name, age = person
print(name)  # Output: Alice
print(age)   # Output: 30
```

This feature is useful for functions that return multiple values.

## 🛠️ Common Tuple Operations

### 1. Accessing Elements

Like lists, tuple elements can be accessed by their index. You can also use negative indexing to access elements from the end of the tuple.

```python
coordinates = (10.0, 20.5)
print(coordinates[1])    # Output: 20.5
print(coordinates[-1])   # Output: 20.5
```

### 2. Tuple Slicing

Tuples support slicing, allowing you to extract a sub-tuple by specifying a range of indices. The syntax is `[start:stop:step]`.

```python
numbers = (1, 2, 3, 4, 5)
print(numbers[1:4])  # Output: (2, 3, 4)
```

### 3. Checking for Existence

You can check whether an item exists in a tuple using the `in` keyword.

```python
numbers = (1, 2, 3)
print(2 in numbers)  # Output: True
```

### 4. Iterating Over Tuples

Tuples can be iterated over using a `for` loop, just like lists.

```python
fruits = ("apple", "banana", "cherry")
for fruit in fruits:
    print(fruit)
```

### 5. Length of a Tuple

Use the `len()` function to get the number of elements in a tuple.

```python
numbers = (1, 2, 3)
print(len(numbers))  # Output: 3
```

## 🧰 Useful Tuple Methods

While tuples are immutable and have fewer built-in methods compared to lists, they still provide some useful functionalities.

| Method        | Description                                      |
|---------------|--------------------------------------------------|
| `count(item)` | Returns the number of times an item appears in the tuple |
| `index(item)` | Returns the index of the first occurrence of the item |

```python
numbers = (1, 2, 3, 2, 4)
print(numbers.count(2))  # Output: 2
print(numbers.count(5))  # Output: 0
print(numbers.index(4))  # Output: 4
print(numbers.index(2))  # Output: 1
```

## 🚀 Advanced Tuple Features

### 1. Nested Tuples

Tuples can contain other tuples as elements, allowing for complex, multi-level data structures.

```python
nested_tuple = ((1, 2), (3, 4), (5, 6))
print(nested_tuple[1])  # Output: (3, 4)
```

### 2. Tuples as Keys in Dictionaries

Since tuples are immutable, they can be used as keys in dictionaries, unlike lists.

```python
coordinates = {(0, 0): "Origin", (1, 1): "Point A"}
print(coordinates[(1, 1)])  # Output: Point A
```

## 🔗 Tuples vs Lists

| Feature        | Tuple                          | List                         |
|----------------|--------------------------------|------------------------------|
| **Mutability** | Immutable                      | Mutable                      |
| **Syntax**     | `()`                           | `[]`                         |
| **Performance**| Slightly faster for fixed data | Slower for frequent changes  |
| **Use Case**   | Fixed collections of items     | Dynamic collections of items |

Tuples are ideal when you have a fixed collection of items that should not be modified, while lists are more flexible when you need a collection that can grow or change.

## 🧠 Best Practices

- Use tuples when the collection of values should remain constant.
- Pack and unpack tuples for clean, readable code when working with multiple return values.
- Consider using tuples as dictionary keys when you need to map pairs of values to something else.

---

> ⬅️ **[Previous: Lists](./lists.md)**
>
> ➡️ **[Next: Dictionaries](./dictionaries.md)**
>
> 🔝 **[Back to Top](#-tuples-in-python)**
>
> 🏠 **[Home](../README.md)**
