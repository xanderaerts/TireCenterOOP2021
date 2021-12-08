#include "include/menu.h"
#include <string>
#include <vector>
#include <iostream>

#include "include/article.h"


Menu menu;


std::string useCaseToString(Menu inputUseCase){
    switch(inputUseCase){
        case addOrder:
            return "Bestelling toevoegen";
        case searchArtcle:
            return "Artikel opvragen";
        case addArticle:
            return "Artikel toevoegen";
        case rmArticle:
            return "Artikel verwijderen";
        case editArticle:
            return "Artikel bewerken";
        case addCust:
            return "Klant toevoegen";
        case searchCust:
            return "Klant opvragen";
        case editCust:
            return "Klant bewerken";
        case addInvoice:
            return "Nieuw factuur aanmaken";
        case searchInvoice:
            return "Factuur opvragen";
    }
    return 0;
}


void printMenuUseCaseDetails(std::vector<Menu>UseCaseFunctions){

    std::string option,test;
    int choice=1,lineNr{1};
    bool exit = false;

    std::cout << "\n\n";
    std::cout << "Artikels: " << std::endl;

    while(!exit){
        for(Menu i : UseCaseFunctions){
            option = useCaseToString(i);
            std::cout << "\t" << lineNr<< ": " << option << std::endl;
            lineNr++;        
        }

        std::cout << "Maak een keuze: ";
        std::cin >> choice;
        lineNr = 1;

        Menu useCaseChoice = UseCaseFunctions[choice-1];
    
        switch(useCaseChoice){
            case addOrder:
                std::cout << "addorder";break;
            case searchArtcle:
                std::cout <<  "searchARt";break;
            case addArticle:
                std::cout << "addArticle";break;
            case rmArticle:
                std::cout << "rmArticle";break;
            case editArticle:
                std::cout << "editArticle";break;
            case addCust:
                std::cout << "addCust";break;
            case searchCust:
                std::cout << "searchCust";break;
            case editCust:
                std::cout << "editCust";break;
            case addInvoice:
                std::cout << "addinv";break;
            case searchInvoice:
                std::cout << "searchInvoic";break;
            case showStock:
                std::cout<< "show stock";break; 
            default:
                std::cout << "\n\nMaak een geldige keuze!" << std::endl;
                continue;
        }
    }
}
