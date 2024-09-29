# 🔄 Loop Control (`break`, `continue`, `enumerate`)

## ❓ What is Loop Control?

Loop control refers to altering the behavior of loops in Python. You can control the flow of a loop using special statements that either stop the loop, skip an iteration, or enhance how loops handle data. The three primary loop control statements are:

1. **`break`**: Exits the loop prematurely.
2. **`continue`**: Skips the current iteration and moves to the next.
3. **`enumerate()`**: Enhances `for` loops by providing both the index and value of an iterable.

## 🔚 `break` Statement

The `break` statement is used to terminate the loop before it has iterated over all items. When the `break` statement is encountered, the loop stops, and control moves to the next block of code after the loop.

### Syntax:

```python
for/while condition:
    if some_condition:
        break
    # Code to execute if break is not hit
```

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

In this example, the loop stops when `i` equals 5, even though the range goes up to 9.

## 🔄 `continue` Statement

The `continue` statement is used to skip the current iteration of a loop and move to the next one. When `continue` is encountered, Python skips the rest of the code inside the loop for that iteration and goes directly to the next iteration.

### Syntax:

```python
for/while condition:
    if some_condition:
        continue
    # Code to execute for non-skipped iterations
```

### Example:

```python
for i in range(5):
    if i == 2:
        continue  # Skip when i is 2
    print(i)
```

### Output:

```bash
0
1
3
4
```

In this case, the loop skips printing `2` and moves to the next iteration.

## 🔢 `enumerate()` Function

The `enumerate()` function is used with `for` loops to access both the index and value of an iterable (like a list, tuple, or string) simultaneously. This is especially useful when you need the index of an element during iteration.

### Syntax:

```python
for index, value in enumerate(iterable, start=0):
    # Code to execute with index and value
```

- `iterable`: The sequence you're iterating over (list, tuple, string, etc.).
- `start`: Optional. The starting index (default is `0`).

### Example:

```python
fruits = ["apple", "banana", "cherry"]

for index, fruit in enumerate(fruits):
    print(f"{index}: {fruit}")
```

### Output:

```bash
0: apple
1: banana
2: cherry
```

### Example with Custom Start Index:

```python
for index, fruit in enumerate(fruits, start=1):
    print(f"{index}: {fruit}")
```

### Output:

```bash
1: apple
2: banana
3: cherry
```

## 🧠 Key Considerations

- **Combining `break` and `continue`**: You can use both `break` and `continue` inside the same loop to control its flow dynamically based on conditions.
  
- **Using `else` with `break`**: If a `for` or `while` loop completes normally without encountering `break`, you can use an `else` statement to run code afterward.

### Example:

```python
for i in range(5):
    if i == 3:
        break
    print(i)
else:
    print("Loop finished without break.")
```

### Output:

```bash
0
1
2
```

In this case, the `else` block is not executed because the loop was terminated by `break`.

## 📚 What's Next?

- Learn about [Functions and Lambdas](../functions-lambdas/defining-functions.md) to start writing reusable blocks of code in Python.
- [Check other topics](../README.md)
