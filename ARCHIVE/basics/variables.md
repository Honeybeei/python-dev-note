# 📘 Variables

- [📘 Variables](#-variables)
  - [📦 Variables in Python](#-variables-in-python)
    - [👾 Under the hood](#-under-the-hood)
    - [👯‍♂️ Assigning Multiple Variables](#️-assigning-multiple-variables)
    - [🔭 Variable Scope](#-variable-scope)
  - [👍 Naming Conventions and Best Practices](#-naming-conventions-and-best-practices)

## 📦 Variables in Python

- Python **does not require** you to declare a variable’s type explicitly.
- A variable is created the moment you assign a value to it.

### 👾 Under the hood

```python
x = 5 # x is a nickname for the memory location where 5 is stored
```

Under the hood, Python uses pointers to reference memory locations where data is stored. When you assign a variable to a value, you are essentially creating a pointer to the memory location where the value is stored.

### 👯‍♂️ Assigning Multiple Variables

You can assign multiple variables in a single line:

```python
x, y, z = 5, 10, 15
a = b = c = 20
```

Cool, right? 😎

### 🔭 Variable Scope

Python has three variable scopes:

- **Global**
  - Defined outside of any function.
  - Accessible throughout the entire program.
- **Local**
  - Defined inside a function.
  - Accessible only within the function.

```python
# Global variable
global_var = "I am a global variable"

def my_function():
    # Local variable
    local_var = "I am a local variable"
    print(local_var)
    print(global_var)

my_function()

print(global_var)
print(local_var) # NameError: name 'local_var' is not defined
```

## 👍 Naming Conventions and Best Practices

In Python, variable names should follow specific rules:

- Variable names must start with a letter (a-z, A-Z) or an underscore (`_`), followed by letters, numbers, or underscores.
- Variable names are case-sensitive (`var` and `Var` are different).
- Avoid using Python keywords as variable names (`class`, `for`, `if`, `etc`.).

Good practices:

- Use meaningful variable names (`num_students` instead of `n`).
- Use snake_case (all lowercase with underscores) for variable names (`student_name`).

> There will be more on [style guide](../additional-topics/style-guide.md)
