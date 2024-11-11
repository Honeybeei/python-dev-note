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
      - [Reversing String with Slicing](#reversing-string-with-slicing)

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

- **Syntax**: `str.strip([chars])`
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

- **Syntax**: `str.center(width, [fillchar])`
  - `width`: The total width of the string after padding.
  - `fillchar`: The character to use for padding. Default is a space.
- Pads the string with `fillchar` on both sides until it reaches the specified width.

```python
string = "Hello, World!"
print(string.center(20))  # Output: '   Hello, World!   '
print(string.center(20, "*"))  # Output: '***Hello, World!****'\
```

#### `ljust()` and `rjust()`

- **Syntax**: `str.ljust(width, [fillchar])`, `str.rjust(width, [fillchar])`
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

- **Syntax**: `str.find(sub[, start[, end]])`
  - `sub`: The substring to search for.
  - `start`: The starting index for the search.
  - `end`: The ending index for the search.
  - Returns the index of the first occurrence of the substring in the string.
    - Returns `-1` if the substring is not found.

```python
string = 'Hello, World!'
print(string.find('World'))  # Output: 7
print(string.find('Python'))  # Output: -1

# Specifying start and end index
print(string.find('o', 5, 10))  # Output: 7
```

#### `rfind()`

- Similar to `find()`, but searches from the end of the string. (Reverse find)

```python
string = 'Hello, World!'
print(string.rfind('o'))  # Output: 8
```

#### `index()`

- Similar to `find()`, but raises a `ValueError` if the substring is not found.

```python
string = 'Hello, World!'
try:
    print(string.index('Python'))
except ValueError:
    print('Substring not found')
```

#### `rindex()`

- Similar to `index()`, but searches from the end of the string. (Reverse index)

#### `startswith()`

- **Syntax**: `str.startswith(prefix[, start[, end]])`
  - `prefix`: The prefix to search for.
  - `start`: The starting index for the search.
  - `end`: The ending index for the search.
  - Returns `True` if the string starts with the specified prefix; otherwise, `False`.
- Useful for checking if a string starts with a specific substring.

```python
string = 'Hello, World!'
print(string.startswith('Hello'))  # Output: True
print(string.startswith('World'))  # Output: False
```

#### `endswith()`

- **Syntax**: `str.endswith(suffix[, start[, end]])`
  - `suffix`: The suffix to search for.
  - `start`: The starting index for the search.
  - `end`: The ending index for the search.
  - Returns `True` if the string ends with the specified suffix; otherwise, `False`.
- Useful for checking if a string ends with a specific substring.

```python
string = 'Hello, World!'
print(string.endswith('World!'))  # Output: True
print(string.endswith('Hello'))  # Output: False
```

### 🔄 Replacing and Substituting

#### `replace()`

- **Syntax**: `str.replace(old, new[, count])`
  - `old`: The substring to be replaced.
  - `new`: The new substring to replace the old one.
  - `count`: The number of occurrences to replace. Default is all occurrences.
  - Returns a new string with all occurrences of `old` replaced by `new`.

```python
string = 'Hello, World!'
print(string.replace('World', 'Python'))  # Output: 'Hello, Python!'
```

#### `translate()`

- **Syntax**: `str.translate(table)`
  - `table`: A translation table containing the mapping of characters.
  - Returns a new string with characters mapped according to the translation table.
- Useful for replacing multiple characters at once.

```python
string = 'Hello, World!'
translation_table = str.maketrans('HW', 'PY') # Replace 'H' with 'P' and 'W' with 'Y'
print(string.translate(translation_table))  # Output: 'Pello, Yorld!'
```

#### `re.sub()`

- **Syntax**: `re.sub(pattern, repl, string, count=0, flags=0)`
  - `pattern`: The regular expression pattern to search for.
  - `repl`: The replacement string.
  - `string`: The input string.
  - `count`: The maximum number of occurrences to replace. Default is all occurrences.
  - `flags`: Optional flags.
  - Returns a new string with all occurrences of the pattern replaced by the replacement string.
- Useful for replacing substrings that match a regular expression pattern.

```python
import re

text = "123 abc 456 def"
replaced_text = re.sub(r"\d+", "#", text)
print(replaced_text)  # Output: "# abc # def"
```

#### `re.subn()`

- Similar to `re.sub()`, but it returns a tuple containing the new string and the number of substitutions made.

```python
import re

text = "123 abc 456 def"
replaced_text, num_subs = re.subn(r"\d+", "#", text)
print(replaced_text)  # Output: "# abc # def"
print(num_subs)       # Output: 2
```

### 🔗 Splitting and Joining

#### `split()`

- **Syntax**: `str.split(sep=None, maxsplit=-1)`
  - `sep`: The separator to split the string. Default is whitespace.
  - `maxsplit`: The maximum number of splits to perform. Default is all occurrences.
  - Returns a list of substrings separated by the specified separator.

```python
string = 'Hello, World!'
print(string.split())  # Output: ['Hello,', 'World!']
```

#### `rsplit()`

- Similar to `split()`, but splits from the right.
- Useful for splitting strings for a specific number of occurrences from the right.

```python
string = "apple, banana, cherry, date"
print(string.rsplit(", ", 1))  # Output: ['apple, banana, cherry', 'date']
```

#### `partition()`

- **Syntax**: `str.partition(sep)`
  - `sep`: The separator to partition the string.
  - Returns a tuple containing the part before the separator, the separator itself, and the part after the separator.

```python
string = 'Hello, World!'
print(string.partition(', '))  # Output: ('Hello', ', ', 'World!')
```

#### `rpartition()`

- Similar to `partition()`, but partitions from the right.

```python
string = "apple, banana, cherry, date"
print(string.rpartition(", "))  # Output: ('apple, banana, cherry', ', ', 'date')
```

#### `join()`

- **Syntax**: `sep.join(iterable)`
  - `sep`: The separator to join the elements of the iterable.
  - `iterable`: An iterable containing the elements to join.
  - Returns a new string by joining the elements of the iterable with the specified separator.

```python
words = ['apple', 'banana', 'cherry']
print(', '.join(words))  # Output: 'apple, banana, cherry'
```

### 📏 Counting and Measuring

#### `len()` Function

```python
string = 'Hello, World!'
print(len(string))  # Output: 13
```

#### `count()`

- **Syntax**: `str.count(sub[, start[, end]])`
  - `sub`: The substring to count.
  - `start`: The starting index for the count.
  - `end`: The ending index for the count.
  - Returns the number of occurrences of the substring in the string.

```python
string = 'Hello, World!'
print(string.count('o'))  # Output: 2
```

### ✅ Checking and Validating

#### Content Checks

```python
# isalnum(): Returns True if all characters are alphanumeric.
print('abc123'.isalnum())  # Output: True

# isalpha(): Returns True if all characters are alphabetic.
print('abc'.isalpha())  # Output: True

# isdigit(): Returns True if all characters are digits(0-9).
print('123'.isdigit())  # Output: True

# isdecimal(): Returns True if all characters are decimal.
print('123'.isdecimal())  # Output: True

# isnumeric(): Returns True if all characters are numeric(0-9, fractions, subscripts, superscripts, etc.).
print('123'.isnumeric())  # Output: True
print('½'.isnumeric())  # Output: True
print('Ⅷ'.isnumeric())  # Output: True

# isidentifier(): Returns True if the string is a valid identifier (usable as a variable name).
print('hello'.isidentifier())  # Output: True
print('123'.isidentifier())  # Output: False
```

#### Case Checks

```python
# islower(): Returns True if all characters are lowercase.
print('hello'.islower())  # Output: True

# isupper(): Returns True if all characters are uppercase.
print('HELLO'.isupper())  # Output: True

# istitle(): Returns True if the string follows title case(first letter of each word capitalized)
print('Hello, World!'.istitle())  # Output: True
```

#### Whitespace Checks

```python
# isspace(): Returns True if the string contains only whitespace characters (spaces, tabs, newlines),
print('   '.isspace())  # Output: True
```

#### ASCII Checks

```python
# isprintable(): Returns True if all characters are printable(letters, digits, punctuation, whitespace except for certain control characters).
print('Hello, World!'.isprintable())  # Output: True
print("Hello\nWorld!".isprintable())  # Output: False

# isascii(): Returns True if all characters are ASCII characters(0-127).
print('Hello, World!'.isascii())  # Output: True
print('你好，世界！'.isascii())  # Output: False
```

### 🔪 Slicing and Substring Extraction

#### Basic Slicing

- **Syntax**: `str[start:stop:step]`
  - `start`: The starting index of the slice.
  - `stop`: The ending index of the slice.
  - `step`: The step size for the slice. Default is 1.
- Slicing returns a new string containing the characters from the starting index up to, but not including, the ending index.

```python
string = 'Hello, World!'
print(string[7:])  # Output: 'World!'
print(string[:5])  # Output: 'Hello'
print(string[7:12])  # Output: 'World'
print(string[::2])  # Output: 'Hlo ol!'
```

#### Reversing String with Slicing

```python
string = 'Hello, World!'
print(string[::-1]) # Output: '!dlroW ,olleH'
```
