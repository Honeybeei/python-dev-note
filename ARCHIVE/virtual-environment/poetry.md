# ✍️ Poetry

- [✍️ Poetry](#️-poetry)
  - [🧐 What is Poetry?](#-what-is-poetry)
  - [🤩 Why Poetry?](#-why-poetry)
  - [🚀 How to use it](#-how-to-use-it)
    - [📦 Installation](#-installation)
      - [Linux/MacOS](#linuxmacos)
      - [Windows](#windows)
    - [🏗️ Creating a New Project](#️-creating-a-new-project)
    - [📥 Manage Dependencies](#-manage-dependencies)
      - [Add Dependencies](#add-dependencies)
      - [Remove Dependencies](#remove-dependencies)
      - [Install Dependencies](#install-dependencies)
      - [Update Dependencies](#update-dependencies)
    - [🖥️ Virtual Environment Management](#️-virtual-environment-management)
  - [📚 Files Explanation](#-files-explanation)
    - [👀 About `pyproject.toml`](#-about-pyprojecttoml)
      - [Sections:](#sections)
    - [🔒 `poetry.lock`](#-poetrylock)

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
>
> Or read my notes below. 😄

### 📦 Installation

> It should be installed in your system before using it.

#### Linux/MacOS

```bash
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

  > You can also add Poetry to an Existing Project with the following steps:

  ```bash
  mkdir my_project
  cd my_project
  poetry init
  ```

  It will ask you a few questions to generate a `pyproject.toml` file.

### 📥 Manage Dependencies

#### Add Dependencies

- `poetry add <package-name>`: Adds a package as a dependency. 
- `poetry add <package-name> --dev`: Adds a package as a development dependency.

#### Remove Dependencies

- `poetry remove <package-name>`: Removes a package from dependencies.

#### Install Dependencies

- `poetry install`: Installs all dependencies from `pyproject.toml`.

#### Update Dependencies

- `poetry update`: Updates all dependencies to the latest version.

### 🖥️ Virtual Environment Management

- `poetry shell`: Activates the virtual environment.
  - To deactivate the virtual environment, simply type `exit` or press `Ctrl + D`.
- `poetry run <command>`: Runs a command in the virtual environment.
  - Example: `poetry run python my_script.py`
- `poetry env list`: Lists all virtual environments.
- `poetry env remove <name>`: Removes a virtual environment.

## 📚 Files Explanation

### 👀 About `pyproject.toml`

- Main configuration file for Poetry.
- Contains project metadata, dependencies, and build settings.

#### Sections:

- `[tool.poetry]`: Project metadata like name, version, description, authors, license, etc.
- `[tool.poetry.dependencies]`: Project dependencies.
- `[tool.poetry.dev-dependencies]`: Development dependencies.
- `[build-system]`: Build settings.

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

### 🔒 `poetry.lock`

- Auto-generated file that locks dependency versions.
- Ensures the same versions are installed every time.