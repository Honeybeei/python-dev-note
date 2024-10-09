# 📚 Advanced Data Structures in Python

- [📚 Advanced Data Structures in Python](#-advanced-data-structures-in-python)
  - [🔍 Introduction](#-introduction)
  - [🧰 `namedtuple`](#-namedtuple)
    - [💡 Use Case:](#-use-case)
    - [Example:](#example)
  - [🔄 `deque`](#-deque)
    - [💡 Use Case:](#-use-case-1)
    - [Example:](#example-1)
  - [🌟 `defaultdict`](#-defaultdict)
    - [💡 Use Case:](#-use-case-2)
    - [Example:](#example-2)
  - [📜 `OrderedDict`](#-ordereddict)
    - [💡 Use Case:](#-use-case-3)
    - [Example:](#example-3)
  - [🔢 `Counter`](#-counter)
    - [💡 Use Case:](#-use-case-4)
    - [Example:](#example-4)
  - [🔗 `ChainMap`](#-chainmap)
    - [💡 Use Case:](#-use-case-5)
    - [Example:](#example-5)
  - [🐍 `heapq`](#-heapq)
    - [💡 Use Case:](#-use-case-6)
    - [Example:](#example-6)
  - [🔖 Summary](#-summary)

## 🔍 Introduction

Advanced data structures are crucial when working with large datasets or solving complex problems efficiently. Python offers several built-in data structures that provide unique advantages beyond basic lists, tuples, dictionaries, and sets. In this chapter, we'll explore **namedtuples**, **deque**, **defaultdict**, **OrderedDict**, **Counter**, **ChainMap**, and **heapq**. Each of these structures has specific use cases where they outperform general-purpose data structures in terms of efficiency or readability.

## 🧰 `namedtuple`

The `namedtuple` function from the `collections` module creates tuple-like objects with named fields. This makes your code more readable by allowing you to refer to elements by name instead of by index.

### 💡 Use Case:

- Storing immutable data with named fields like records or fixed sets of properties.

### Example:

```python
from collections import namedtuple

# Define a namedtuple to represent a Point in 2D space
Point = namedtuple('Point', ['x', 'y'])
point = Point(3, 4)

print(point.x)  # Output: 3
print(point.y)  # Output: 4
```

> `namedtuple` is particularly useful when you want the simplicity of a tuple but also want descriptive names for the data fields.

## 🔄 `deque`

A `deque` (pronounced "deck") is a **double-ended queue** from the `collections` module that allows for fast appending and popping from both ends. It is more efficient than lists for this purpose.

### 💡 Use Case:

- Implementing queues or stacks that require frequent insertions or deletions from both ends.

### Example:

```python
from collections import deque

# Create a deque and perform operations
queue = deque([1, 2, 3])
queue.append(4)  # Append to the right
queue.appendleft(0)  # Append to the left

print(queue)  # Output: deque([0, 1, 2, 3, 4])
queue.pop()  # Removes 4
queue.popleft()  # Removes 0
```

> `deque` provides O(1) complexity for append and pop operations, making it a great choice for implementing efficient queues.

## 🌟 `defaultdict`

The `defaultdict` is an enhanced version of a dictionary that automatically initializes values for new keys using a factory function.

### 💡 Use Case:

- Avoiding key errors when working with dictionaries that need default values, such as aggregating counts or lists.

### Example:

```python
from collections import defaultdict

# Initialize a defaultdict with int as the default factory function
word_counts = defaultdict(int)
words = ['apple', 'banana', 'apple', 'orange', 'banana', 'apple']

for word in words:
    word_counts[word] += 1

print(word_counts)  # Output: defaultdict(<class 'int'>, {'apple': 3, 'banana': 2, 'orange': 1})
```

> `defaultdict` eliminates the need to check whether a key already exists before modifying its value.

## 📜 `OrderedDict`

An `OrderedDict` is a dictionary subclass that maintains the order of items as they were inserted. While Python 3.7+ dictionaries maintain order by default, `OrderedDict` provides additional features like reversing the order.

### 💡 Use Case:

- Keeping track of the insertion order explicitly and needing features like reordering or reversing.

### Example:

```python
from collections import OrderedDict

# Create an OrderedDict
ordered_dict = OrderedDict()
ordered_dict['apple'] = 3
ordered_dict['banana'] = 2
ordered_dict['cherry'] = 5

print(ordered_dict)  # Output: OrderedDict([('apple', 3), ('banana', 2), ('cherry', 5)])
```

> `OrderedDict` can be useful when iterating over items in the order they were added matters for your use case.

## 🔢 `Counter`

`Counter` is a subclass of `dict` designed for counting hashable objects. It is particularly useful for counting occurrences of items in a collection.

### 💡 Use Case:

- Getting frequency counts of elements in a list or iterable.

### Example:

```python
from collections import Counter

# Count occurrences of elements in a list
nums = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4]
num_counts = Counter(nums)

print(num_counts)  # Output: Counter({4: 4, 3: 3, 2: 2, 1: 1})
print(num_counts.most_common(2))  # Output: [(4, 4), (3, 3)]
```

> `Counter` makes it easy to generate frequency distributions and find the most common items.

## 🔗 `ChainMap`

`ChainMap` is used to combine multiple dictionaries into a single view, allowing you to treat them as one unit without copying data.

### 💡 Use Case:

- Merging multiple dictionaries without creating a new one, useful when dealing with scopes or configuration.

### Example:

```python
from collections import ChainMap

# Combine two dictionaries using ChainMap
dict1 = {'a': 1, 'b': 2}
dict2 = {'b': 3, 'c': 4}
combined = ChainMap(dict1, dict2)

print(combined['b'])  # Output: 2 (from dict1)
print(combined['c'])  # Output: 4 (from dict2)
```

> `ChainMap` allows for efficient lookup while keeping the original dictionaries unchanged.

## 🐍 `heapq`

The `heapq` module provides functions to implement a heap queue (priority queue), which can efficiently keep track of the smallest (or largest) elements.

### 💡 Use Case:

- Finding the n smallest or largest elements in a dataset or implementing a priority queue.

### Example:

```python
import heapq

# Create a list and transform it into a heap
nums = [5, 7, 9, 1, 3]
heapq.heapify(nums)
print(nums)  # Output: [1, 3, 9, 7, 5] (heap order)

# Push and pop elements
heapq.heappush(nums, 4)
print(nums)  # Output: [1, 3, 4, 7, 5, 9]
smallest = heapq.heappop(nums)
print(smallest)  # Output: 1
```

> `heapq` is useful for implementing priority queues and ensuring efficient retrieval of the smallest elements.

## 🔖 Summary

- **`namedtuple`**: Named fields for tuples, adds readability.
- **`deque`**: Efficient double-ended queue, ideal for append/pop operations.
- **`defaultdict`**: Dictionary with default values to avoid key errors.
- **`OrderedDict`**: Maintains item order, useful for explicit control over ordering.
- **`Counter`**: Easily count elements in an iterable, find most common elements.
- **`ChainMap`**: Treat multiple dictionaries as one without copying data.
- **`heapq`**: Efficiently manage a priority queue.

---

> ⬅️ **[Previous: Sets](./sets.md)**
>
> ➡️ **[Next: Classes and Objects](../oop/classes-and-objects.md)**
>
> 🔝 **[Back to Top](#-advanced-data-structures-in-python)**
>
> 🏠 **[Home](../README.md)**
