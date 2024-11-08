# 📘 Operators

- [📘 Operators](#-operators)
  - [❓ What are Operators?](#-what-are-operators)
  - [➕ Arithmetic Operators](#-arithmetic-operators)
  - [⚖️ Comparison (Relational) Operators](#️-comparison-relational-operators)
  - [🔄 Logical Operators](#-logical-operators)
  - [🧠 Bitwise Operators](#-bitwise-operators)
  - [💼 Assignment Operators](#-assignment-operators)
  - [🏷️ Identity Operators](#️-identity-operators)
  - [🔍 Membership Operators](#-membership-operators)

## ❓ What are Operators?

Operators in Python are special symbols that perform specific operations on variables and values. Python supports a variety of operators, allowing you to perform arithmetic calculations, comparisons, logical operations, and more.

## ➕ Arithmetic Operators

Arithmetic operators are used to perform mathematical operations such as addition, subtraction, multiplication, etc.

| Operator | Description               | Example        |
|----------|---------------------------|----------------|
| `+`      | Addition                  | `x + y`        |
| `-`      | Subtraction               | `x - y`        |
| `*`      | Multiplication            | `x * y`        |
| `/`      | Division                  | `x / y`        |
| `%`      | Modulus (Remainder)        | `x % y`        |
| `**`     | Exponentiation (Power)     | `x ** y`       |
| `//`     | Floor Division (quotient)  | `x // y`       |

```python
x = 10
y = 3

print(x + y)  # Output: 13
print(x - y)  # Output: 7
print(x * y)  # Output: 30
print(x / y)  # Output: 3.333...
print(x % y)  # Output: 1
print(x ** y) # Output: 1000 (10^3)
print(x // y) # Output: 3 (quotient without remainder)
```

## ⚖️ Comparison (Relational) Operators

Comparison operators compare two values and return a Boolean (`True` or `False`).

| Operator | Description                     | Example  |
|----------|---------------------------------|----------|
| `==`     | Equal to                       | `x == y` |
| `!=`     | Not equal to                   | `x != y` |
| `>`      | Greater than                   | `x > y`  |
| `<`      | Less than                      | `x < y`  |
| `>=`     | Greater than or equal to        | `x >= y` |
| `<=`     | Less than or equal to           | `x <= y` |

```python
x = 5
y = 8

print(x == y)  # Output: False
print(x != y)  # Output: True
print(x > y)   # Output: False
print(x < y)   # Output: True
```

## 🔄 Logical Operators

Logical operators are used to combine conditional statements.

| Operator | Description             | Example          |
|----------|-------------------------|------------------|
| `and`    | Returns `True` if both statements are true | `x and y` |
| `or`     | Returns `True` if one of the statements is true | `x or y`  |
| `not`    | Reverses the result: `True` becomes `False`, `False` becomes `True` | `not x` |

```python
x = True
y = False

print(x and y)  # Output: False
print(x or y)   # Output: True
print(not x)    # Output: False
```

## 🧠 Bitwise Operators

Bitwise operators work on bits and perform bit-by-bit operations.

| Operator | Description               | Example    |
|----------|---------------------------|------------|
| `&`      | AND                       | `x & y`    |
| `\|`     | OR                        | `x \| y`   |
| `^`      | XOR                       | `x ^ y`    |
| `~`      | NOT                       | `~x`       |
| `<<`     | Left Shift                | `x << 2`   |
| `>>`     | Right Shift               | `x >> 2`   |

```python
x = 5  # In binary: 101
y = 3  # In binary: 011

print(x & y)  # Output: 1  (001)
print(x | y)  # Output: 7  (111)
print(x ^ y)  # Output: 6  (110)
print(~x)     # Output: -6
print(x << 2) # Output: 20 (10100)
print(x >> 2) # Output: 1  (001)
```

## 💼 Assignment Operators

Assignment operators are used to assign values to variables. They can also perform operations and then assign the result to the variable.

| Operator | Description                 | Example     |
|----------|-----------------------------|-------------|
| `=`      | Assigns a value              | `x = 5`     |
| `+=`     | Adds and assigns             | `x += 3`    |
| `-=`     | Subtracts and assigns        | `x -= 2`    |
| `*=`     | Multiplies and assigns       | `x *= 4`    |
| `/=`     | Divides and assigns          | `x /= 2`    |
| `%=`     | Modulus and assigns          | `x %= 3`    |
| `**=`    | Exponentiation and assigns   | `x **= 2`   |
| `//=`    | Floor division and assigns   | `x //= 3`   |

```python
x = 10
x += 5  # Equivalent to: x = x + 5
print(x)  # Output: 15
```

## 🏷️ Identity Operators

Identity operators check whether two variables refer to the same object in memory.

| Operator | Description                | Example        |
|----------|----------------------------|----------------|
| `is`     | Returns `True` if both variables refer to the same object | `x is y` |
| `is not` | Returns `True` if they do not refer to the same object | `x is not y` |

```python
x = [1, 2, 3]
y = [1, 2, 3] # Similar but different object
z = x

print(x is z)  # Output: True (x and z point to the same object)
print(x is y)  # Output: False (x and y are different objects)
print(x == y)  # Output: True (x and y have the same content)
```

## 🔍 Membership Operators

Membership operators test if a value or object is in a sequence.

| Operator | Description                  | Example        |
|----------|------------------------------|----------------|
| `in`     | Returns `True` if a value is present in the sequence | `x in y`    |
| `not in` | Returns `True` if a value is not present in the sequence | `x not in y`|

```python
x = [1, 2, 3, 4, 5]

print(3 in x)  # Output: True
print(6 not in x)  # Output: True
```
