# 🌀 Loop Control Statements

- [🌀 Loop Control Statements](#-loop-control-statements)
  - [🔍 Introduction](#-introduction)
  - [🚫 The `break` Statement](#-the-break-statement)
    - [Purpose](#purpose)
    - [Syntax](#syntax)
    - [Example](#example)
    - [How It Works](#how-it-works)
    - [Use Cases](#use-cases)
  - [↩️ The `continue` Statement](#️-the-continue-statement)
    - [Purpose](#purpose-1)
    - [Syntax](#syntax-1)
    - [Example](#example-1)
    - [How It Works](#how-it-works-1)
    - [Use Cases](#use-cases-1)
  - [💤 The `pass` Statement](#-the-pass-statement)
    - [Purpose](#purpose-2)
    - [Syntax](#syntax-2)
    - [Example](#example-2)
    - [How It Works](#how-it-works-2)
    - [Use Cases](#use-cases-2)
  - [🧩 The `else` Clause in Loops](#-the-else-clause-in-loops)
    - [Purpose](#purpose-3)
    - [Syntax](#syntax-3)
    - [Example](#example-3)
    - [How It Works](#how-it-works-3)
    - [Use Cases](#use-cases-3)
  - [📝 Combining Loop Control Statements](#-combining-loop-control-statements)
    - [Example: Using `break` and `else`](#example-using-break-and-else)
    - [Example: Using `continue` and `pass`](#example-using-continue-and-pass)
    - [Example: Using `pass` as a Placeholder](#example-using-pass-as-a-placeholder)
  - [⚠️ Common Pitfalls and Best Practices](#️-common-pitfalls-and-best-practices)
    - [Misunderstanding `else` in Loops](#misunderstanding-else-in-loops)
    - [Overusing `break` and `continue`](#overusing-break-and-continue)
    - [Forgetting to Update Loop Conditions](#forgetting-to-update-loop-conditions)
    - [Using `pass` Incorrectly](#using-pass-incorrectly)
  - [🧠 Key Takeaways](#-key-takeaways)

## 🔍 Introduction

Loop control statements in Python allow you to alter the flow of a loop from its normal sequence. They enable you to:

- Exit a loop prematurely.
- Skip the current iteration and continue with the next one.
- Use an `else` clause with loops for additional logic.
- Use a placeholder where a statement is syntactically required but no action is needed.

This guide covers the following loop control statements:

- `break`
- `continue`
- `pass`
- `else` in loops

## 🚫 The `break` Statement

### Purpose

The `break` statement is used to terminate a loop immediately. When executed, it breaks out of the enclosing loop and resumes execution at the next statement after the loop.

### Syntax

```python
for item in iterable:
    if condition:
        break
    # Rest of the loop code
```

```python
while condition:
    if condition2:
        break
    # Rest of the loop code
```

### Example

```python
# Find the first number divisible by 7
numbers = [5, 12, 18, 21, 29, 35]

for num in numbers:
    if num % 7 == 0:
        print(f"First number divisible by 7 is: {num}")
        break
    print(f"{num} is not divisible by 7")

# Output:
# 5 is not divisible by 7
# 12 is not divisible by 7
# 18 is not divisible by 7
# First number divisible by 7 is: 21
```

### How It Works

- **Execution Flow**: When Python encounters a `break` statement inside a loop, it exits the loop immediately.
- **Control Transfer**: The control is transferred to the first statement after the loop block.
- **Nested Loops**: If used inside nested loops, `break` only exits the innermost loop.

### Use Cases

- **Searching**: Exit the loop once the desired item is found.
- **Optimization**: Prevent unnecessary iterations after meeting a condition.
- **Infinite Loops**: Terminate an infinite loop when a condition is met.

## ↩️ The `continue` Statement

### Purpose

The `continue` statement skips the rest of the code inside the loop for the current iteration and moves to the next iteration.

### Syntax

```python
for item in iterable:
    if condition:
        continue
    # Code to execute if condition is False
```

```python
while condition:
    if condition2:
        continue
    # Code to execute if condition2 is False
```

### Example

```python
# Print odd numbers from 1 to 10
for num in range(1, 11):
    if num % 2 == 0:
        continue  # Skip even numbers
    print(num)

# Output:
# 1
# 3
# 5
# 7
# 9
```

### How It Works

- **Execution Flow**: When `continue` is encountered, Python skips the remaining code in the loop for that iteration.
- **Next Iteration**: The loop condition is re-evaluated, and if True, the next iteration begins.

### Use Cases

- **Filtering Data**: Skip unwanted items during iteration.
- **Reducing Nesting**: Avoid deep nesting by handling exceptions early.
- **Performance**: Improve performance by skipping unnecessary computations.

## 💤 The `pass` Statement

### Purpose

The `pass` statement does nothing and is used as a placeholder. It allows you to write empty code blocks that are syntactically required but where no action is needed.

### Syntax

```python
if condition:
    pass  # Do nothing
```

### Example

```python
# Placeholder for future implementation
def future_function():
    pass  # Function does nothing for now

# Empty loop
for i in range(5):
    pass  # Loop executes without any action
```

### How It Works

- **No Operation**: `pass` is a null statement; it doesn't perform any operation.
- **Syntax Requirement**: Used where a statement is syntactically required but no action is needed.

### Use Cases

- **Code Structure**: Maintain the structure of your code during development.
- **Stubs**: Create function or class stubs that will be implemented later.
- **Testing**: Temporarily disable code blocks without deleting them.

## 🧩 The `else` Clause in Loops

### Purpose

An `else` clause in a loop executes after the loop completes normally (without encountering a `break` statement). It's useful for executing code when a loop didn't exit via `break`.

### Syntax

```python
for item in iterable:
    # Loop code
    if condition:
        break
else:
    # Executes if loop wasn't terminated by 'break'
```

```python
while condition:
    # Loop code
    if condition2:
        break
else:
    # Executes if loop wasn't terminated by 'break'
```

### Example

```python
# Check for a prime number
num = 13

for i in range(2, num):
    if num % i == 0:
        print(f"{num} is not a prime number")
        break
else:
    print(f"{num} is a prime number")

# Output:
# 13 is a prime number
```

In this example, the `else` block executes because the loop didn't encounter a `break`, confirming that `num` is a prime number.

### How It Works

- **Normal Completion**: The `else` block executes if the loop completes all iterations without `break`.
- **Interrupted Loop**: If `break` is executed, the `else` block is skipped.
- **Applicability**: Works with both `for` and `while` loops.

### Use Cases

- **Search Algorithms**: Determine if an item wasn't found in a loop.
- **Validation**: Confirm that all items meet a condition.
- **Cleanup**: Execute cleanup code after a loop finishes normally.

## 📝 Combining Loop Control Statements

Loop control statements can be combined to create complex logic flows within loops.

### Example: Using `break` and `else`

```python
# Searching for an item in a list
fruits = ['apple', 'banana', 'cherry']
search_item = 'banana'

for fruit in fruits:
    if fruit == search_item:
        print(f"{search_item} found!")
        break
else:
    print(f"{search_item} not found!")

# Output:
# banana found!
```

If you change `search_item` to `'orange'`, the output will be:

```python
# Output:
# orange not found!
```

### Example: Using `continue` and `pass`

```python
# Process only valid data
data = [1, 2, None, 4, None, 6]

for item in data:
    if item is None:
        continue  # Skip None values
    # Process the item
    print(f"Processing item: {item}")
```

### Example: Using `pass` as a Placeholder

```python
# Define functions to be implemented later
def compute():
    pass  # To be implemented

def analyze():
    pass  # To be implemented

# Main code
print("Functions are defined but not implemented yet.")
```

## ⚠️ Common Pitfalls and Best Practices

### Misunderstanding `else` in Loops

- **Pitfall**: Thinking the `else` clause executes if the loop condition is False.
- **Best Practice**: Remember that `else` executes only if the loop is not terminated by `break`.

### Overusing `break` and `continue`

- **Pitfall**: Excessive use can make code harder to read and debug.
- **Best Practice**: Use them sparingly and ensure they're necessary for the logic.

### Forgetting to Update Loop Conditions

- **Pitfall**: Leading to infinite loops.
- **Best Practice**: Always ensure loop conditions will eventually become False.

### Using `pass` Incorrectly

- **Pitfall**: Using `pass` when action is required.
- **Best Practice**: Use `pass` only as a placeholder during development.

## 🧠 Key Takeaways

- **`break`**: Exits the loop immediately.
- **`continue`**: Skips the rest of the code in the current iteration.
- **`pass`**: Does nothing; it's a placeholder.
- **`else` in Loops**: Executes after normal loop completion, not after `break`.

---

> ⬅️ **[Previous: Loops (`for`, `while`)](./loops.md)**
>
> ➡️ **[Next: Exception Handling](./exception-handling.md)**
>
> 🔝 **[Back to Top](#-loop-control-statements)**
>
> 🏠 **[Home](../README.md)**
