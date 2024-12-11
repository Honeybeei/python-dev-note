# Pyenv

## Install

### Install `pyenv`

On macOS

```bash
brew install pyenv
```

On Linux

```bash
curl https://pyenv.run | bash
```

### Install `pyenv-virtualenv`

This is a plugin for managing Python virtual environments.

On macOS using Homebrew

```bash
brew install pyenv-virtualenv 
```

Or Manually

```bash
git clone https://github.com/pyenv/pyenv-virtualenv.git ~/.pyenv/plugins/pyenv-virtualenv
```

## Usage

### Use a Virtual Environment in a Project

```bash
pyenv local <