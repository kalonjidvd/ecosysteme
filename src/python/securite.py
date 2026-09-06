import sys
import getpass

def verifier_acces():
    # Définissez le mot de passe de l'atelier ici (ex: "Kin2026")
    mot_de_passe_correct = "Kin2026" 
    
    print("🔒 CONFIGURATION DE LA SESSION ATELIER")
    # getpass cache les caractères tapés à l'écran pour plus de discrétion
    saisie = getpass.getpass("Veuillez entrer le mot de passe d'accès au cours : ")
    
    if saisie == mot_de_passe_correct:
        print("✅ Accès autorisé. Vous pouvez poursuivre l'atelier.")
    else:
        print("❌ Mot de passe incorrect ! Arrêt immédiat du noyau.")
        # On lève une exception volontaire pour bloquer l'exécution de toutes les cellules suivantes
        raise PermissionError("Accès refusé : mot de passe invalide.")
