# 🛣️ Data Types Overview

- [🛣️ Data Types Overview](#️-data-types-overview)
  - [Mutable vs Immutable](#mutable-vs-immutable)
  - [Ordered vs Unordered Collections](#ordered-vs-unordered-collections)
  - [Truthiness and Falsiness of values](#truthiness-and-falsiness-of-values)
  - [🏛️ The Overview](#️-the-overview)

## Mutable vs Immutable

- **Mutable Objects** can be changed after they are created.
  - Examples:
    - **list**: `my_list = [1, 2, 3]` (can do `my_list[0] = 10`)
    - **dict**: `my_dict = {"name": "Alice"}` (can do `my_dict["name"] = "Bob"`)
- **Immutable Objects** cannot be changed after they are created.
  - Examples:
    - **Integers**: `x = 10` (reassigning `x` just creates a new int)  
    - **Strings**: `s = "hello"` (you can’t change letters in place)  
    - **Tuples**: `t = (1, 2, 3)` (can’t modify elements inside the tuple)

## Ordered vs Unordered Collections

- **Ordered collections** maintain the sequence of insertion.  
  Examples:  
  - **Lists**: `[10, 20, 30]` (the order is always the same)  
  - **Tuples**: `(1, 2, 3)` (fixed order)  
  - **Strings**: `"abc"` (characters have a defined order)

- **Unordered collections** do not maintain a specific sequence.  
  Examples:  
  - **Sets**: `{1, 2, 3}` (the order can vary)  
  - **Dictionaries** (in Python 3.6+, dicts do remember insertion order, but historically they were considered unordered. As of Python 3.7+, the order is guaranteed. For older versions, consider dict keys as unordered.)

## Truthiness and Falsiness of values

In Python, values can behave like `True` or `False` when used in conditionals:

- **Falsy values** are treated as `False` in a boolean context.  
  Examples:  
  - `0` (zero of any numeric type)  
  - `""` (empty string)  
  - `[]` (empty list)  
  - `{}` (empty dictionary)  
  - `None`

- **Truthiness**: Any value not considered falsy is treated as `True`.  
  Examples:  
  - `42` (non-zero integers)  
  - `"hello"` (non-empty strings)  
  - `[1, 2]` (non-empty lists)

## 🏛️ The Overview

| Category  | Type                                                       | Description                        | Example                |
| --------- | ---------------------------------------------------------- | ---------------------------------- | ---------------------- |
| Primitive | [`int`](../data-types-and-structures/int.md)               | Whole numbers                      | `10`, `-5`             |
|           | [`float`](../data-types-and-structures/float.md)           | Decimal numbers                    | `3.14`, `-0.001`       |
|           | [`complex`](../data-types-and-structures/complex.md)       | Complex numbers                    | `2 + 3j`               |
|           | [`bool`](../data-types-and-structures/boolean.md)          | Logical values (`True` or `False`) | `True`, `False`        |
| Sequence  | [`str`](../data-types-and-structures/string.md)            | Textual data, immutable            | `"Hello"`, `'Python'`  |
|           | [`list`](../data-types-and-structures/list.md)             | Ordered, mutable list of items     | `[1, "two", 3.0]`      |
|           | [`tuple`](../data-types-and-structures/tuple.md)           | Ordered, immutable list of items   | `(1, 2, "three")`      |
|           | [`range`](../data-types-and-structures/range.md)           | Sequence of numbers                | `range(5)`             |
| Mapping   | [`dict`](../data-types-and-structures/dict.md)             | Unordered key-value pairs          | `{"name": "Alice"}`    |
| Set       | [`set`](../data-types-and-structures/set.md)               | Unordered, unique items            | `{1, 2, 3}`            |
|           | [`frozenset`](../data-types-and-structures/frozenset.md)   | Immutable set                      | `frozenset({1, 2, 3})` |
| Binary    | [`bytes`](../data-types-and-structures/bytes.md)           | Immutable binary data              | `b"data"`              |
|           | [`bytearray`](../data-types-and-structures/bytearray.md)   | Mutable binary data                | `bytearray(b"data")`   |
|           | [`memoryview`](../data-types-and-structures/memoryview.md) | Access memory of binary objects    | `memoryview(b"data")`  |
| None Type | [`NoneType`](../data-types-and-structures/NoneType.md)     | Represents absence of a value      | `None`                 |
