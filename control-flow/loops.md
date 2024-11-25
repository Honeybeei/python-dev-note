# Loops (`for`, `while`)

## `for` Loop

### Syntax

```python
for item in iterable:
    # do something with item
```

### Example

```python
for i in range(5):
    print(i)
```

In this case, `range(5)` (iterable) is iterated over and each item is assigned to `i` in each iteration. For more about iterables and iterator, check this [note](./iterables-and-iterators.md).

## `while` Loop

### Syntax

```python
while condition:
    # do something
```

### Example

```python
i = 0
while i < 5:
    print(i)
    i += 1
```
