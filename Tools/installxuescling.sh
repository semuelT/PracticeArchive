#!/usr/bin/env bash
set -euo pipefail

# 1. Detect architecture and set Miniconda installer URL
ARCH="$(uname -m)"
if [[ "$ARCH" == "x86_64" ]]; then
  MINICONDA_SH="Miniconda3-latest-Linux-x86_64.sh"
else
  echo "Unsupported architecture: $ARCH"
  exit 1
fi
MINICONDA_URL="https://repo.anaconda.com/miniconda/$MINICONDA_SH"

# 2. Install Miniconda if conda command not found
if ! command -v conda &>/dev/null; then
  echo "Conda not found. Installing Miniconda..."
  wget --quiet "$MINICONDA_URL" -O "/tmp/$MINICONDA_SH"
  bash "/tmp/$MINICONDA_SH" -b -p "$HOME/miniconda3"
  rm "/tmp/$MINICONDA_SH"
  export PATH="$HOME/miniconda3/bin:$PATH"
  echo 'export PATH="$HOME/miniconda3/bin:$PATH"' >> "$HOME/.bashrc"
else
  echo "Conda detected. Skipping Miniconda installation."
fi

# 3. Initialize conda for this shell session
# (necessary if conda was just installed)
if [[ -f "$HOME/miniconda3/etc/profile.d/conda.sh" ]]; then
  source "$HOME/miniconda3/etc/profile.d/conda.sh"
fi

# 4. Update conda base environment
echo "Updating conda..."
conda update -n base -c defaults conda -y

# 5. Install xeus-cling (C++ kernel) and Jupyter Notebook
echo "Installing xeus-cling (C++ kernel) and Jupyter Notebook..."
conda install -c conda-forge xeus-cling notebook -y

# 6. Completion message
echo
echo "=============================================="
echo "C++ (xeus-cling) kernel is now installed!"
echo "Run 'jupyter notebook' and select 'C++17' or 'C++14' kernel."
echo "=============================================="
