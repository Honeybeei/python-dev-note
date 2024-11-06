# 📂 Venv

- [📂 Venv](#-venv)
  - [☺️ About `venv`](#️-about-venv)
  - [📦 Creating a Virtual Environment](#-creating-a-virtual-environment)
  - [📂 Activating the Virtual Environment](#-activating-the-virtual-environment)
    - [🐧 Linux and macOS](#-linux-and-macos)
    - [🪟 Windows](#-windows)
  - [⬇️ Installing Packages](#️-installing-packages)
  - [🤚 Deactivating the Virtual Environment](#-deactivating-the-virtual-environment)
  - [🥶 Generate `requirements.txt`](#-generate-requirementstxt)
  - [🥵 Using `requirements.txt` to recreate the environment](#-using-requirementstxt-to-recreate-the-environment)
  - [😎 My `.zshrc` Configuration](#-my-zshrc-configuration)

## ☺️ About `venv`

`venv` is a built-in module in Python. It is used to create lightweight "virtual environments" with their own site directories, optionally isolated from system site directories.

## 📦 Creating a Virtual Environment

```bash
python3 -m venv myenv
```

> `myenv` is the name of the virtual environment. You can use any name you want.

## 📂 Activating the Virtual Environment

### 🐧 Linux and macOS

```bash
source myenv/bin/activate
```

### 🪟 Windows

```bash
myenv\Scripts\activate
```

## ⬇️ Installing Packages

```bash
pip install package-name
```

## 🤚 Deactivating the Virtual Environment

```bash
deactivate
```

## 🥶 Generate `requirements.txt`

```bash
pip freeze > requirements.txt
```

> It will generate a `requirements.txt` file with all the packages installed in the virtual environment.

## 🥵 Using `requirements.txt` to recreate the environment

```bash
pip install -r requirements.txt
```

## 😎 My `.zshrc` Configuration

```bash
alias py-venv-create="python3 -m venv .venv"
alias py-venv-activate="source .venv/bin/activate"
alias py-venv-deactivate="deactivate"
alias py-venv-freeze="pip freeze > requirements.txt"
alias py-venv-install="pip install -r requirements.txt"
```
