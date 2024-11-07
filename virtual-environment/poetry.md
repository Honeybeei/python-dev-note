# ✍️ Poetry

- [✍️ Poetry](#️-poetry)
  - [🧐 What is Poetry?](#-what-is-poetry)
  - [🤩 Why Poetry?](#-why-poetry)
  - [🚀 How to use it](#-how-to-use-it)
    - [📦 Installation](#-installation)
      - [Linux/MacOS](#linuxmacos)
      - [Windows](#windows)
    - [🏗️ Creating a New Project](#️-creating-a-new-project)
    - [👀 About `pyproject.toml`](#-about-pyprojecttoml)
    - [📥 Installing Dependencies](#-installing-dependencies)

## 🧐 What is Poetry?

Poetry is a Python tool that simplifies dependency management and packaging, allowing developers to declare and manage project dependencies efficiently.

## 🤩 Why Poetry?

- **Unified Tool**: Manages dependencies, virtual environments, and packaging in one tool, reducing the need for multiple utilities.
- **Automatic Dependency Resolution**: Handles version conflicts for you, making it easier to install and update packages without issues.
- **Consistent Environments**: Uses a lock file (`poetry.lock`) to ensure the same versions are installed every time, making deployments reliable.
- **Single Config File**: Keeps everything in one `pyproject.toml` file, simplifying project setup and organization.
- **Easy Publishing**: Built-in support for publishing to PyPI or private repositories, making it quick to share your packages.
- **Isolated Environments**: Automatically creates virtual environments that are isolated from global packages, reducing the risk of conflicts.
- **Cross-Platform Compatibility**: Ensures the same environment on different operating systems, which is helpful for teamwork and deployment.
- **Development vs. Production Dependencies**: Separates dev and production dependencies, making it easy to install only what’s needed in each environment.

## 🚀 How to use it

> [Official Documentation](https://python-poetry.org/docs/)
> Check the official documentation for the most up-to-date information!

### 📦 Installation

> It should be installed in your system before using it.

#### Linux/MacOS

```bas
curl -sSL https://install.python-poetry.org | python3 -h
```

#### Windows

```powershell
(Invoke-WebRequest -Uri https://install.python-poetry.org -UseBasicParsing).Content | py -
```

### 🏗️ Creating a New Project

- **Create a new project**:

  ```bash
  poetry new my_project
  ```

  It will create a new directory called `my_project` with the following structure:

  ```plaintext
  my_project
  ├── pyproject.toml
  ├── README.rst
  ├──  my_project
  │   └── __init__.py
  └── tests
      └── __init__.py
  ```

or

- **Create a new project manually**:

  ```bash
  mkdir my_project
  cd my_project
  poetry init
  ```

  It will ask you a few questions to generate a `pyproject.toml` file.

### 👀 About `pyproject.toml`

`pyproject.toml` is a configuration file. This file will orchestrate your project and its dependencies.

```toml
[tool.poetry]
name = "my_project"
version = "0.1.0"
description = "A brief description of the project"
authors = ["Your Name <you@example.com>"]
license = "MIT"
readme = "README.md"
repository = "https://github.com/username/my_project"
homepage = "https://my_project.com"

[tool.poetry.dependencies]
python = "^3.10"
requests = "^2.25.1"
numpy = "^1.21"

[tool.poetry.dev-dependencies]
pytest = "^6.2"
black = "^21.5b2"

[build-system]
requires = ["poetry>=1.1.0"]
build-backend = "poetry.masonry.api"
```

TODO: Add more information about `pyproject.toml`.

### 📥 Installing Dependencies

- `poetry add <package-name>`: Adds a package as a dependency. 
- `poetry add <package-name> --dev`: Adds a package as a development dependency.

TODO: KEEP WRITING ...
