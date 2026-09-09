import sys
from IPython.display import display, clear_output
import ipywidgets as widgets

def verifier_acces():
    mot_de_passe_correct = "Kin2026"
    print("🔒 CONFIGURATION DE LA SESSION ATELIER")
    
    # Champ graphique masqué
    password_input = widgets.Password(description='Clé d\'accès:', placeholder='Entrez le mot de passe')
    button = widgets.Button(description="Valider")
    output = widgets.Output()
    
    display(password_input, button, output)
    
    def on_button_clicked(b):
        with output:
            clear_output()
            if password_input.value == mot_de_passe_correct:
                print("✅ Accès autorisé. Bonne session !")
                password_input.disabled = True
                button.disabled = True
            else:
                print("❌ Mot de passe incorrect !")
                
    button.on_click(on_button_clicked)
