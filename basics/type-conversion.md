# 📘 Type Conversion

- [📘 Type Conversion](#-type-conversion)
  - [❓ What is Type Conversion?](#-what-is-type-conversion)
  - [🔄 Implicit Type Conversion](#-implicit-type-conversion)
    - [Example:](#example)
  - [🛠️ Explicit Type Conversion](#️-explicit-type-conversion)
    - [Examples of Explicit Conversion:](#examples-of-explicit-conversion)
  - [⚙️ Under-the-Hood Process](#️-under-the-hood-process)
    - [Implicit Conversion Under-the-Hood](#implicit-conversion-under-the-hood)
    - [Explicit Conversion Under-the-Hood](#explicit-conversion-under-the-hood)
  - [🔄 Common Type Conversion Functions](#-common-type-conversion-functions)
    - [`int()`](#int)
    - [`float()`](#float)
    - [`str()`](#str)
    - [`bool()`](#bool)
  - [🌐 Type Conversion in Expressions](#-type-conversion-in-expressions)
    - [Example: Converting Input for Calculations](#example-converting-input-for-calculations)
  - [🛡️ Best Practices for Handling Errors in Type Conversion](#️-best-practices-for-handling-errors-in-type-conversion)
    - [Use `try-except` Blocks](#use-try-except-blocks)
    - [Validate Input Before Conversion](#validate-input-before-conversion)
    - [Provide Default Values](#provide-default-values)
    - [Use Functions for Reusable Error Handling](#use-functions-for-reusable-error-handling)
    - [Use Assertions to Ensure Valid Data Types](#use-assertions-to-ensure-valid-data-types)
  - [🧠 Key Considerations](#-key-considerations)

## ❓ What is Type Conversion?

Type conversion in Python refers to converting one data type into another. This is necessary when you need to perform operations on values of different types or display data in a specific format. Python provides built-in functions for **implicit** and **explicit** type conversion.

## 🔄 Implicit Type Conversion

Python automatically converts one data type into another during an operation when needed. This is known as **implicit type conversion** or **type coercion**. It typically happens when you perform operations between two compatible types, such as adding an integer to a float.

### Example:

```python
x = 10  # Integer
y = 2.5  # Float

result = x + y  # x is implicitly converted to float
print(result)  # Output: 12.5
print(type(result))  # Output: <class 'float'>
```

In this case, Python automatically converts the integer `x` to a float before performing the addition. The result is stored as a float.

> Implicit type conversion happens only between compatible data types. If you try to combine incompatible types (e.g., an integer and a string), Python will raise a `TypeError`.

## 🛠️ Explicit Type Conversion

When Python doesn’t automatically convert types, you can do it manually using **explicit type conversion**. You can convert data types using Python’s built-in functions like `int()`, `float()`, `str()`, and `bool()`.

### Examples of Explicit Conversion:

```python
# Integer to String
x = 10
x_str = str(x)
print(x_str)  # Output: "10"
print(type(x_str))  # Output: <class 'str'>

# String to Integer
age = "25"
age_int = int(age)
print(age_int)  # Output: 25
print(type(age_int))  # Output: <class 'int'>

# Float to Integer (truncates the decimal part)
pi = 3.14159
pi_int = int(pi)
print(pi_int)  # Output: 3

# String to Float
price = "19.99"
price_float = float(price)
print(price_float)  # Output: 19.99
```

> If a value cannot be converted (e.g., converting the string `"abc"` to an integer), Python will raise a `ValueError`.

## ⚙️ Under-the-Hood Process

In Python, everything is an object, even simple data types like integers and floats. Each object has an associated **type** and **reference** (a pointer to the memory location). When you perform type conversion, Python allocates new memory for the converted object and updates the reference accordingly.

### Implicit Conversion Under-the-Hood

During implicit conversion, Python checks the types of the values involved in an operation. If they are not the same but are compatible (e.g., `int` and `float`), Python will attempt to promote the smaller type to the larger one to avoid data loss.

In the case of:

```python
x = 10  # Integer
y = 2.5  # Float

result = x + y
```

- Python first **checks the types** of `x` and `y`.
- It detects that `x` is an `int` and `y` is a `float`.
- Python **promotes** `x` to a `float` before performing the addition to preserve precision.
- The result is a new `float` object, and the memory location is updated with the reference to this new object.

### Explicit Conversion Under-the-Hood

In explicit conversion, Python calls the conversion function (`int()`, `str()`, `float()`, etc.), which internally creates a new object of the desired type:

```python
x = 3.14
y = int(x)  # Explicit conversion from float to int
```

- Python calls the `int()` function, which **allocates memory** for a new integer object.
- The `float` value `3.14` is **truncated** to `3`, and a new `int` object is created.
- Python updates the reference `y` to point to the memory location of the new integer object.

This process can involve additional internal checks, such as verifying if the conversion is possible (e.g., converting `"abc"` to an integer is invalid).

## 🔄 Common Type Conversion Functions

### `int()`

Converts a value to an integer. If the value is a float, it truncates the decimal part.

```python
int(4.9)  # Output: 4
int("123")  # Output: 123
```

> Note: Strings must represent valid numbers. For example, `int("abc")` will raise a `ValueError`.

### `float()`

Converts a value to a floating-point number.

```python
float(10)  # Output: 10.0
float("3.14")  # Output: 3.14
```

### `str()`

Converts a value to a string.

```python
str(100)  # Output: "100"
str(3.14)  # Output: "3.14"
```

### `bool()`

Converts a value to a boolean. In Python, the following values are considered `False`:

- `None`
- `False`
- Zero of any numeric type (`0`, `0.0`)
- Empty sequences (`''`, `[]`, `()`)
- Empty mappings (`{}`)

Everything else is considered `True`.

```python
bool(0)  # Output: False
bool(42)  # Output: True
bool("")  # Output: False
bool("Hello")  # Output: True
```

## 🌐 Type Conversion in Expressions

Type conversion is often needed when working with user input, which is typically received as a string. You might need to convert that input to an integer or float to perform arithmetic operations.

### Example: Converting Input for Calculations

```python
age_str = input("Enter your age: ")  # User input is always a string
age = int(age_str)  # Convert to integer
print(f"In 5 years, you will be {age + 5} years old.")
```

## 🛡️ Best Practices for Handling Errors in Type Conversion

Type conversion errors, especially with user input or data from external sources, can result in `ValueError` or `TypeError`. It’s important to handle these errors gracefully to avoid program crashes.

Here are some best practices for handling errors during type conversion:

### Use `try-except` Blocks

Wrap type conversion in a `try-except` block to catch errors like `ValueError` and handle them appropriately. This prevents the program from crashing when an invalid value is encountered.

```python
age_str = input("Enter your age: ")

try:
    age = int(age_str)  # Attempt to convert string to integer
    print(f"In 5 years, you will be {age + 5} years old.")
except ValueError:
    print("Invalid input! Please enter a valid number.")
```

In this example, if the user inputs something that cannot be converted to an integer (like "`abc`"), the program will print an error message instead of crashing.

### Validate Input Before Conversion

Before attempting type conversion, it’s a good practice to check whether the value can be safely converted. For example, you can check if a string represents a valid number using the `str.isdigit()` method.

```python
age_str = input("Enter your age: ")

if age_str.isdigit():  # Check if the string contains only digits
    age = int(age_str)
    print(f"In 5 years, you will be {age + 5} years old.")
else:
    print("Invalid input! Please enter a valid number.")
```

> Note: `isdigit()` works for positive integers only. For floating-point numbers or negative integers, other methods like regular expressions or custom validation functions may be needed.

### Provide Default Values

When a conversion fails, you can handle the error by providing a default value instead of raising an error.

```python
age_str = input("Enter your age: ")

try:
    age = int(age_str)
except ValueError:
    age = 0  # Default value if conversion fails
    print("Invalid input! Using default age of 0.")
```

### Use Functions for Reusable Error Handling

If your program requires frequent type conversions, it’s good practice to encapsulate the conversion logic and error handling into a function. This avoids code duplication and makes your program more maintainable.

```python
def safe_int_conversion(value, default=0):
    """
    Convert the input value to an integer. 
    If conversion fails, return the default value.
    """
    try:
        return int(value)
    except ValueError:
        return default

age_str = input("Enter your age: ")
age = safe_int_conversion(age_str, default=18)  # Default age is 18 if conversion fails
print(f"Your age is {age}.")
```

### Use Assertions to Ensure Valid Data Types

You can use assertions to ensure that the data type is what you expect. This can be useful during debugging or when writing production code where certain assumptions must hold true.

```python
age = "25"

# Ensure that 'age' is an integer
assert isinstance(int(age), int), "Age must be an integer"
```

## 🧠 Key Considerations

- **Loss of Data**: Be cautious when converting between types. For example, converting a float to an integer will truncate the decimal part, potentially leading to a loss of information.

- **Incompatible Conversions**: Some conversions are not allowed, such as converting the string `"hello"` to an integer. Always check whether the conversion is valid to avoid `ValueError`.

- **Edge Cases**: Consider edge cases like empty strings, `None`, or zero when performing conversions, especially with `bool()`.

---

> ⬅️ **[Previous: Basic Syntax and Comments](./basic-syntax-and-comments.md)**
>
> ➡️ **[Next: Operators](./operators.md)**
>
> 🔝 **[Back to Top](#-type-conversion)**
>
> 🏠 **[Home](../README.md)**
