# ⚙️ Zshrc

Add this to your `.zshrc` file to make your life easier with Python.

```sh

# Utility functions

# color codes
kBlack="30"
kRed="31"
kGreen="32"
kYellow="33"
kBlue="34"
kMagenta="35"
kCyan="36"
kWhite="37"


color_string() {
  # $1: color code
  # $2: text
  echo "\033[$1m$2\033[0m"
}

# ---------------------------------------------------------------------------- #

# alias for python

alias python="python3"
alias pip="pip3"
alias py="python3"

# alias for venv in python
create_venv() {
  # check if .venv exists
  if [ -d ".venv" ]; then
    color_string $kRed "Error: .venv already exists. Please remove it first."
    return 1
  fi

  # Get Global Python Version
  global_python_version=$(python --version | cut -d " " -f 2 | cut -d "." -f 1,2)
  echo "Global Python Version: $(color_string $kGreen $global_python_version)"

  # prompt user for python version
  echo "Enter the python version (e.g. 3.11 | default: $(color_string $kGreen $global_python_version)):"
  read -r python_version
  # if the user does not provide python version, use the global python version
  if [ -z "$python_version" ]; then
    python_version=$global_python_version
  fi

  # create venv
  python$python_version -m venv .venv
  echo "Virtual environment created [$(color_string $kGreen $python_version)]"

  source .venv/bin/activate
  venv_version=$(python --version)
  echo "Virtual environment activated [$(color_string $kGreen $venv_version)]"
}
alias py-venv-create="create_venv"
alias py-venv-activate="source .venv/bin/activate"
alias py-venv-deactivate="deactivate"
alias py-venv-freeze="pip freeze > requirements.txt"
alias py-venv-install="pip install -r requirements.txt"
add_dependency() {
  if [ $# -eq 0 ]; then
    echo "Error: Please provide a dependency name."
    return 1
  fi

  # add all dependencies and freeze
  pip install $*
  pip freeze > requirements.txt
  echo "Dependency added: $*"
}
alias py-venv-add="add_dependency"

# alias for poetry

# function for delete all poetry virtual environments
delete_all_poetry_virtual_environments() {
  echo "Deleting all poetry virtual environments..."
  rm -rf $HOME/Library/Caches/pypoetry/virtualenvs/*
  echo "All poetry virtual environments deleted."
}
alias py-poetry-clean="delete_all_poetry_virtual_environments"

```
