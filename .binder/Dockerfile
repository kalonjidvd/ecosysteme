FROM docker.io/jupyter/base-notebook:python-3.10

USER root
RUN apt-get update && apt-get install --yes --no-install-recommends g++ && apt-get clean && rm -rf /var/lib/apt/lists/*

USER ${NB_USER}
RUN mamba install --yes -c conda-forge xeus-cling ijava ipywidgets && mamba clean --all -f -y

# On s'assure que JupyterLab s'ouvre directement à la racine de l'utilisateur
ENV HOME=/home/jovyan
WORKDIR ${HOME}

# Ruse repo2docker : On s'assure que tout le contenu du dépôt GitHub est copié à la racine active
COPY --chown=1000:1000 . ${HOME}
