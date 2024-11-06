# 🙋 Hello, World!

- [🙋 Hello, World!](#-hello-world)
  - [🛠️ Installing Python](#️-installing-python)
  - [🔄 Setting Alias for Python (macOS/Linux)](#-setting-alias-for-python-macoslinux)
  - [✍️ Writing Your First Python Program](#️-writing-your-first-python-program)
  - [🚀 Executing the Program](#-executing-the-program)
  - [🎉 Expected Output](#-expected-output)

## 🛠️ Installing Python

To start programming in Python, the first step is to install Python on your computer.

> ... Let's skip this part. There are many resources on the internet about how to install Python.

## 🔄 Setting Alias for Python (macOS/Linux)

> For macOS and Linux users...

1. Open your terminal and edit the `.zshrc` file (or `.bashrc` if you're using bash) using a text editor like nano:

   ```bash
   vim ~/.zshrc
   ```

2. Add the following line to set an alias:

   ```bash
   alias python="python3"
   ```

3. Save the file and exit the editor. IT IS THE HARDEST PART! 😅

4. Reload the terminal configuration:

   ```bash
   source ~/.zshrc
   ```

5. Now you can just type `python` to run Python 3.

> Why do we need to set an alias? Because Python 2 is still installed on many systems, and the `python` command might refer to Python 2. By setting an alias, we ensure that the `python` command always refers to Python 3.
>
> Or just use `python3` instead of `python` in the commands if you don't want to set an alias.

## ✍️ Writing Your First Python Program

```python
print("Hello, World!")
```

Save this code in a file ends with `.py`. For example, `hello_world.py`.

## 🚀 Executing the Program

```bash
python hello_world.py
```

> Execute the program using the `python` command followed by the name of the file.
>
> If you didn't set an alias, use `python3` instead of `python`.

## 🎉 Expected Output

When you run the program, it will output:

```bash
Hello, World!
```

Easy, right?
