# 📖 Dictionaries in Python

- [📖 Dictionaries in Python](#-dictionaries-in-python)
  - [🗝️ What is a Dictionary?](#️-what-is-a-dictionary)
  - [🔑 Key Characteristics](#-key-characteristics)
  - [🎯 Creating Dictionaries](#-creating-dictionaries)
  - [🛠️ Accessing Dictionary Elements](#️-accessing-dictionary-elements)
  - [🪚 Modifying Dictionaries](#-modifying-dictionaries)
    - [Adding or Updating Elements](#adding-or-updating-elements)
    - [Removing Elements](#removing-elements)
      - [`pop()`](#pop)
      - [`del`](#del)
      - [`popitem()`](#popitem)
      - [`clear()`](#clear)
  - [📋 Iterating Over Dictionaries](#-iterating-over-dictionaries)
  - [🔍 Checking Existence of Keys](#-checking-existence-of-keys)
  - [🧠 Advanced Dictionary Features](#-advanced-dictionary-features)
    - [1. Dictionary Comprehensions](#1-dictionary-comprehensions)
    - [2. Nested Dictionaries](#2-nested-dictionaries)
    - [3. Shallow vs Deep Copy](#3-shallow-vs-deep-copy)
  - [😏 Dictionary Cheat Sheet](#-dictionary-cheat-sheet)
    - [🔧 Creating and Accessing Dictionaries](#-creating-and-accessing-dictionaries)
    - [🔄 Modifying Dictionaries](#-modifying-dictionaries-1)
    - [🔍 Searching and Checking Keys](#-searching-and-checking-keys)
    - [🧹 Utility Methods](#-utility-methods)

## 🗝️ What is a Dictionary?

A dictionary in Python is an unordered, mutable collection of key-value pairs, where each key is unique. Dictionaries are used to store data values like a map, where the ket acts as an identifier for value.

```python
person = {
    "name": "Alice",
    "age": 30,
    "city": "New York"
}
```

> In the example above, `"name"`, `"age"`, and `"city"` are keys, and `"Alice"`, `30`, and `"New York"` are their corresponding values.

## 🔑 Key Characteristics

- **Unordered**: The items in a dictionary do not have a defined order.
- **Mutable**: You can change, add, or remove items after the dictionary is created.
- **Unique keys**: Keys must be unique, but values can be duplicated.
- **Keys must be immutable**: They can be of any immutable type (e.g., strings, numbers, or tuples).

## 🎯 Creating Dictionaries

You can create a dictionary using curly braces `{}` or with the built-in `dict()` constructor.

```python
# Creating a dictionary using curly braces
person = {
    "name": "Alice",
    "age": 30,
    "city": "New York"
}

# Creating a dictionary using the dict() constructor
person = dict(name="Alice", age=30, city="New York")

# Creating an empty dictionary
empty_dict = {}
```

## 🛠️ Accessing Dictionary Elements

You can access a value by referring to its key inside square brackets or using the `get()` method.

```python
person = {"name": "Alice", "age": 25}

# Accessing using key
print(person["name"])  # Output: Alice

# Accessing using get() method
print(person.get("age"))  # Output: 25
```

> ⚠️ If you try to access a key that doesn’t exist using square brackets, Python raises a `KeyError`. The `get()` method returns `None` instead if the key is not found.

## 🪚 Modifying Dictionaries

### Adding or Updating Elements

You can add a new key-value pair to a dictionary or update an existing value.

```python
person = {"name": "Alice", "age": 25}

# Adding a new key-value pair
person["city"] = "New York"

# Updating an existing value
person["age"] = 30
```

### Removing Elements

#### `pop()`

- `pop()` method removes the item with the specified key and returns its value.
- When the key is not found, it raises a `KeyError`.
- You can also provide a default value to return if the key is not found.

```python
person = {"name": "Alice", "age": 25}

# Removing the "age" key
age = person.pop("age") # Returns 25
city = person.pop("city", "Unknown") # Returns "Unknown" if key is not found
height = person.pop("height") # Raises KeyError
```

#### `del`

- `del` keyword deletes the element with the specified key.
- It raises a `KeyError` if the key is not found.

```python
person = {
    "name": "Alice",
    "age": 25,
    "city": "New York",
    "height": 170,
}

# Deleting the "age" key
del person["age"] # Removes the "age" key-value pair
del person["weight"] # Raises KeyError
```

#### `popitem()`

- `popitem()` method removes and returns the last inserted key-value pair.
- If the dictionary is empty, it raises a `KeyError`.

```python
person = {
    "name": "Alice",
    "age": 25,
    "city": "New York",
    "height": 170,
}

# Removing the last inserted key-value pair
key, value = person.popitem() # Returns ("height", 170)
```

#### `clear()`

- `clear()` method removes all items from the dictionary.

```python
person = {
    "name": "Alice",
    "age": 25,
    "city": "New York",
    "height": 170,
}

person.clear() # Removes all items from the dictionary
print(person) # Output: {}
```

## 📋 Iterating Over Dictionaries

You can iterate over a dictionary using a `for` loop to access its keys, values, or key-value pairs.

```python
# Looping through keys
for key in person:
    print(key)

# Looping through values
for value in person.values():
    print(value)

# Looping through key-value pairs
for key, value in person.items():
    print(key, value)
```

## 🔍 Checking Existence of Keys

You can check if a key exists in a dictionary using the `in` keyword.

```python
person = {"name": "Alice", "age": 25}

if "age" in person:
    print("Age is present")
```

## 🧠 Advanced Dictionary Features

### 1. Dictionary Comprehensions

Like list comprehensions, you can create dictionaries using dictionary comprehensions.

```python
squares = {x: x*x for x in range(1, 6)}
print(squares)  # Output: {1: 1, 2: 4, 3: 9, 4: 16, 5: 25}
```

### 2. Nested Dictionaries

Dictionaries can contain other dictionaries as values.🪆

```python
person = {
    "name": "Alice",
    "age": 30,
    "address": {
        "street": "123 Main St",
        "city": "New York"
    }
}
```

> In the example above, the `"address"` key contains another dictionary with `"street"` and `"city"` keys.

### 3. Shallow vs Deep Copy

- **Shallow Copy**: A shallow copy creates a new dictionary object but does not create new objects for the values. Changes to the values in the original dictionary will reflect in the copied dictionary.
- **Deep Copy**: A deep copy creates a new dictionary object and new objects for the values. Changes to the values in the original dictionary will not reflect in the copied dictionary.

```python
import copy

person = {
    "name": "Alice",
    "age": 30,
    "address": {
        "street": "123 Main St",
        "city": "New York"
    }
}

# Shallow copy
shallow_copy = copy.copy(person)

# Deep copy
deep_copy = copy.deepcopy(person)

person["address"]["city"] = "Chicago"
print(shallow_copy["address"]["city"])  # Output: Chicago -> Object created by shallow copy is referencing the same address object. Therefore, changes in the original dictionary are reflected in the copied dictionary.
print(deep_copy["address"]["city"])  # Output: New York -> Object created by deep copy is independent of the original dictionary. Therefore, changes in the original dictionary are not reflected in the copied dictionary.
```

> ⚠️ Be cautious when using shallow or deep copies, as they can lead to unexpected behavior if not used correctly.

## 😏 Dictionary Cheat Sheet

### 🔧 Creating and Accessing Dictionaries

| Method/Syntax                    | Input (Parameters)                             | Return Value                           | Description                                                                                     | Example                                          |
|----------------------------------|------------------------------------------------|----------------------------------------|-------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `{}`                             | Key-value pairs (optional)                     | Dictionary                             | Creates an empty dictionary or a dictionary with specified key-value pairs.                     | `{"name": "Alice", "age": 25}`                   |
| `dict()`                         | Iterable of key-value pairs                    | Dictionary                             | Creates a dictionary from an iterable of key-value pairs or from keyword arguments.              | `dict(name="Alice", age=25)`                     |
| `dict[key]`                      | `key`                                          | Value associated with key              | Accesses the value associated with the specified key.                                            | `person["name"]`                                 |
| `dict.get(key, default)`         | `key`, `default` (optional)                    | Value or `default`                     | Returns the value for the specified key, or `default` if the key is not found.                   | `person.get("age", 0)`                           |

### 🔄 Modifying Dictionaries

| Method/Syntax                    | Input (Parameters)                             | Return Value                           | Description                                                                                     | Example                                          |
|----------------------------------|------------------------------------------------|----------------------------------------|-------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `dict[key] = value`              | `key`, `value`                                 | None                                   | Adds a new key-value pair or updates the value of an existing key.                               | `person["city"] = "New York"`                    |
| `update(dict)`                   | Another dictionary or iterable of key-value pairs | None                                 | Updates the dictionary with elements from another dictionary or iterable of key-value pairs.     | `person.update({"age": 26})`                     |
| `pop(key, default)`              | `key`, `default` (optional)                    | Removed value or `default`             | Removes the key and returns its value, or `default` if the key is not found.                     | `person.pop("age", 0)`                           |
| `popitem()`                      | None                                           | Tuple of (key, value)                  | Removes and returns the last inserted key-value pair.                                            | `person.popitem()`                               |
| `del dict[key]`                  | `key`                                          | None                                   | Deletes the key-value pair with the specified key.                                               | `del person["age"]`                              |
| `clear()`                        | None                                           | None                                   | Removes all elements from the dictionary.                                                        | `person.clear()`                                 |

### 🔍 Searching and Checking Keys

| Method/Syntax                    | Input (Parameters)                             | Return Value                           | Description                                                                                     | Example                                          |
|----------------------------------|------------------------------------------------|----------------------------------------|-------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `key in dict`                    | `key`                                          | Boolean                                | Returns `True` if the key exists in the dictionary, otherwise `False`.                           | `"age" in person`                                |
| `dict.keys()`                    | None                                           | `dict_keys` object                     | Returns a view object containing the dictionary's keys.                                          | `person.keys()`                                  |
| `dict.values()`                  | None                                           | `dict_values` object                   | Returns a view object containing the dictionary's values.                                        | `person.values()`                                |
| `dict.items()`                   | None                                           | `dict_items` object                    | Returns a view object displaying the dictionary's key-value pairs.                               | `person.items()`                                 |

### 🧹 Utility Methods

| Method/Syntax                    | Input (Parameters)                             | Return Value                           | Description                                                                                     | Example                                          |
|----------------------------------|------------------------------------------------|----------------------------------------|-------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `len(dict)`                      | Dictionary                                     | Integer                                | Returns the number of key-value pairs in the dictionary.                                         | `len(person)`                                    |
| `copy()`                         | None                                           | Shallow copy of the dictionary         | Returns a shallow copy of the dictionary.                                                        | `new_dict = person.copy()`                       |
| `fromkeys(keys, value)`          | `keys`, `value` (optional)                     | New dictionary                         | Creates a dictionary with the specified keys, all assigned to the same value.                    | `dict.fromkeys(["a", "b", "c"], 0)`              |
| `setdefault(key, default)`       | `key`, `default` (optional)                    | Value                                  | Returns the value of the key if it exists, otherwise inserts the key with the default value.      | `person.setdefault("age", 30)`                   |
| `sum(dict.values())`             | Dictionary with numeric values                 | Sum of values                          | Returns the sum of all values in the dictionary (if values are numeric).                         | `sum(person.values())`                           |

---

> ⬅️ **[Previous: Tuples](./tuples.md)**
>
> ➡️ **[Next: Sets](./sets.md)**
>
> 🔝 **[Back to Top](#-dictionaries-in-python)**
>
> 🏠 **[Home](../README.md)**
