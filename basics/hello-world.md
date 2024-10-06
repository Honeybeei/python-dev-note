# 🙋 Hello, World!

- [🙋 Hello, World!](#-hello-world)
  - [🛠️ Installing Python](#️-installing-python)
    - [🪟 Windows](#-windows)
    - [🍏 macOS](#-macos)
    - [🐧 Linux](#-linux)
  - [🔄 Setting Alias for Python (macOS/Linux)](#-setting-alias-for-python-macoslinux)
  - [✍️ Writing Your First Python Program](#️-writing-your-first-python-program)
  - [🚀 Executing the Program](#-executing-the-program)
    - [🪟 Windows](#-windows-1)
    - [🍏 macOS/Linux (with alias)](#-macoslinux-with-alias)
  - [🎉 Expected Output](#-expected-output)

## 🛠️ Installing Python

To start programming in Python, the first step is to install Python on your computer. Here's how to do that:

### 🪟 Windows

1. Go to the [official Python website](https://www.python.org/downloads/).
2. Download the latest version for Windows.
3. Run the installer and **make sure to check the box "Add Python to PATH"**.
4. After installation, open the **Command Prompt** and type:

   ```bash
   python --version
   ```

   This will display the installed Python version.

### 🍏 macOS

1. Python comes pre-installed on macOS. However, it's recommended to install the latest version.
2. Install [Homebrew](https://brew.sh/) if you haven't already. In the Terminal, run:

   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```

3. Install Python using Homebrew:

   ```bash
   brew install python
   ```

4. Verify the installation:

   ```bash
   python3 --version
   ```

### 🐧 Linux

1. On most Linux distributions, Python is pre-installed. To install or update Python:
   - For Ubuntu/Debian-based systems:

     ```bash
     sudo apt update
     sudo apt install python3
     ```

   - For Fedora-based systems:

     ```bash
     sudo dnf install python3
     ```

2. Verify the installation:

   ```bash
   python3 --version
   ```

## 🔄 Setting Alias for Python (macOS/Linux)

If you're using macOS or Linux, you can set an alias to simplify running Python commands. Instead of typing `python3` each time, you can set an alias for `python`.

1. Open your terminal and edit the `.zshrc` file (or `.bashrc` if you're using bash) using a text editor like nano:

   ```bash
   nano ~/.zshrc
   ```

2. Add the following line to set an alias:

   ```bash
   alias python="python3"
   ```

3. Save the file and exit the editor (in nano, press `CTRL + X` or `CMD + X`, then `Y` to confirm).
4. Reload the terminal configuration:

   ```bash
   source ~/.zshrc
   ```

5. Now you can just type `python` to run Python 3.

## ✍️ Writing Your First Python Program

Once Python is installed, you can write and execute your first Python program. Here's how:

1. Open a text editor (e.g., Notepad on Windows, TextEdit on macOS, or nano in Linux).
2. Write the following code:

   ```python
   print("Hello, World!")
   ```

3. Save the file with a `.py` extension (e.g., `hello_world.py`).

## 🚀 Executing the Program

### 🪟 Windows

1. Open the **Command Prompt**.
2. Navigate to the directory where your `hello_world.py` file is located. Use the `cd` command to change the directory:

   ```bash
   cd path\to\your\directory
   ```

3. Run the program:

   ```bash
   python hello_world.py
   ```

### 🍏 macOS/Linux (with alias)

1. Open the **Terminal**.
2. Navigate to the directory where your `hello_world.py` file is located. Use the `cd` command:

   ```bash
   cd /path/to/your/directory
   ```

3. Run the program:

   ```bash
   python hello_world.py
   ```

## 🎉 Expected Output

When you run the program, it will output:

```bash
Hello, World!
```

Congratulations! You've successfully written and executed your first Python program.

---

> ➡️ **[Next: Variables and Data Types](./variables-and-data-types.md)**
>
> 🔝 **[Back to Top](#-hello-world)**
>
> 🏠 **[Home](../../index.md)**
