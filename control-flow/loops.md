# 🔄 Loops (`for`, `while`)

- [🔄 Loops (`for`, `while`)](#-loops-for-while)
  - [📚 Introduction to Loops](#-introduction-to-loops)
  - [🔁 `for` Loops](#-for-loops)
    - [Basic Syntax](#basic-syntax)
    - [Iterating Over Sequences](#iterating-over-sequences)
      - [Iterating over a list\*\*](#iterating-over-a-list)
      - [Iterating over a string](#iterating-over-a-string)
    - [Using `range()` with `for` Loops](#using-range-with-for-loops)
    - [Nested `for` Loops](#nested-for-loops)
    - [Looping with `enumerate()`](#looping-with-enumerate)
    - [Looping over Dictionaries](#looping-over-dictionaries)
  - [🔄 `while` Loops](#-while-loops)
    - [Basic Syntax](#basic-syntax-1)
    - [Examples of `while` Loops](#examples-of-while-loops)
    - [Avoiding Infinite Loops](#avoiding-infinite-loops)
  - [🛠 Best Practices](#-best-practices)
  - [🧠 Key Considerations](#-key-considerations)

## 📚 Introduction to Loops

Loops are fundamental in programming, allowing you to execute a block of code multiple times without rewriting it. They are particularly useful for tasks like iterating over items in a collection, repeating operations until a condition is met, or automating repetitive tasks.

Python provides two primary loop constructs:

- **`for` loops**: Used for iterating over a sequence (like a list, tuple, or string) or other iterable objects.
- **`while` loops**: Execute a set of statements as long as a condition is true.

Understanding how to use loops effectively will greatly enhance your ability to write efficient and concise code.

## 🔁 `for` Loops

### Basic Syntax

A `for` loop is used to iterate over the items of a sequence or other iterable objects.

```python
for variable in iterable:
    # Code block to execute
```

- **`variable`**: A placeholder that takes on the value of each item in the iterable, one at a time.
- **`iterable`**: An object capable of returning its members one at a time, such as lists, tuples, strings, or ranges.

### Iterating Over Sequences

The most common use of `for` loops is to iterate over sequences like lists, tuples, and strings.

#### Iterating over a list**

**Example:**

```python
fruits = ['apple', 'banana', 'cherry']
for fruit in fruits:
    print(f"I like {fruit}")
```

**Output:**

```plaintext
I like apple
I like banana
I like cherry
```

#### Iterating over a string

**Example:**

```python
word = "Python"
for letter in word:
    print(letter)
```

**Output:**

```plaintext
P
y
t
h
o
n
```

### Using `range()` with `for` Loops

The `range()` function generates a sequence of numbers, which is especially useful with `for` loops when you need to perform an action a specific number of times.

**Basic usage of `range()`**

- `range(stop)` generates numbers from `0` up to, but not including, `stop`.
- `range(start, stop)` starts from `start` and goes up to, but not including, `stop`.
- `range(start, stop, step)` increments by `step`.

**Example:**

```python
for i in range(5):
    print(i)
```

**Output:**

```plaintext
0
1
2
3
4
```

**Example with start and stop:**

```python
for i in range(2, 7):
    print(i)
```

**Output:**

```plaintext
2
3
4
5
6
```

**Example with step:**

```python
for i in range(0, 10, 2):
    print(i)
```

**Output:**

```plaintext
0
2
4
6
8
```

### Nested `for` Loops

You can nest one `for` loop inside another to iterate over multiple sequences.

**Example:**

```python
colors = ['red', 'green', 'blue']
objects = ['ball', 'cube']

for color in colors:
    for obj in objects:
        print(f"{color} {obj}")
```

**Output:**

```plaintext
red ball
red cube
green ball
green cube
blue ball
blue cube
```

### Looping with `enumerate()`

The `enumerate()` function adds a counter to an iterable and returns it as an `enumerate` object, which can be used directly in `for` loops.

**Example:**

```python
fruits = ['apple', 'banana', 'cherry']
for index, fruit in enumerate(fruits):
    print(f"{index}: {fruit}")
```

**Output:**

```plaintext
0: apple
1: banana
2: cherry
```

### Looping over Dictionaries

When iterating over dictionaries, you can loop through keys, values, or both.

**Example:**

```python
person = {'name': 'Alice', 'age': 30, 'city': 'New York'}

# Looping over keys
for key in person:
    print(key)

# Looping over values
for value in person.values():
    print(value)

# Looping over key-value pairs
for key, value in person.items():
    print(f"{key}: {value}")
```

**Output:**

```plaintext
name
age
city
Alice
30
New York
name: Alice
age: 30
city: New York
```

## 🔄 `while` Loops

### Basic Syntax

A `while` loop allows you to execute a block of code repeatedly as long as a certain condition is true.

```python
while condition:
    # Code block to execute
```

- **`condition`**: An expression evaluated before each iteration; if it is `True`, the loop continues; if it is `False`, the loop stops.

### Examples of `while` Loops

**Counting with a `while` loop**

```python
count = 0
while count < 5:
    print(f"The count is {count}")
    count += 1  # Increment the counter
```

**Output:**

```plaintext
The count is 0
The count is 1
The count is 2
The count is 3
The count is 4
```

### Avoiding Infinite Loops

An infinite loop occurs when the loop's condition never becomes `False`. This can cause your program to run indefinitely and may lead to performance issues.

**Example of an infinite loop (avoid running this code):**

```python
while True:
    print("This loop will run forever")
```

**Tips to prevent infinite loops:**

- **Ensure the condition will eventually be `False`**: Update variables within the loop that affect the condition.
- **Use loop variables carefully**: Mistakes in incrementing or decrementing can prevent the loop from terminating.

**Corrected example:**

```python
number = 5
while number > 0:
    print(number)
    number -= 1  # Decrease number by 1
```

**Output:**

```plaintext
5
4
3
2
1
```

## 🛠 Best Practices

- **Choose the right loop**: Use `for` loops when iterating over known sequences; use `while` loops when the number of iterations is not known in advance.
- **Keep loops simple**: Complex logic within loops can be hard to read and maintain.
- **Avoid modifying the iterable**: Changing the sequence you are iterating over can lead to unexpected behavior.
- **Use functions like `enumerate()` and `zip()`**: They can simplify loops and make your code more Pythonic.
- **Be cautious with nested loops**: They can significantly impact performance; consider alternative approaches if possible.

## 🧠 Key Considerations

- **Variable scope**: Variables defined within a loop are accessible outside the loop in Python.
- **Performance**: Be mindful of the efficiency of your loops, especially with large datasets or nested loops.
- **Readability**: Write clear and readable loops; this makes your code easier to understand and maintain.

---

> ⬅️ **[Previous: Conditionals (`if`, `else`, `elif`)](./conditionals.md)**
>
> ➡️ **[Next: Loop Control Statements](./loop-control-statements.md)**
>
> 🔝 **[Back to Top](#-loops-for-while)**
>
> 🏠 **[Home](../README.md)**
