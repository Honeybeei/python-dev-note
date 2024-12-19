# 🗿 Constants

- [🗿 Constants](#-constants)
  - [🔑 Key word](#-key-word)
  - [👀 Fast Lookup](#-fast-lookup)
  - [🤯 Huh? No Constant?](#-huh-no-constant)
  - [💆 Handling Constants in Python](#-handling-constants-in-python)

## 🔑 Key word

- Constants
- Separate module
- All-uppercase
- `@dataclass(frozen=True)`

## 👀 Fast Lookup

- Python does not have a true constant type -> Convention: **all-uppercase** names
- Handling constants in Python:
  - Separate module for constants
  - All-uppercase names
  - Make the variables immutable by using `@dataclass` with `frozen=True`

## 🤯 Huh? No Constant?

Although Python does not have a true constant type, the convention is to define constants using **all-uppercase** names:

```python
PI = 3.14159
PYTHON_VERSION = 3
```

## 💆 Handling Constants in Python

This is how I will handle constants in Python:

- **Separate module** for constants
- **All-uppercase** names for constants
- Make the variables **immutable** by using `@dataclass` with `frozen=True`

Like this:

```python
# constants.py
from dataclasses import dataclass

@dataclass(frozen=True)
class Constants:
    PI: float = 3.14159
    GRAVITY: float = 9.81
    MAX_USERS: int = 100
```

Usage:

```python
# main.py
from constants import Constants

const = Constants()
print(const.PI)  # Outputs: 3.14159

# Attempting to change a value will raise an error
# const.PI = 3.14  # Uncommenting this line will raise a FrozenInstanceError
```

[🔙 Back to the main page](./README.md)
