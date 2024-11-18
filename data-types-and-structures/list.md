# 📋 List

- [📋 List](#-list)
  - [❓ What is a List?](#-what-is-a-list)
  - [📝 Creating a List](#-creating-a-list)
    - [🔲 Using `[]`](#-using-)
    - [🔧 Using `list()` constructor](#-using-list-constructor)
    - [🔄 Using `list` comprehension](#-using-list-comprehension)
  - [➕ Adding Elements](#-adding-elements)
    - [📌 `append()`](#-append)
    - [� `insert()`](#-insert)
    - [🎢 `extend()`](#-extend)
  - [➖ Removing Elements](#-removing-elements)
  - [🔍 Finding Elements and Counting](#-finding-elements-and-counting)
  - [🔄 Iterating List](#-iterating-list)

## ❓ What is a List?

- List is a **collection** of items.
- It is an **ordered** collection of items. Which means the items have a defined order and the items can be accessed using their index.
- It is a **mutable** data type. The address of the list remains the same even if the elements are changed.
- It is a **heterogeneous** data type. It can store elements of different data types.

```python
dummy_list = ['apple', 1, 3.14] # List with elements of different data types

# Accessing elements of a list using index
print(dummy_list[0]) # apple

# Memory address of the list remains the same
before_change = id(dummy_list)
dummy_list.append('banana')
after_change = id(dummy_list)

print(before_change == after_change) # True
```

## 📝 Creating a List

### 🔲 Using `[]`

```python
# Empty List
empty_list = []

# List with elements
fruits = ['apple', 'banana', 'cherry']
```

### 🔧 Using `list()` constructor

```python
# Empty List
empty_list = list()

# List with elements
fruits = list(['apple', 'banana', 'cherry'])
```

### 🔄 Using `list` comprehension

```python
# List of squares of numbers from 1 to 5
squares = [i**2 for i in range(1, 6)]
```

## ➕ Adding Elements

### 📌 `append()`

- **syntax**: `list.append(element)`

```python
fruits = ['apple', 'banana', 'cherry']

fruits.append('date')
print(fruits) # ['apple', 'banana', 'cherry', 'date']
```

### 👇 `insert()`

- **syntax**: `list.insert(index, element)`
- Inserts the element at the specified index.

```python
fruits = ['apple', 'cherry', 'date']
fruits.insert(1, 'banana')
print(fruits) # ['apple', 'banana', 'cherry', 'date']
```

### 🎢 `extend()`

- **syntax**: `list.extend(iterable)`
- Adds the elements of the iterable(list, tuple, string...) to the list.

```python
fruits = ['apple', 'banana']
fruits.extend(['cherry', 'date']) # adding elements of the list(input) to the fruits list
print(fruits) # ['apple', 'banana', 'cherry', 'date']
```

## ➖ Removing Elements

## 🔍 Finding Elements and Counting

## 🔄 Iterating List