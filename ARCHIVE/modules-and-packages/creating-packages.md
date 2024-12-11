# 🚀 Creating Packages (`__init__.py`)

## 📦 Packages

- Recap! A package is a directory containing Python modules and an `__init__.py` file.
- The `__init__.py` file can be empty or can contain initialization code for the package.

## 📂 Example Package Structure

```plaintext
your_package/               # Top-level package
├── your_package/           # Package directory
│   ├── __init__.py         # Initialization code for the package
│   ├── module1.py          # Module 1
│   │   ├── function1()
│   │   └── function2()
│   ├── module2.py          # Module 2  
│   │   ├── class1()
│   │   └── class2()
│   └── subpackage/         # Subpackage directory
│       ├── __init__.py     # Initialization code for the subpackage
│       ├── submodule1.py   # Submodule 1
│       │   └── function3()
│       └── submodule2.py   # Submodule 2
│           └── class3()
├── tests/                  # Test directory
│   ├── __init__.py
│   ├── test_module1.py
│   └── test_module2.py
├── docs/                   # Documentation directory
│   ├── conf.py
│   ├── index.rst
│   └── ...
├── setup.py                # Setup script
├── README.md               # Readme file
├── LICENSE                 # License file
└── requirements.txt        # Requirements file
```

The above structure is a common layout for a Python package.

## What's in the `__init__.py` file?

Let's see an example of an `__init__.py` file:

```python
# your_package/__init__.py

# Import modules -> expose functions and classes to the package level
from .module1 import function1, function2
from .module2 import class1, class2
from .subpackage.submodule1 import function3  # In this case, we don't need to import function3 in `subpackage/__init__.py`
from .subpackage.submodule2 import class3     # This one too

# Define __all__ to specify what gets imported when using `from your_package import *`
__all__ = [
    'function1',
    'function2',
    'class1',
    'class2',
    'function3',
    'class3'
]
```

- The `__init__.py` file is executed when the package is imported.
- It can be empty or contain initialization code (like importing modules).

## 📦 Subpackages

We also can import objects in `subpackage/__init__.py`. However, there are some pros and cons to this approach:

### Pros

- **Simpler Imports**: You can import objects directly from the package level.
- **