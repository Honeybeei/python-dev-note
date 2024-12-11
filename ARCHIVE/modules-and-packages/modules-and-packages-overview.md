# 📦 Modules and Packages Overview

- [📦 Modules and Packages Overview](#-modules-and-packages-overview)
  - [❓ What are they?](#-what-are-they)
    - [📄 Modules](#-modules)
    - [📁 Packages](#-packages)
  - [🤔 Why do we need them?](#-why-do-we-need-them)
  - [📝 Example](#-example)

## ❓ What are they?

No worries, It is not as complicated as it sounds.

### 📄 Modules

> A `.py` file containing Python code. (functions, classes, variables, etc.)

### 📁 Packages

> A directory containing Python modules and an `__init__.py` file.

Easy, right? 🎨🧑🏼‍🎨🖼️

## 🤔 Why do we need them?

- **Organization**: Helps in organizing code into smaller, manageable chunks.
- **Reusability**: Code can be reused across multiple projects.
- **Namespace**: Avoids naming conflicts by providing a separate namespace for each module.
- **Performance**: Improves performance by loading only the required modules.

## 📝 Example

```plaintext
.
├── main.py
├── my_package1
│   ├── __init__.py
│   ├── module1.py
│   ├── module2.py
│   └── sub_package1
│       ├── __init__.py
│       ├── module5.py
│       └── module6.py
└── my_package2
    ├── __init__.py
    ├── module3.py
    └── module4.py
```

In the above example:

- `main.py` is the main script.
- `my_package1`, `my_package2` and `sub_package1` are packages.
- `module1.py`, `module2.py`, `module3.py`, `module4.py`, `module5.py` and `module6.py` are modules.
- `__init__.py` files are used to mark directories on disk as Python package directories.

More details on how to create packages and modules will be covered in the next sections.
