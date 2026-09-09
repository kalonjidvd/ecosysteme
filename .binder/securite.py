import sys
from IPython.display import display, clear_output
import ipywidgets as widgets

def verifier_acces():
    mot_de_passe_correct = "Kin2026"
    
    # On vérifie dans sys si l'atelier est déjà actif
    if hasattr(sys, '__ATELIER_DEBLOQUE__') and sys.__ATELIER_DEBLOQUE__:
        print("🔓 Session active.")
        return

    print("🔒 CONFIGURATION DE LA SESSION ATELIER")
    password_input = widgets.Password(description='Clé d\'accès:', placeholder='Entrez le mot de passe')
    button = widgets.Button(description="Valider")
    output = widgets.Output()
    
    display(password_input, button, output)
    
    def on_button_clicked(b):
        with output:
            clear_output()
            if password_input.value == mot_de_passe_correct:
                print("✅ Accès autorisé. Vous pouvez poursuivre l'atelier.")
                password_input.disabled = True
                button.disabled = True
                # L'INJECTION MAGIQUE : Visible partout dans Jupyter
                sys.__ATELIER_DEBLOQUE__ = True
            else:
                print("❌ Mot de passe incorrect !")
                sys.__ATELIER_DEBLOQUE__ = False
                
    button.on_click(on_button_clicked)
