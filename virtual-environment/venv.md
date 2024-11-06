# 📂 Venv

- [📂 Venv](#-venv)
  - [☺️ About `venv`](#️-about-venv)
  - [📦 Creating a Virtual Environment](#-creating-a-virtual-environment)
  - [📂 Activating a Virtual Environment](#-activating-a-virtual-environment)
    - [🐧 Linux and macOS](#-linux-and-macos)
    - [🪟 Windows](#-windows)

## ☺️ About `venv`

`venv` is a built-in module in Python. It is used to create lightweight "virtual environments" with their own site directories, optionally isolated from system site directories.

## 📦 Creating a Virtual Environment

```bash
python3 -m venv myenv
```

> `myenv` is the name of the virtual environment. You can use any name you want.

## 📂 Activating a Virtual Environment

### 🐧 Linux and macOS

```bash
source myenv/bin/activate
```

### 🪟 Windows

```bash
myenv\Scripts\activate
```

...