# 🔄 Loops and Control Statement

- [🔄 Loops and Control Statement](#-loops-and-control-statement)
  - [🔁 `for` Loop](#-for-loop)
  - [♾️ `while` Loop](#️-while-loop)
  - [🎮 Control Statements](#-control-statements)
    - [🚪 `break`](#-break)
    - [⏭️ `continue`](#️-continue)
    - [💨 `pass`](#-pass)

## 🔁 `for` Loop

- `for` loop is used to iterate over a sequence (list, tuple, string, etc.) or other iterable objects.

```python
for item in iterable:
    # do something with item
```

## ♾️ `while` Loop

- `while` loop is used to execute a block of code repeatedly as long as a condition is `True`.

```python
while condition:
    # do something
```

## 🎮 Control Statements

### 🚪 `break`

- `break` statement is used to exit the loop.

```python
for num in range(10):
    if num == 5:
        break # Exit the loop when the number is 5
    print(num)  # Output: 0 1 2 3 4
```

### ⏭️ `continue`

- `continue` statement is used to skip the current iteration and continue with the next iteration.

```python
for num in range(10):
    if num % 2 == 0:
        continue # Skip even numbers
    print(num)  # Output: 1 3 5 7 9
```

### 💨 `pass`

- `pass` statement is used when a statement is required syntactically but you do not want any command or code to execute.

```python
for num in range(10):
    if num % 2 == 0:
        pass # Do nothing
    else:
        print(num)  # Output: 1 3 5 7 9
```
