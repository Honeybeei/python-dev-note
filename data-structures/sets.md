# 🔢 Sets in Python

## 🧩 What is a Set?

A **set** in Python is an **unordered**, **mutable** collection of unique elements. Sets are useful when you want to store a collection of items but do not care about the order or duplicates.

```python
# Creating a set
my_set = {1, 2, 3, 4, 5}
```

## 🔑 Key Characteristics of Sets

- **Unordered**: The elements in a set do not follow any specific order.
- **Mutable**: You can add or remove items after the set is created.
- **Unique Elements**: Sets do not allow duplicate values.

```python
# Sets automatically remove duplicates
my_set = {1, 2, 2, 3, 4}
print(my_set)  # Output: {1, 2, 3, 4}
```

## 🎯 Creating Sets

You can create a set by using curly braces `{}` or the built-in `set()` function. Note that creating an empty set must use the `set()` function, as `{}` creates an empty dictionary.

```python
# Creating a set with elements
fruits = {"apple", "banana", "cherry"}

# Creating an empty set
empty_set = set()
```

## 🛠️ Common Set Operations

### 1. Adding Elements

You can add elements to a set using the `add()` method. If the element already exists, it won’t be added again (since sets only store unique items).

```python
my_set = {1, 2, 3}
my_set.add(4)
print(my_set)  # Output: {1, 2, 3, 4}
```

### 2. Removing Elements

You can remove elements from a set using the `remove()` or `discard()` methods. The `remove()` method raises an error if the element does not exist, while `discard()` does not.

```python
# Using remove()
my_set.remove(2)  # Removes 2

# Using discard() (safe even if the element doesn't exist)
my_set.discard(5)  # No error even though 5 is not in the set
```

### 3. Set Membership

You can check if an item exists in a set using the `in` keyword.

```python
if "apple" in fruits:
    print("Apple is in the set.")
```

### 4. Set Length

To find the number of elements in a set, use the `len()` function.

```python
print(len(fruits))  # Output: 3
```

## 🔄 Set Operations

Sets support a wide range of mathematical operations such as union, intersection, difference, and symmetric difference.

### 1. Union (`|` or `union()`)

Combines all elements from both sets, removing duplicates.

```python
set1 = {1, 2, 3}
set2 = {3, 4, 5}

# Using |
union_set = set1 | set2
print(union_set)  # Output: {1, 2, 3, 4, 5}

# Using union()
union_set = set1.union(set2)
```

### 2. Intersection (`&` or `intersection()`)

Returns a set of elements that are present in both sets.

```python
intersection_set = set1 & set2
print(intersection_set)  # Output: {3}

# Using intersection()
intersection_set = set1.intersection(set2)
```

### 3. Difference (`-` or `difference()`)

Returns a set of elements that are in the first set but not in the second.

```python
difference_set = set1 - set2
print(difference_set)  # Output: {1, 2}

# Using difference()
difference_set = set1.difference(set2)
```

### 4. Symmetric Difference (`^` or `symmetric_difference()`)

Returns a set of elements that are in either set, but not in both (i.e., exclusive OR).

```python
symmetric_diff_set = set1 ^ set2
print(symmetric_diff_set)  # Output: {1, 2, 4, 5}

# Using symmetric_difference()
symmetric_diff_set = set1.symmetric_difference(set2)
```

## 🚀 Advanced Set Features

### 1. Frozen Sets

A **frozen set** is an immutable version of a set. You can create a frozen set using the `frozenset()` function. Once created, elements in a frozen set cannot be added or removed.

```python
frozen = frozenset([1, 2, 3, 4])
# frozen.add(5)  # Error: Cannot modify a frozen set
```

Frozen sets are useful when you need a constant, unchangeable collection of items.

### 2. Set Comparisons

Sets can be compared using comparison operators to check for subset, superset, and equality relationships.

- **Subset (`<=`)**: Checks if all elements of one set are in another.
- **Superset (`>=`)**: Checks if one set contains all elements of another.
- **Equality (`==`)**: Checks if both sets contain the same elements.

```python
set1 = {1, 2}
set2 = {1, 2, 3}

print(set1 <= set2)  # True: set1 is a subset of set2
print(set2 >= set1)  # True: set2 is a superset of set1
print(set1 == set2)  # False: Sets are not equal
```

## 🧠 Best Practices

- Use sets when you need **unique items** or are performing **mathematical set operations**.
- Since sets are unordered, avoid using sets when **order matters**.
- Use frozen sets for **constant** collections that should not be modified.
- For faster membership checks, sets are highly efficient compared to lists.

## 😏 Set Cheat Sheet

### 🔧 Creating and Accessing Sets

| Method/Syntax                    | Input (Parameters)                              | Return Value                            | Description                                                                                      | Example                                          |
|----------------------------------|-------------------------------------------------|-----------------------------------------|--------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `set()`                          | Iterable (optional)                             | Set                                     | Creates a new set from an iterable or an empty set if no argument is provided.                    | `set([1, 2, 3])`                                 |
| `{}`                             | Elements (optional)                             | Set                                     | Creates a new set with the specified elements.                                                    | `{1, 2, 3}`                                      |
| `set.add(item)`                  | `item`                                          | None                                    | Adds an element to the set.                                                                      | `my_set.add(4)`                                  |
| `set.remove(item)`               | `item`                                          | None (raises `KeyError` if not found)   | Removes the specified element from the set.                                                       | `my_set.remove(3)`                               |
| `set.discard(item)`              | `item`                                          | None (no error if item is not found)    | Removes the specified element from the set, but does not raise an error if it is not found.       | `my_set.discard(5)`                              |

### 🔄 Modifying Sets

| Method/Syntax                    | Input (Parameters)                              | Return Value                            | Description                                                                                      | Example                                          |
|----------------------------------|-------------------------------------------------|-----------------------------------------|--------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `set.update(iterable)`           | Iterable                                        | None                                    | Adds elements from the specified iterable to the set.                                             | `my_set.update([4, 5, 6])`                       |
| `set.pop()`                      | None                                            | Removed element                        | Removes and returns an arbitrary element from the set.                                            | `my_set.pop()`                                   |
| `set.clear()`                    | None                                            | None                                    | Removes all elements from the set.                                                                | `my_set.clear()`                                 |

### 🔍 Searching and Checking Membership

| Method/Syntax                    | Input (Parameters)                              | Return Value                            | Description                                                                                      | Example                                          |
|----------------------------------|-------------------------------------------------|-----------------------------------------|--------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `item in set`                    | `item`                                          | Boolean                                 | Returns `True` if the item exists in the set, otherwise `False`.                                  | `3 in my_set`                                    |
| `len(set)`                       | Set                                             | Integer                                 | Returns the number of elements in the set.                                                        | `len(my_set)`                                    |

### 🔄 Set Operations

| Method/Syntax                    | Input (Parameters)                              | Return Value                            | Description                                                                                      | Example                                          |
|----------------------------------|-------------------------------------------------|-----------------------------------------|--------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `set.union(other_set)`           | Another set or iterable                         | New set                                | Returns the union of two sets (all unique elements from both sets).                              | `set1.union(set2)`                               |
| `set.intersection(other_set)`    | Another set or iterable                         | New set                                | Returns the intersection of two sets (only elements that are in both sets).                      | `set1.intersection(set2)`                        |
| `set.difference(other_set)`      | Another set or iterable                         | New set                                | Returns the difference of two sets (elements in the first set but not in the second).             | `set1.difference(set2)`                          |
| `set.symmetric_difference(other_set)` | Another set or iterable                      | New set                                | Returns the symmetric difference of two sets (elements in either set, but not in both).           | `set1.symmetric_difference(set2)`                |
| `set.issubset(other_set)`        | Another set                                     | Boolean                                | Returns `True` if the set is a subset of another set.                                             | `set1.issubset(set2)`                            |
| `set.issuperset(other_set)`      | Another set                                     | Boolean                                | Returns `True` if the set is a superset of another set.                                           | `set1.issuperset(set2)`                          |
| `set.isdisjoint(other_set)`      | Another set                                     | Boolean                                | Returns `True` if the two sets have no elements in common.                                        | `set1.isdisjoint(set2)`                          |

### 🧹 Utility Methods

| Method/Syntax                    | Input (Parameters)                              | Return Value                            | Description                                                                                      | Example                                          |
|----------------------------------|-------------------------------------------------|-----------------------------------------|--------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `copy()`                         | None                                            | Shallow copy of the set                 | Returns a shallow copy of the set.                                                                | `new_set = my_set.copy()`                        |
| `set()`                          | Iterable                                        | Set                                     | Converts an iterable into a set (removing duplicates).                                            | `set([1, 2, 2, 3])`                              |

---

> ⬅️ **[Previous: Dictionaries](./dictionaries.md)**
>
> ➡️ **[Next: Advanced Data Structures](./advanced-data-structures.md)**
>
> 🔝 **[Back to Top](#-sets-in-python)**
>
> 🏠 **[Home](../README.md)**
