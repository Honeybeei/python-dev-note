# 🔄 Loops (`for`, `while`)

## ❓ What are Loops?

Loops in Python are used to repeatedly execute a block of code as long as a condition is true or for a specific number of iterations. There are two main types of loops in Python:

1. **`for` loops**: Used to iterate over a sequence (like a list, tuple, dictionary, string, or range).
2. **`while` loops**: Used to execute a block of code as long as a condition remains true.

> Actually, there is a third type of loop in Python called `for...in...else` loop. But it is not commonly used.

## 🔁 `for` Loops

A `for` loop iterates over a sequence (such as a list or range), executing the block of code for each element in the sequence.

### Syntax:

```python
for variable in sequence:
    # Code to execute for each iteration
```

### Example:

```python
fruits = ["apple", "banana", "cherry"]

for fruit in fruits:
    print(fruit)
```

### Output:

```bash
apple
banana
cherry
```

### Using `range()` in `for` Loops

The `range()` function generates a sequence of numbers, commonly used in `for` loops.

```python
for i in range(5):
    print(i)
```

### Output:

```bash
0
1
2
3
4
```

- `range(5)` generates numbers from 0 to 4.
- You can also specify a start, end, and step value: `range(start, stop, step)`.

### Example:

```python
for i in range(2, 10, 2):
    print(i)
```

### Output:

```bash
2
4
6
8
```

## 🔄 `while` Loops

A `while` loop repeats as long as a condition remains true. Once the condition is no longer true, the loop exits.

### Syntax:

```python
while condition:
    # Code to execute while the condition is True
```

### Example:

```python
x = 0

while x < 5:
    print(x)
    x += 1  # Increase x by 1 in each iteration
```

### Output:

```bash
0
1
2
3
4
```

- Be careful with `while` loops to avoid infinite loops, where the condition never becomes false.

### Example of an Infinite Loop:

```python
while True:
    print("This will run forever!")
```

## 🔄 `break` and `continue` in Loops

### `break`

The `break` statement is used to exit the loop prematurely when a certain condition is met.

### Example:

```python
for i in range(10):
    if i == 5:
        break  # Exit the loop when i is 5
    print(i)
```

### Output:

```bash
0
1
2
3
4
```

### `continue`

The `continue` statement skips the rest of the loop for the current iteration and moves on to the next one.

### Example:

```python
for i in range(5):
    if i == 2:
        continue  # Skip the rest of the code for i = 2
    print(i)
```

### Output:

```bash
0
1
3
4
```

> Loop control statements will be covered in more detail in the [Loop Control](./loop-control.md) section.

## 🔄 Nested Loops

You can nest loops inside each other to perform more complex iterations.

### Example:

```python
for i in range(3):
    for j in range(2):
        print(f"i: {i}, j: {j}")
```

### Output:

```bash
i: 0, j: 0
i: 0, j: 1
i: 1, j: 0
i: 1, j: 1
i: 2, j: 0
i: 2, j: 1
```

## 📚 What's Next?

- Learn about [Loop Control (`break`, `continue`, `enumerate`)](./loop-control.md) for more advanced control of loop behavior.
- [Check other topics](../README.md)
