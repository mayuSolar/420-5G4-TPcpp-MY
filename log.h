#include <ctime> // pour date et heure
#include <fstream> // pour ofstream
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

enum LogAction 
{ 
    AJOUT_LIVRE, 
    SUPPRIMER_LIVRE, 
    RECH_LIVRE_TITRE,
    RECH_LIVRE_AUTEUR,
    AFFICHAGE_LIVRES,
    AFFICHAGE_LIVRES_DISPO,
    AJOUT_USER,
    EMPRUNT,
    RETOUR,
    STATISTIQUES,
    STAT_TOTAL_LIVRES,
    STAT_LIVRES_DISPO,
    STAT_LIVRES_EMPRUNTES,
    STAT_TOTAL_USERS,
    SAUVEGARDER,
    QUITTER
};

class Log {
private:
    ofstream logFile;

    string actionToString(LogAction action)   
    {
        switch (action)
        {
            case AJOUT_LIVRE:
                return "AJOUT_LIVRE";

            case SUPPRIMER_LIVRE:
                return "SUPPRIMER_LIVRE";
        
            case RECH_LIVRE_TITRE:
                return "RECH_LIVRE_TITRE";
        
            case RECH_LIVRE_AUTEUR:
                return "RECH_LIVRE_AUTEUR";
        
            case AFFICHAGE_LIVRES:
                return "AFFICHAGE_LIVRES";

            case AFFICHAGE_LIVRES_DISPO:
                return "AFFICHAGE_LIVRES_DISPO";
            
            case AJOUT_USER:
                return "AJOUT_USER";
        
            case EMPRUNT:
                return "EMPPRUNT";
            
            case RETOUR:
                return "RETOUR";
            
            case STATISTIQUES:
                return "STATISTIQUES";
            
            case STAT_TOTAL_LIVRES:
                return "STAT_TOTAL_LIVRES";

            case STAT_LIVRES_DISPO:
                return "STAT_LIVRES_DISPO";
            
            case STAT_LIVRES_EMPRUNTES:
                return "STAT_LIVRES_EMPRUNTES";
            
            case STAT_TOTAL_USERS:
                return "STAT_LIVRES_DISPO";

            case SAUVEGARDER:
                return "SAUVEGARDER";
            
             case QUITTER:
                return "QUITTER";

            default:
                return "UNKNOWN";
        }
    }

public:
    // Default constructor
    Log();
    // Constructor: open log file in append mode
    Log(const string& filename);

    // Destructor
    ~Log();

    // Logs a message with a log action
    void log(LogAction action, const string& message);
};