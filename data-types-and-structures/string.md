# 🔤 String

- [🔤 String](#-string)
  - [👶 String Basics](#-string-basics)
    - [✨ Creating Strings](#-creating-strings)
    - [🔒 Immutability](#-immutability)
    - [📏 Ordered Sequence](#-ordered-sequence)
  - [🛠️ String Manipulations](#️-string-manipulations)
    - [📝 Formatting](#-formatting)
      - [Old style formatting (`%` Operator)](#old-style-formatting--operator)
      - [`str.format()` Method](#strformat-method)
      - [f-strings (Python 3.6+)](#f-strings-python-36)
      - [Template Strings](#template-strings)
    - [➕ Concatenation and Repetition](#-concatenation-and-repetition)
    - [✂️ Trimming](#️-trimming)
      - [`strip()`](#strip)
      - [`lstrip()` and `rstrip()`](#lstrip-and-rstrip)
    - [🔲 Padding](#-padding)
      - [`center()`](#center)
      - [`ljust()` and `rjust()`](#ljust-and-rjust)
      - [`zfill()`](#zfill)
    - [🔠 Case Conversion](#-case-conversion)
      - [`lower()`](#lower)
      - [`upper()`](#upper)
      - [`title()`](#title)
      - [`capitalize()`](#capitalize)
      - [`swapcase()`](#swapcase)
      - [`casefold()`](#casefold)
    - [🔍 Searching and Finding](#-searching-and-finding)
      - [`find()`](#find)
      - [`rfind()`](#rfind)
      - [`index()`](#index)
      - [`rindex()`](#rindex)
      - [`startswith()`](#startswith)
      - [`endswith()`](#endswith)
    - [🔄 Replacing and Substituting](#-replacing-and-substituting)
      - [`replace()`](#replace)
      - [`translate()`](#translate)
      - [`re.sub()`](#resub)
      - [`re.subn()`](#resubn)
    - [🔗 Splitting and Joining](#-splitting-and-joining)
      - [`split()`](#split)
      - [`rsplit()`](#rsplit)
      - [`partition()`](#partition)
      - [`rpartition()`](#rpartition)
      - [`join()`](#join)
    - [📏 Counting and Measuring](#-counting-and-measuring)
      - [`len()` Function](#len-function)
      - [`count()`](#count)
    - [✅ Checking and Validating](#-checking-and-validating)
      - [Content Checks](#content-checks)
      - [Case Checks](#case-checks)
      - [Whitespace Checks](#whitespace-checks)
      - [ASCII Checks](#ascii-checks)
    - [🔪 Slicing and Substring Extraction](#-slicing-and-substring-extraction)
      - [Basic Slicing](#basic-slicing)
      - [Extended Slicing(`step` parameter)](#extended-slicingstep-parameter)
      - [Reversing STrings with Slicing](#reversing-strings-with-slicing)
    - [🔐 Encoding and Decoding](#-encoding-and-decoding)
      - [Understanding Character Encodings](#understanding-character-encodings)
      - [`encode()`](#encode)
      - [`decode()`](#decode)
      - [Handling Unicode Strings](#handling-unicode-strings)
  - [🚀 Advanced Topics](#-advanced-topics)
    - [Regular Expressions](#regular-expressions)

## 👶 String Basics

### ✨ Creating Strings

Strings can be created using single quotes (`'`), double quotes (`"`), or triple quotes (`'''` or `"""`).

```python
single_quoted_string = 'Hello, World!'
double_quoted_string = "Hello, World!"
multi_line_str = '''This is a
multi-line string.'''
```

### 🔒 Immutability

Strings are **immutable** in Python. This means that once a string is created, it cannot be changed.

```python
string = 'Hello, World!'

# This will raise an error
string[0] = 'h'
```

### 📏 Ordered Sequence

Strings are an **ordered sequence** of characters, meaning each character has an index that starts from 0 (zero-based index). This allows us to access specific characters in a string.

```python
string = 'Hello, World!'
print(string[0])  # Output: H
print(string[7])  # Output: W
print(string[-1])  # Output: !
```

## 🛠️ String Manipulations

### 📝 Formatting

#### Old style formatting (`%` Operator)

```python
name = 'Honeybeei'
age = 29
print('Hello, %s! You are %d years old.' % (name, age))
```

#### `str.format()` Method

```python
name = 'Honeybeei'
age = 29
print('Hello, {}! You are {} years old.'.format(name, age))
```

#### f-strings (Python 3.6+)

```python
name = 'Honeybeei'
age = 29
print(f'Hello, {name}! You are {age} years old.')
```

#### Template Strings

```python
from string import Template

name = 'Honeybeei'
age = 29
template = Template('Hello, $name! You are $age years old.')
print(template.substitute(name=name, age=age))
```

### ➕ Concatenation and Repetition

```python
string1 = 'Hello, '
string2 = 'World!'
print(string1 + string2)  # Output: Hello, World!
print(string1 * 3)  # Output: Hello, Hello, Hello,
```

### ✂️ Trimming

#### `strip()`

- **Syntax**: `str.strip(chars=' ')`
  - `chars`: A string specifying the set of characters to be removed. Default is whitespace.
- **Returns** a new string. Doesn't modify the original string. (Of course, strings are immutable)
- When no argument is passed, it removes leading and trailing whitespaces.
- When arguments are passed, it removes all characters in the argument from the beginning and end of the string.

```python
# Removing whitespaces (without arguments)
dummy1 = "   Hello world!   "
striped_dummy1 = dummy1.strip()
print(striped_dummy1)  # Output: "Hello world!!"

# Removing specific characters
dummy2 = "---Hello world!--"
striped_dummy2 = dummy2.strip("-")
print(striped_dummy2)  # Output: "Hello world!!"

# Removing Multiple characters.
# The order of the characters in the argument does not matter.
dummy3 = "123Hello world!123321"
striped_dummy3 = dummy3.strip("123")
print(striped_dummy3)  # Output: "Hello world!"
```

#### `lstrip()` and `rstrip()`

- Removes the characters from the left and right sides of the string, respectively.
- Similar to `strip()`, but only works on one side.
- Arguments work the same as `strip()`.

```python
string = "  Hello, World!!!  "

print(string.lstrip())  # Output: 'Hello, World!!!  '
print(string.rstrip())  # Output: '  Hello, World!!!'
```

### 🔲 Padding

#### `center()`

- **Syntax**: `str.center(width, fillchar=' ')`
  - `width`: The total width of the string after padding.
  - `fillchar`: The character to use for padding. Default is a space.
- 

```python
string = "Hello, World!"
print(string.center(20))  # Output: '   Hello, World!   '
print(string.center(20, "*"))  # Output: '***Hello, World!****'\
```

#### `ljust()` and `rjust()`

- **Syntax**: `str.ljust(width, fillchar=' ')`, `str.rjust(width, fillchar=' ')`
  - `width`: The total width of the string after or before padding.
  - `fillchar`: The character to use for padding. Default is a space.

```python
string = "Hello, World!"
print(string.ljust(20))  # Output: 'Hello, World!      '
print(string.rjust(20))  # Output: '      Hello, World!'
```

#### `zfill()`

- **Syntax**: `str.zfill(width)`
  - `width`: The total width of the string after padding with zeros.
- Pads the string with zeros on the left side until it reaches the specified width.
- Useful for padding numbers with leading zeros.

```python
number = "42"
print(number.zfill(5))  # Output: '00042'
```

### 🔠 Case Conversion

#### `lower()`

```python
string = 'Hello, World!'
print(string.lower())  # Output: 'hello, world!'
```

#### `upper()`

```python
string = 'Hello, World!'
print(string.upper())  # Output: 'HELLO, WORLD!'
```

#### `title()`

- Converts the first character of each word to uppercase and the rest to lowercase.

```python
string = 'hello, WORLD!'
print(string.title())  # Output: 'Hello, World!'
```

#### `capitalize()`

- Converts the first character (not the first word) to uppercase and the rest to lowercase.

```python
string = 'hello, WORLD!'
print(string.capitalize())  # Output: 'Hello, world!'
```

#### `swapcase()`

- Swaps the case of each character in the string.

```python
string = 'Hello, World!'
print(string.swapcase())  # Output: 'hELLO, wORLD!'
```

#### `casefold()`

- Similar to `lower()`, but more aggressive. It converts more characters to lowercase(such as German `ß` to `ss`).
- Useful for case-insensitive comparisons between different languages.

```python
german_string = 'ß'
english_string = 'ss'

print(german_string.lower() == english_string.lower())  # Output: False
print(german_string.casefold() == english_string.casefold())  # Output: True
```

### 🔍 Searching and Finding

#### `find()`

#### `rfind()`

#### `index()`

#### `rindex()`

#### `startswith()`

#### `endswith()`

### 🔄 Replacing and Substituting

#### `replace()`

#### `translate()`

#### `re.sub()`

#### `re.subn()`

### 🔗 Splitting and Joining

#### `split()`

#### `rsplit()`

#### `partition()`

#### `rpartition()`

#### `join()`

### 📏 Counting and Measuring

#### `len()` Function

#### `count()`

### ✅ Checking and Validating

#### Content Checks

#### Case Checks

#### Whitespace Checks

#### ASCII Checks

### 🔪 Slicing and Substring Extraction

#### Basic Slicing

#### Extended Slicing(`step` parameter)

#### Reversing STrings with Slicing

### 🔐 Encoding and Decoding

#### Understanding Character Encodings

#### `encode()`

#### `decode()`

#### Handling Unicode Strings

## 🚀 Advanced Topics

### Regular Expressions

...
