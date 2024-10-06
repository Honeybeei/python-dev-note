# 📘 Conditionals

- [📘 Conditionals](#-conditionals)
  - [❓ What are Conditionals?](#-what-are-conditionals)
  - [🧠 Syntax](#-syntax)
  - [🛠️ How It Works](#️-how-it-works)
    - [Example with multiple conditions:](#example-with-multiple-conditions)
  - [💡 Nested Conditionals](#-nested-conditionals)
  - [🧠 Key Considerations](#-key-considerations)
  - [🔄 One-Liner Conditionals](#-one-liner-conditionals)

## ❓ What are Conditionals?

Conditionals allow a program to make decisions based on certain conditions. Python uses `if`, `elif`, and `else` statements to execute different blocks of code based on Boolean expressions.

- `if` is used to check a condition. If the condition is `True`, the code inside the `if` block is executed.
- `elif` (short for "else if") is used to check multiple conditions after an initial `if` condition.
- `else` is used to define a block of code that runs if none of the previous conditions are met.

## 🧠 Syntax

```python
if condition1:
    # Code to execute if condition1 is True
elif condition2:
    # Code to execute if condition1 is False and condition2 is True
else:
    # Code to execute if none of the conditions are True
```

```python
age = 18

if age < 18:
    print("You are a minor.")
elif age == 18:
    print("You just became an adult!")
else:
    print("You are an adult.")

# Output: You just became an adult!
```

## 🛠️ How It Works

- **Condition**: Each condition is a Boolean expression that evaluates to either `True` or `False`.
- **Block of Code**: If the condition is `True`, the block of code under that condition is executed.
- **Indentation**: In Python, code blocks are defined by indentation, not curly braces.

### Example with multiple conditions:

```python
temperature = 25

if temperature > 30:
    print("It's hot outside!")
elif temperature >= 20:
    print("It's a nice day!")
else:
    print("It's cold outside!")

# Output: It's a nice day!
```

## 💡 Nested Conditionals

You can nest conditional statements within each other to check multiple levels of conditions.

```python
x = 10
y = 5

if x > 0:
    if y > 0:
        print("Both x and y are positive.")
    else:
        print("x is positive, but y is not.")
else:
    print("x is not positive.")

# Output: Both x and y are positive.
```

## 🧠 Key Considerations

- **Boolean Expressions**: Conditions are based on Boolean expressions, which evaluate to `True` or `False`.
- **Chaining with `elif`**: You can chain as many `elif` statements as needed to check multiple conditions.
- **Order Matters**: Conditions are checked in the order they appear. Once a condition is `True`, the corresponding block of code is executed, and the rest are ignored.
- **Indentation**: Make sure to maintain consistent indentation for code blocks.

## 🔄 One-Liner Conditionals

Python allows you to write conditionals in one line for simple conditions. (But I will not going to use it in my code. It's hard to read 🤯)

```python
x = 5
y = 10
print("x is greater than y") if x > y else print("x is less than or equal to y")

# Output: x is less than or equal to y
```

---

> ⬅️ **[Previous: String Manipulation and Methods](../basics/string-manipulation-and-methods.md)**
>
> ➡️ **[Next: Loops (`for`, `while`)](./loops.md)**
>
> 🔝 **[Back to Top](#-conditionals)**
>
> 🏠 **[Home](../README.md)**
