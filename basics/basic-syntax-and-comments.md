#  📝 Basic Syntax and Comments

- [📝 Basic Syntax and Comments](#-basic-syntax-and-comments)
  - [🐍 Python Syntax Overview](#-python-syntax-overview)
    - [Indentation](#indentation)
    - [Statements and Line Breaks](#statements-and-line-breaks)
    - [Comments](#comments)
      - [Single-line Comments](#single-line-comments)
      - [Multi-line Comments](#multi-line-comments)
    - [Docstrings](#docstrings)
  - [🛠 Common Syntax Errors](#-common-syntax-errors)
    - [IndentationError](#indentationerror)
    - [SyntaxError](#syntaxerror)


## 🐍 Python Syntax Overview

Python is known for its clear and easy-to-read syntax. Unlike many other programming languages, Python uses **indentation** to define the structure of the code, rather than curly braces or keywords. (I Have no Idea why they use indentation instead of curly braces. I think it's a bad idea 💩)

### Indentation

In Python, indentation defines the code blocks (such as loops, functions, and conditionals). The standard indentation level is 4 spaces, and it must be consistent throughout your code.

```python
if True:
    print("This is indented")
```

### Statements and Line Breaks

In Python, a single line usually represents a single statement. However, you can split a long statement into multiple lines using a backslash (`\`) at the end of the line:

```python
total = item_price + tax + \
        shipping_cost
```

Alternatively, expressions inside parentheses `()`, square brackets `[]`, or curly braces `{}` do not need a backslash:

```python
total = (item_price + tax +
         shipping_cost)
```

### Comments

Python supports comments, which are lines of text meant for the developer to explain or annotate the code. Comments are ignored by the interpreter.

#### Single-line Comments

Use the `#` symbol to add a comment on a single line:

```python
# This is a single-line comment
x = 5  # You can also put comments at the end of a line
```

#### Multi-line Comments

For multi-line comments, you can use multiple single-line comments or use triple quotes (`'''` or `"""`). Although not technically comments, triple quotes are often used to write multi-line documentation strings (docstrings):

```python
"""
This is a multi-line comment
used for documentation
"""
```

### Docstrings

Docstrings are special types of comments used to document modules, functions, classes, or methods. They are written using triple quotes and placed at the beginning of the definition.

```python
def greet():
    """
    This function prints a greeting message.
    """
    print("Hello, World!")
```

> For more information on docstrings,
> Check the [Python Documentation](https://www.python.org/dev/peps/pep-0257/)
> Or My [Docstrings Note](../additional-topics/docstrings.md)

## 🛠 Common Syntax Errors

### IndentationError

Occurs when there is inconsistent or missing indentation:

```python
if True:
print("This will raise an error")  # Incorrect indentation
```

### SyntaxError

Raised when the code violates Python’s syntax rules:

```python
print "Hello, World!"  # Missing parentheses (Python 3+ requires them)
```
