# 🔄 Variable Scope in Python

- [🔄 Variable Scope in Python](#-variable-scope-in-python)
  - [📘 What is Variable Scope?](#-what-is-variable-scope)
    - [Types of Scopes](#types-of-scopes)
  - [🔍 Local Scope](#-local-scope)
  - [🌍 Global Scope](#-global-scope)
    - [Modifying Global Variables:](#modifying-global-variables)
  - [🌀 Enclosing (Nonlocal) Scope](#-enclosing-nonlocal-scope)
  - [🧰 Built-in Scope](#-built-in-scope)
  - [🔄 Scope Resolution Order (LEGB Rule)](#-scope-resolution-order-legb-rule)
  - [😇 Variable Lifetime](#-variable-lifetime)
  - [👍 Best Practices](#-best-practices)

## 📘 What is Variable Scope?

**Variable scope** refers to the part of a program where a variable can be accessed. Python, like most programming languages, has specific rules regarding how variables are managed in memory and what parts of the code can access them. Understanding scope helps in managing variable visibility, avoiding name collisions, and debugging effectively.

### Types of Scopes

In Python, there are four types of scopes:

1. **Local Scope**
2. **Global Scope**
3. **Enclosing Scope** (in nested functions)
4. **Built-in Scope**

These are often abbreviated as **LEGB**, referring to the order in which Python looks for variables.

## 🔍 Local Scope

A **local variable** is a variable that is declared inside a function and is only accessible within that function. Local variables exist only during the execution of the function in which they are defined.

```python
def my_function():
    x = 10  # Local variable
    print(x)

my_function()  # Output: 10
print(x)  # Error: NameError - x is not defined outside the function
```

> In the example above, the variable `x` only exists within `my_function()`. Trying to access it outside the function will result in an error because the variable is out of scope.

## 🌍 Global Scope

A **global variable** is declared outside any function or block of code. It can be accessed anywhere within the module, including inside functions (unless overridden by a local variable of the same name).

```python
x = 100  # Global variable

def my_function():
    print(x)  # Access global variable

my_function()  # Output: 100
print(x)  # Output: 100
```

> Here, `x` is defined outside the function, making it a global variable. Both the function and the code outside the function can access it.

### Modifying Global Variables:

To modify a global variable inside a function, the `global` keyword is used. This tells Python to refer to the global variable, not a new local variable.

```python
x = 5

def modify_global():
    global x  # Declare x as global
    x = 10

modify_global()
print(x)  # Output: 10
```

> Without the `global` keyword, Python would treat `x` as a local variable within the function and would not modify the global `x`.

## 🌀 Enclosing (Nonlocal) Scope

Enclosing scpoe is used within nested functions. It allows inner functions to modify variables defined in their enclosing (but not global) scope.

```python
def outer_function():
    x = 20  # Enclosing variable
    
    def inner_function():
        nonlocal x  # Refer to the enclosing variable
        x = 30
        print(f"Inner: {x}")

    inner_function()
    print(f"Outer: {x}")

outer_function()
# Output:
# Inner: 30
# Outer: 30
```

> In this example, `x` belongs to the enclosing scope of `outer_function()`. Inside `inner_function()`, we use the `nonlocal` keyword to modify the value of `x`.
>
> Without the `nonlocal` keyword, `x` would be treated as a local variable within `inner_function()`, and the enclosing variable would remain unchanged.

---

## 🧰 Built-in Scope

Built-in scope refers to the scope reserved for Python's built-in functions and names, like `print()`, `len()`, `range()`, etc. These names are always available, regardless of where you are in your code.

```python
print(len([1, 2, 3]))  # Output: 3
```

> You can redefine these built-in names, but doing so is generally a bad practice as it can lead to confusing code.

## 🔄 Scope Resolution Order (LEGB Rule)

When you refer to a variable, Python searches for the name in the following order:

1. **Local Scope**: Variables defined within the function.
2. **Enclosing Scope**: Variables defined in the outer function (if the current function is nested).
3. **Global Scope**: Variables defined at the top level of the script or module.
4. **Built-in Scope**: Reserved names for built-in functions and exceptions.

If Python cannot find the variable in any of these scopes, it raises a `NameError`.

```python
x = "global"

def outer():
    x = "enclosing"

    def inner():
        x = "local"
        print(x)  # Outputs: local

    inner()
    print(x)  # Outputs: enclosing

outer()
print(x)  # Outputs: global
```

> Here’s how Python resolves x in each print statement:
>
> - Inside inner(): Finds x in the Local scope.
> - Inside outer() after inner(): Finds x in the Enclosing scope.
> - At the module level: Finds x in the Global scope.

## 😇 Variable Lifetime

The lifetime of a variable is the duration during which the variable exists in memory.

- **Local Variables**: Exist only during the execution of the function in which they are defined.
- **Global Variables**: Exist as long as the program is running.
- **Enclosing Variables**: Exist until the outer function is terminated.

## 👍 Best Practices

- **Avoid Global Variables**: Use global variables sparingly as they can lead to code that is hard to understand and debug.
- **Use Local Variables Whenever Possible**: Local variables are easier to manage and debug.
- **Use Descriptive Variable Names**: Choose meaningful names for variables to avoid confusion and scope-related issues.

---

---

> ⬅️ **[Previous: Lambda Functions](./lambda-functions.md)**
>
> ➡️ **[Next: Closures](./closures.md)**
>
> 🔝 **[Back to Top](#-variable-scope-in-python)**
>
> 🏠 **[Home](../README.md)**
