# ✨ String Manipulation and Methods

- [✨ String Manipulation and Methods](#-string-manipulation-and-methods)
  - [📜 Introduction to Strings](#-introduction-to-strings)
  - [📝 Creating Strings](#-creating-strings)
    - [Single Quotes vs. Double Quotes](#single-quotes-vs-double-quotes)
    - [Multiline Strings](#multiline-strings)
    - [Special Characters and Escape Sequences](#special-characters-and-escape-sequences)
  - [🔗 String Concatenation and Repetition](#-string-concatenation-and-repetition)
    - [Concatenation](#concatenation)
    - [Repetition](#repetition)
  - [🔍 Accessing Characters and Slices](#-accessing-characters-and-slices)
    - [Indexing](#indexing)
    - [Slicing](#slicing)
  - [🛠 Common String Methods](#-common-string-methods)
    - [Changing Case](#changing-case)
      - [`upper()`](#upper)
      - [`lower()`](#lower)
      - [`title()`](#title)
      - [`capitalize()`](#capitalize)
      - [`swapcase()`](#swapcase)
    - [Searching and Replacing](#searching-and-replacing)
      - [`find()`](#find)
      - [`index()`](#index)
      - [`replace()`](#replace)
      - [`startswith()` and `endswith()`](#startswith-and-endswith)
    - [Splitting and Joining](#splitting-and-joining)
      - [`split()`](#split)
      - [`join()`](#join)
    - [Formatting Strings](#formatting-strings)
      - [F-Strings](#f-strings)
      - [`format()` Method](#format-method)
      - [Percentage Formatting](#percentage-formatting)
    - [Trimming Whitespace](#trimming-whitespace)
      - [`strip()`](#strip)
      - [`lstrip()` and `rstrip()`](#lstrip-and-rstrip)
    - [Checking String Characteristics](#checking-string-characteristics)
      - [`isalnum()`, `isalpha()`, `isdigit()`, etc.](#isalnum-isalpha-isdigit-etc)
  - [🔄 String Immutability](#-string-immutability)
  - [🧵 String Encoding and Decoding](#-string-encoding-and-decoding)
  - [📏 String Length and Membership](#-string-length-and-membership)
    - [`len()` Function](#len-function)
    - [`in` and `not in` Operators](#in-and-not-in-operators)
  - [🧰 Advanced String Methods](#-advanced-string-methods)
    - [`format_map()`](#format_map)
    - [`maketrans()` and `translate()`](#maketrans-and-translate)
  - [⚠️ Common Pitfalls and Best Practices](#️-common-pitfalls-and-best-practices)
  - [🧠 Key Takeaways](#-key-takeaways)

## 📜 Introduction to Strings

Strings in Python are sequences of characters used to store and manipulate text data. They are one of the most commonly used data types and are essential for handling textual information in applications.

## 📝 Creating Strings

### Single Quotes vs. Double Quotes

Strings can be created using single quotes `'...'` or double quotes `"..."`. Both are functionally the same.

```python
message1 = 'Hello, World!'
message2 = "Hello, World!"
```

Using both allows you to include quotes within strings without using escape characters.

```python
quote = 'She said, "Python is awesome!"'
apostrophe = "It's a sunny day."
```

### Multiline Strings

For strings that span multiple lines, use triple quotes `'''...'''` or `"""..."""`.

```python
multiline_text = """This is a
multiline string that spans
across several lines."""
```

### Special Characters and Escape Sequences

Special characters like newline `\n`, tab `\t`, and others can be included using escape sequences.

```python
newline = "First Line\nSecond Line"
tabbed = "Column1\tColumn2"
backslash = "This is a backslash: \\"
```

Common escape sequences:

- `\n` : Newline
- `\t` : Tab
- `\\` : Backslash
- `\'` : Single Quote
- `\"` : Double Quote

Raw strings can be used to ignore escape sequences by prefixing the string with `r`:

```python
raw_string = r"C:\new_folder\test.txt"  # Escape sequences are not processed
```

## 🔗 String Concatenation and Repetition

### Concatenation

You can combine strings using the `+` operator.

```python
greeting = "Hello"
name = "Alice"
message = greeting + ", " + name + "!"
print(message)  # Output: Hello, Alice!
```

### Repetition

You can repeat strings using the `*` operator.

```python
separator = "-" * 10
print(separator)  # Output: ----------
```

## 🔍 Accessing Characters and Slices

Strings are sequences, so you can access individual characters and slices.

### Indexing

Access characters using their index (starting from 0).

```python
word = "Python"
first_char = word[0]    # 'P'
last_char = word[-1]    # 'n' (negative indices start from the end)
```

### Slicing

Extract substrings using slice notation `[start:stop:step]`.

```python
substring = word[0:3]   # 'Pyt' (characters from index 0 up to, but not including, index 3)
every_other = word[::2] # 'Pto' (every second character)
reversed_word = word[::-1]  # 'nohtyP' (reverse the string)
```

## 🛠 Common String Methods

Python provides many built-in methods for string manipulation.

### Changing Case

#### `upper()`

Converts all characters to uppercase.

```python
text = "hello"
print(text.upper())  # Output: 'HELLO'
```

#### `lower()`

Converts all characters to lowercase.

```python
text = "HELLO"
print(text.lower())  # Output: 'hello'
```

#### `title()`

Converts the first character of each word to uppercase.

```python
text = "hello world"
print(text.title())  # Output: 'Hello World'
```

#### `capitalize()`

Capitalizes the first character of the string.

```python
text = "python programming"
print(text.capitalize())  # Output: 'Python programming'
```

#### `swapcase()`

Swaps uppercase characters to lowercase and vice versa.

```python
text = "Hello World"
print(text.swapcase())  # Output: 'hELLO wORLD'
```

### Searching and Replacing

#### `find()`

Returns the lowest index where the substring is found, or `-1` if not found.

```python
text = "Hello, World!"
index = text.find("World")
print(index)  # Output: 7
```

#### `index()`

Similar to `find()`, but raises a `ValueError` if the substring is not found.

```python
text = "Hello, World!"
index = text.index("World")
print(index)  # Output: 7
```

#### `replace()`

Replaces occurrences of a substring with another substring.

```python
text = "Hello, World!"
new_text = text.replace("World", "Python")
print(new_text)  # Output: 'Hello, Python!'
```

#### `startswith()` and `endswith()`

Check if a string starts or ends with a specified substring.

```python
text = "Hello, World!"
print(text.startswith("Hello"))  # Output: True
print(text.endswith("!"))        # Output: True
```

### Splitting and Joining

#### `split()`

Splits a string into a list of substrings based on a separator.

```python
text = "apple,banana,cherry"
fruits = text.split(",")
print(fruits)  # Output: ['apple', 'banana', 'cherry']
```

#### `join()`

Joins elements of an iterable into a single string using a separator.

```python
fruits = ['apple', 'banana', 'cherry']
text = ", ".join(fruits)
print(text)  # Output: 'apple, banana, cherry'
```

### Formatting Strings

#### F-Strings

Use f-strings for embedding expressions inside string literals (Python 3.6+).

```python
name = "Alice"
age = 30
message = f"{name} is {age} years old."
print(message)  # Output: 'Alice is 30 years old.'
```

#### `format()` Method

```python
message = "Hello, {}. You are {} years old.".format("Bob", 25)
print(message)  # Output: 'Hello, Bob. You are 25 years old.'
```

You can use named placeholders:

```python
message = "Hello, {name}. You are {age} years old.".format(name="Carol", age=22)
```

#### Percentage Formatting

An older method using `%` operator.

```python
name = "Dave"
age = 40
message = "Hello, %s. You are %d years old." % (name, age)
```

### Trimming Whitespace

#### `strip()`

Removes leading and trailing whitespace.

```python
text = "   Hello, World!   "
print(text.strip())  # Output: 'Hello, World!'
```

#### `lstrip()` and `rstrip()`

Removes leading or trailing whitespace, respectively.

```python
text = "   Hello, World!   "
print(text.lstrip())  # Output: 'Hello, World!   '
print(text.rstrip())  # Output: '   Hello, World!'
```

You can also specify characters to remove.

```python
text = "---Hello---"
print(text.strip("-"))  # Output: 'Hello'
```

### Checking String Characteristics

#### `isalnum()`, `isalpha()`, `isdigit()`, etc.

Check if the string consists of certain types of characters.

```python
text = "Python3"

print(text.isalnum())  # True if all characters are alphanumeric
print(text.isalpha())  # True if all characters are alphabetic
print(text.isdigit())  # True if all characters are digits
print(text.islower())  # True if all characters are lowercase
print(text.isupper())  # True if all characters are uppercase
```

## 🔄 String Immutability

Strings in Python are immutable, meaning once created, they cannot be modified. Any operation that seems to modify a string actually creates a new string.

```python
text = "Hello"
text += " World"
print(text)  # Output: 'Hello World'
```

Under the hood, a new string object is created, and `text` now references the new object.

## 🧵 String Encoding and Decoding

Strings in Python 3 are Unicode by default. You can encode and decode strings using various encodings like UTF-8.

```python
text = "Hello, World!"
encoded_text = text.encode('utf-8')  # Encode to bytes
print(encoded_text)  # Output: b'Hello, World!'

decoded_text = encoded_text.decode('utf-8')  # Decode back to string
print(decoded_text)  # Output: 'Hello, World!'
```

## 📏 String Length and Membership

### `len()` Function

Get the length of a string.

```python
text = "Hello"
print(len(text))  # Output: 5
```

### `in` and `not in` Operators

Check for substring membership.

```python
text = "Hello, World!"
print("World" in text)     # Output: True
print("Python" not in text)  # Output: True
```

## 🧰 Advanced String Methods

### `format_map()`

Similar to `format()`, but uses a mapping (like a dictionary) directly.

```python
data = {'name': 'Eve', 'age': 28}
message = "Hello, {name}. You are {age} years old.".format_map(data)
print(message)  # Output: 'Hello, Eve. You are 28 years old.'
```

### `maketrans()` and `translate()`

Used for character substitution.

```python
intab = "aeiou"
outtab = "12345"
trantab = str.maketrans(intab, outtab)

text = "This is a test."
translated_text = text.translate(trantab)
print(translated_text)  # Output: 'Th3s 3s 1 t2st.'
```

## ⚠️ Common Pitfalls and Best Practices

- **Immutable Strings**: Remember that strings are immutable. Methods like `replace()` return a new string; they don't modify the original.
- **String Concatenation in Loops**: Avoid using `+` for concatenation in loops; use `join()` for better performance.
  
  ```python
  # Inefficient
  s = ""
  for i in range(1000):
      s += str(i)
  
  # Efficient
  s = "".join(str(i) for i in range(1000))
  ```

- **Beware of Index Errors**: Accessing indices out of range will raise an `IndexError`.

  ```python
  text = "Python"
  print(text[10])  # Raises IndexError
  ```

- **Use Raw Strings for Regular Expressions**: When working with regular expressions, use raw strings to avoid issues with escape sequences.

  ```python
  import re
  pattern = r"\d+"  # Raw string
  ```

## 🧠 Key Takeaways

- Strings are essential for text manipulation and are immutable sequences of characters.
- Use string methods for efficient and clean manipulation.
- Be aware of string immutability and use methods that return new strings.
- Use f-strings for readable and efficient string formatting.
- Utilize slicing and indexing to access and manipulate substrings.
- Be cautious with operations that may lead to errors, such as index out of range.

---

> ⬅️ **[Previous: User Input and Output](./user-input-output.md)**
>
> ➡️ **[Next: Conditionals (`if`, `else`, `elif`)](../control-flow/conditionals.md)**
>
> 🔝 **[Back to Top](#-string-manipulation-and-methods)**
>
> 🏠 **[Home](../README.md)**
