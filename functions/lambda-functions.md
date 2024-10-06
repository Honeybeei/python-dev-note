# 🛠 Lambda Functions

## 📝 What are Lambda Functions?

In Python, a **lambda function** is a small anonymous function defined using the `lambda` keyword. Unlike regular functions created with `def`, lambda functions are typically used for simple operations that can be written in a single line. They are often used in situations where you need a short, throwaway function for a limited scope.

> **Note**: Lambda functions are also known as **anonymous functions** because they do not require a name.

### Syntax

The basic syntax of a lambda function is as follows:

```python
lambda arguments: expression
```

- **`lambda`**: The keyword used to define a lambda function.
- **`arguments`**: The parameters passed to the lambda function (can be zero or more).
- **`expression`**: The operation that the lambda function will return, evaluated immediately when the function is called.

#### Example

Here’s an example of a simple lambda function that adds two numbers:

```python
add = lambda x, y: x + y
print(add(5, 3))  # Output: 8
```

### Differences from Regular Functions

Lambda functions differ from regular Python functions in several key ways:

- **No Name**: Lambda functions are anonymous (no name is required).
- **Single Expression**: They can only contain one expression, which is returned automatically (no `return` keyword needed).
- **No Docstrings**: Unlike regular functions, lambda functions do not support docstrings.

## 📌 Why Use Lambda Functions?

> First impression: I thought that functions are used because they are reusable. Why would I use a lambda function? 🤔

Lambda functions are often used in places where you need a small function for a limited time. Here are a few scenarios where lambda functions are especially useful:

- **Short, simple operations**: When you need a quick function without defining a whole `def` block.
- **Functional programming tools**: Lambda functions are commonly used with functions like `map()`, `filter()`, and `sorted()`.

### Lambda in `map()`

The `map()` function applies a lambda function to all items in an iterable (like a list).

```python
numbers = [1, 2, 3, 4, 5]
squared = map(lambda x: x ** 2, numbers)
print(list(squared))  # Output: [1, 4, 9, 16, 25]
```

### Lambda in `filter()`

The `filter()` function filters elements from an iterable based on a condition defined by a lambda function.

```python
numbers = [1, 2, 3, 4, 5, 6]
even_numbers = filter(lambda x: x % 2 == 0, numbers)
print(list(even_numbers))  # Output: [2, 4, 6]
```

### Lambda in `sorted()`

The `sorted()` function can take a lambda function as a key to sort complex data structures.

```python
students = [('Alice', 85), ('Bob', 90), ('Charlie', 80)]
sorted_students = sorted(students, key=lambda student: student[1])
print(sorted_students)  # Output: [('Charlie', 80), ('Alice', 85), ('Bob', 90)]
```

## 🛠 Lambda Functions with `if` Statements

Lambda functions can include conditional expressions, but they must be written as a single-line expression:

```python
max_value = lambda x, y: x if x > y else y
print(max_value(10, 20))  # Output: 20
```

In this example, the lambda function returns `x` if `x` is greater than `y`; otherwise, it returns `y`.

## 🏷️ Type Annotations in Lambda Functions

Although rarely used, lambda functions can also support type annotations for clarity. The type hints are added inside the parentheses:

```python
add: Callable[[int, int], int] = lambda x, y: x + y
```

Here, the `Callable[[int, int], int]` annotation specifies that `add` is a function taking two integers and returning an integer.

> **Note**: Lambda functions are best used for simple operations. For more complex logic, a regular function defined with `def` is recommended for readability and maintainability.

## ⚠️ Limitations of Lambda Functions

While lambda functions are useful, they do come with certain limitations:

- **Limited to Single Expression**: Lambda functions can only have a single expression. More complex operations will require a regular function.
- **No Statements**: Lambda functions cannot contain statements like `return`, `pass`, `assert`, or `raise`.
- **Limited Readability**: Overusing lambda functions, especially in complex situations, can reduce code readability.

## 🙋 My thoughts about Lambda Functions

As a 42 common core graduate who has been exposed to classic programming languages like C, I find lambda functions to be a bit 💩. Codes should be readable. It doesn't really look good to me.

---

> ⬅️ **[Previous: Function Arguments](./function-arguments.md)**
>
> ➡️ **[Next: Variable Scope (`local`, `global`, `nonlocal`)](./variable-scope.md)**
>
> 🔝 **[Back to Top](#-lambda-functions)**
>
> 🏠 **[Home](../../index.md)**
