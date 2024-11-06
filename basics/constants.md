# 🏷️ Constants

- [🏷️ Constants](#️-constants)
  - [🤯 No Constant? Huh?](#-no-constant-huh)
  - [💆 Handling Constants in Python](#-handling-constants-in-python)
    - [🪚 Using Separate Module for Constants](#-using-separate-module-for-constants)
    - [😇 Make the variables immutable](#-make-the-variables-immutable)
      - [Using `@dataclass` with `frozen=True`](#using-dataclass-with-frozentrue)
      - [Using a Custom Class with `__setattr__` Override](#using-a-custom-class-with-__setattr__-override)
      - [Using `enum.Enum` for Named Constants](#using-enumenum-for-named-constants)

## 🤯 No Constant? Huh?

Although Python does not have a true constant type, the convention is to define constants using **all-uppercase** names:

```python
PI = 3.14159
PYTHON_VERSION = 3
```

## 💆 Handling Constants in Python

### 🪚 Using Separate Module for Constants

To maintain code readability and organization, constants are often defined in a **separate module**. For example, a `constants.py` file:

```python
# constants.py
API_KEY = "your_api_key"
BASE_URL = "https://example.com"

# main.py
from constants import API_KEY, BASE_URL

print(API_KEY) # your_api_key
print(BASE_URL) # https://example.com
```

### 😇 Make the variables immutable

#### Using `@dataclass` with `frozen=True`

```python
from dataclasses import dataclass

@dataclass(frozen=True)
class Constants:
    PI: float = 3.14159
    GRAVITY: float = 9.81
    MAX_USERS: int = 100

const = Constants()
print(const.PI)  # Outputs: 3.14159

# Attempting to change a value will raise an error
# const.PI = 3.14  # Uncommenting this line will raise a FrozenInstanceError
```

#### Using a Custom Class with `__setattr__` Override

```python
class _Constants:
    def __init__(self):
        self.PI = 3.14159
        self.GOLDEN_RATIO = 1.61803

    def __setattr__(self, key, value):
        if key in self.__dict__:
            raise TypeError(f"Cannot reassign constant '{key}'")
        super().__setattr__(key, value)

CONSTANTS = _Constants()
print(CONSTANTS.PI)  # Outputs: 3.14159

# Uncommenting the next line would raise an error:
# CONSTANTS.PI = 3.14  # TypeError: Cannot reassign constant 'PI'
```

#### Using `enum.Enum` for Named Constants

```python
from enum import Enum

class Constants(Enum):
    PI = 3.14159
    GOLDEN_RATIO = 1.61803

print(Constants.PI.value)  # Outputs: 3.14159

# Attempting to modify will raise an error:
# Constants.PI = 3.14  # AttributeError: cannot reassign members
```
