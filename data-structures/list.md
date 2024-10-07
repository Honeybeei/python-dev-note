# 📜 Lists in Python

- [📜 Lists in Python](#-lists-in-python)
  - [🎯 What is a List?](#-what-is-a-list)
  - [🔑 Key Characteristics](#-key-characteristics)
  - [🎯 Creating Lists](#-creating-lists)
  - [🛠️ Common List Operations](#️-common-list-operations)
    - [1. Accessing Elements](#1-accessing-elements)
    - [2. Slicing Lists](#2-slicing-lists)
    - [3. Modifying Lists](#3-modifying-lists)
    - [4. Checking for Existence](#4-checking-for-existence)
    - [5. Iterating Over a List](#5-iterating-over-a-list)
    - [6. Length of a List](#6-length-of-a-list)
    - [7. Sorting Lists](#7-sorting-lists)
    - [8. Reversing Lists](#8-reversing-lists)
  - [🎨 List Comprehensions](#-list-comprehensions)
  - [🧰 Useful List Methods](#-useful-list-methods)
  - [🚀 Advanced List Features](#-advanced-list-features)
    - [1. Nested Lists](#1-nested-lists)
    - [2. Shallow vs. Deep Copy](#2-shallow-vs-deep-copy)
  - [🧠 Best Practices](#-best-practices)

## 🎯 What is a List?

A **list** in Python is a **mutable**, **ordered** collection of items. Lists can contain items of any data type, and the elements within the list can be modified after creation.

```python
# Example of a list
fruits = ["apple", "banana", "cherry"]
```

## 🔑 Key Characteristics

- **Ordered**: Elements have a specific order, and that order is maintained.
- **Mutable**: You can change, add, or remove items after the list is created.
- **Heterogeneous**: A list can contain elements of different types.

```python
# A list with different types of elements
mixed_list = [1, "Hello", 3.14, True]
```

## 🎯 Creating Lists

You can create a list using square brackets `[]` or with the built-in `list()` constructor.

```python
# Creating a list using square brackets
my_list = [1, 2, 3]

# Creating a list using the list() constructor
my_list = list((1, 2, 3))  # Note the double parentheses
```

## 🛠️ Common List Operations

### 1. Accessing Elements

You can access list elements by their index, starting from 0 for the first element, and using negative indexing to access elements from the end of the list.

```python
fruits = ["apple", "banana", "cherry"]
print(fruits[0])  # Output: apple
print(fruits[-1])  # Output: cherry
```

### 2. Slicing Lists

Use slicing to access a sublist by specifying a range of indices. The syntax is `[start:stop:step]`, where `start` is inclusive, and `stop` is exclusive.

```python
fruits = ["apple", "banana", "cherry", "date", "fig"]
print(fruits[1:4])  # Output: ['banana', 'cherry', 'date']
print(fruits[:3])   # Output: ['apple', 'banana', 'cherry']
```

### 3. Modifying Lists

Lists are mutable, meaning you can change their contents after they are created.

```python
# Change the second element
fruits[1] = "blueberry"
print(fruits)  # Output: ['apple', 'blueberry', 'cherry']
```

You can also use list methods to add or remove items:

- **`append(item)`**: Adds an item to the end of the list.
- **`insert(index, item)`**: Inserts an item at a specific index.
- **`remove(item)`**: Removes the first occurrence of the item.
- **`pop([index])`**: Removes and returns the item at the specified index (or the last item by default).

```python
fruits.append("elderberry")
fruits.insert(1, "banana")
print(fruits)  # Output: ['apple', 'banana', 'blueberry', 'cherry', 'elderberry']

fruits.remove("cherry")
print(fruits)  # Output: ['apple', 'banana', 'blueberry', 'elderberry']

last_fruit = fruits.pop()  # Removes 'elderberry'
```

### 4. Checking for Existence

Use the `in` keyword to check whether an item exists in a list.

```python
if "banana" in fruits:
    print("Yes, banana is in the list.")
```

### 5. Iterating Over a List

You can loop through the elements of a list using a `for` loop.

```python
for fruit in fruits:
    print(fruit)
```

### 6. Length of a List

Use the `len()` function to get the number of elements in a list.

```python
print(len(fruits))  # Output: 4
```

### 7. Sorting Lists

The `sort()` method sorts the list in ascending order by default. You can sort in descending order by passing `reverse=True`.

```python
numbers = [3, 1, 4, 1, 5, 9]
numbers.sort()
print(numbers)  # Output: [1, 1, 3, 4, 5, 9]

numbers.sort(reverse=True)
print(numbers)  # Output: [9, 5, 4, 3, 1, 1]
```

### 8. Reversing Lists

Use the `reverse()` method to reverse the order of elements in a list.

```python
fruits.reverse()
print(fruits)  # Output: ['elderberry', 'blueberry', 'banana', 'apple']
```

## 🎨 List Comprehensions

List comprehensions provide a concise way to create lists by using a single line of code to transform and filter elements from another list or iterable.

```python
# Create a list of squares from 0 to 9
squares = [x**2 for x in range(10)]
print(squares)  # Output: [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
```

You can also add conditions to list comprehensions.

```python
# Create a list of even numbers from 0 to 9
evens = [x for x in range(10) if x % 2 == 0]
print(evens)  # Output: [0, 2, 4, 6, 8]
```

## 🧰 Useful List Methods

Here’s a summary of other useful list methods:

| Method               | Description                                      |
|----------------------|--------------------------------------------------|
| `append(item)`       | Adds an item to the end of the list               |
| `extend(iterable)`   | Adds all the items from an iterable to the list   |
| `insert(index, item)`| Inserts an item at a specified index              |
| `remove(item)`       | Removes the first occurrence of the item          |
| `pop([index])`       | Removes and returns the item at the specified index |
| `clear()`            | Removes all elements from the list                |
| `index(item)`        | Returns the index of the first occurrence of the item |
| `count(item)`        | Returns the number of occurrences of the item     |
| `sort()`             | Sorts the list in ascending order                 |
| `reverse()`          | Reverses the order of elements in the list        |
| `copy()`             | Returns a shallow copy of the list                |

## 🚀 Advanced List Features

### 1. Nested Lists

A list can contain other lists as elements, allowing for the creation of complex, multi-dimensional data structures (e.g., matrices).

```python
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
print(matrix[0][1])  # Output: 2
```

### 2. Shallow vs. Deep Copy

When copying lists, it’s important to understand the difference between shallow and deep copies.

- **Shallow copy**: Copies the reference of the elements (not the elements themselves). Use the `copy()` method or slicing (`[:]`).

- **Deep copy**: Copies both the elements and any objects contained within the elements. Use the `copy` module’s `deepcopy()` function for this.

```python
import copy

original = [[1, 2, 3], [4, 5, 6]]
shallow = original.copy()
deep = copy.deepcopy(original)
```

## 🧠 Best Practices

- Use **list comprehensions** for concise, readable code when transforming data.
- Use **`append()`** instead of concatenation (`+`) when adding single elements to a list for better performance.
- Be cautious of modifying lists while iterating over them. It can cause unexpected behavior.

---

> ⬅️ **[Previous: Decorators](../functions/decorators.md)**
>
> ➡️ **[Next: Tuple](./tuple.md)**
>
> 🔝 **[Back to Top](#-lists-in-python)**
>
> 🏠 **[Home](../README.md)**
