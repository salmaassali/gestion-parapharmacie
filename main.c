#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[50];
    char prenom[50];
    int age;
    char profession[50];
    char situationFamiliale[50];
    char adresse[100];
    char affiliationMutuelle[50];
    char telephone[20];
} Patient;

typedef struct {
    char nom[50];
    char specialite[50];
} Medecin;

typedef struct {
    int jour;
    int mois;
    int annee;
    int heure;
    int minute;
} Date;

typedef struct {
    char patientnom[50];
    char medecinnom[50];
    Date date;
    char etat[20];
} RendezVous;

typedef struct {
    int debutdeconsultation;
    int findeconsultation;
    float tarif;
} comptabilite;

Patient creerFichePatient() {
    Patient patient;

    printf("Nom: ");
    scanf("%s", patient.nom);

    printf("Prénom: ");
    scanf("%s", patient.prenom);

    printf("Âge: ");
    scanf("%d", &patient.age);

    printf("Profession: ");
    scanf("%s", patient.profession);

    printf("Situation familiale: ");
    scanf("%s", patient.situationFamiliale);

    printf("Adresse: ");
    scanf("%s", patient.adresse);

    printf("Affiliation Mutuelle: ");
    scanf("%s", patient.affiliationMutuelle);

    printf("Téléphone: ");
    scanf("%s", patient.telephone);

    return patient;
}

void rechercherFichePatient(Patient patients[], int nbPatients) {
    char nom[50];

    printf("Nom du patient: ");
    scanf("%s", nom);

    int i;
    for (i = 0; i < nbPatients; i++) {
        if (strcmp(patients[i].nom, nom) == 0) {
            printf("Fiche trouvée!\n");
            printf("Nom: %s\n", patients[i].nom);
            printf("Prénom: %s\n", patients[i].prenom);
            printf("Âge: %d\n", patients[i].age);
            printf("Profession: %s\n", patients[i].profession);
            printf("Situation familiale: %s\n", patients[i].situationFamiliale);
            printf("Adresse: %s\n", patients[i].adresse);
            printf("Affiliation Mutuelle: %s\n", patients[i].affiliationMutuelle);
            printf("Téléphone: %s\n", patients[i].telephone);
            return;
        }
    }

    printf("Fiche non trouvée!\n");
}

void gererComptabilite() {
    int choix;
    printf("Type de soin :\n");
    printf("1. Consultation\n");
    printf("2. Consultation avec echo coeur\n");
    printf("Choix: ");
    scanf("%d", &choix);

    float tarif = 0;

    switch (choix) {
        case 1:
            tarif = 300;
            break;
        case 2:
            tarif = 300 + 650;
            break;
        default:
            printf("Choix invalide. Veuillez réessayer.\n");
            return;
    }

    printf("Le tarif à payer est de %.2f DH.\n", tarif);
}

int main() {
    Patient patients[100];
    Medecin medecin;
    RendezVous rendezVous;
    int nbPatients = 0;
    int choix;

    do {
        printf("=== Cabinet Médical ===\n");
        printf("1. Créer une fiche patient\n");
        printf("2. Rechercher une fiche patient\n");
        printf("3. Prendre un rendez-vous\n");
        printf("4. Consulter un patient\n");
        printf("5. Gérer la comptabilité\n");
        printf("0. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                patients[nbPatients] = creerFichePatient();
                nbPatients++;
                printf("Fiche patient créée avec succès!\n");
                break;

            case 2:
                rechercherFichePatient(patients, nbPatients);
                break;

            case 3:
                RendezVous nouveauRendezVous;

                printf("Nom du patient: ");
                scanf("%s", nouveauRendezVous.patientnom);

                printf("Nom du médecin: ");
                scanf("%s", nouveauRendezVous.medecinnom);

                printf("Date du rendez-vous (jour mois annee heure minute): ");
                scanf("%d %d %d %d %d", &nouveauRendezVous.date.jour, &nouveauRendezVous.date.mois, &nouveauRendezVous.date.annee, &nouveauRendezVous.date.heure, &nouveauRendezVous.date.minute);

                printf("État du rendez-vous: ");
                scanf("%s", nouveauRendezVous.etat);

                printf("Rendez-vous pris avec succès!\n");
                break;

            case 4:
                rechercherFichePatient(patients, nbPatients);
                break;

            case 5:
                gererComptabilite();
                break;

            case 0:
                printf("Au revoir!\n");
                break;

            default:
                printf("Choix invalide!\n");
                break;
        }

        printf("\n");
    } while (choix != 0);

    return 0;
}
