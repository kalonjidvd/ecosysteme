# 1. Utiliser l'image officielle Jupyter stable contenant déjà Python et JupyterLab
FROM docker.io/jupyter/base-notebook:python-3.10

USER root

# 2. Installe le compilateur G++ pour le C++
RUN apt-get update && apt-get install --yes --no-install-recommends \
    g++ \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

USER ${NB_USER}

# 3. Installer le noyau C++ (xeus-cling), le noyau Java (ijava) et ipywidgets d'un seul coup
RUN mamba install --yes -c conda-forge \
    xeus-cling \
    ijava \
    ipywidgets \
    && mamba clean --all -f -y
