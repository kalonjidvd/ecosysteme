# 1. Utiliser l'image officielle Jupyter stable contenant déjà Python et JupyterLab
FROM jupyter/base-notebook:python-3.10

USER root

# 2. Installer les compilateurs système Linux nécessaires (Headless pour Java)
RUN apt-get update && apt-get install --yes --no-install-recommends \
    g++ \
    openjdk-17-jdk-headless \
    curl \
    unzip \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

USER ${NB_USER}

# 3. Installer le gestionnaire d'environnement Mamba (Conda ultra-rapide) pour le noyau C++
RUN mamba install --yes -c conda-forge \
    xeus-cling \
    ipywidgets \
    && mamba clean --all -f -y

# 4. Télécharger et installer proprement le noyau Java natif
RUN curl -L https://github.com -o /tmp/ijava.zip \
    && unzip /tmp/ijava.zip -d /tmp/ijava_pack \
    && python /tmp/ijava_pack/install.py --sys-prefix \
    && rm -rf /tmp/ijava.zip /tmp/ijava_pack
