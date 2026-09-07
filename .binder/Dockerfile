# 1. Utiliser l'image officielle Jupyter stable contenant déjà Python et JupyterLab
FROM docker.io/jupyter/base-notebook:python-3.10

USER root

# 2. Installer les compilateurs système Linux nécessaires
RUN apt-get update && apt-get install --yes --no-install-recommends \
    g++ \
    openjdk-17-jdk-headless \
    curl \
    unzip \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

USER ${NB_USER}

# 3. Installer le noyau C++ (xeus-cling) et les outils widgets graphiques
RUN mamba install --yes -c conda-forge \
    xeus-cling \
    ipywidgets \
    && mamba clean --all -f -y

# 4. Télécharger l'installeur officiel du noyau Java (Lien complet obligatoire)
RUN curl -L "https://github.com" -o /tmp/ijava.zip \
    && unzip /tmp/ijava.zip -d /tmp/ijava_pack \
    && python /tmp/ijava_pack/install.py --sys-prefix \
    && rm -rf /tmp/ijava.zip /tmp/ijava_pack
