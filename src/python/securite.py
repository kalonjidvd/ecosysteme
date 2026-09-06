import sys
from IPython.display import display, clear_output
import ipywidgets as widgets

def verifier_acces():
    mot_de_passe_correct = "Kin2026"
    
    print("🔒 CONFIGURATION DE LA SESSION ATELIER")
    
    # Création d'un champ de saisie de mot de passe graphique
    password_input = widgets.Password(
        description='Clé d\'accès:',
        placeholder='Entrez le mot de passe',
        style={'description_width': 'initial'}
    )
    
    button = widgets.Button(description="Valider")
    output = widgets.Output()
    
    display(password_input, button, output)
    
    def on_button_clicked(b):
        with output:
            clear_output()
            if password_input.value == mot_de_passe_correct:
                print("✅ Accès autorisé. Vous pouvez poursuivre l'atelier.")
                # On ferme proprement l'affichage du widget après validation
                password_input.disabled = True
                button.disabled = True
            else:
                print("❌ Mot de passe incorrect !")
                # Optionnel : lever une erreur si nécessaire
                
    button.on_click(on_button_clicked)
