#include <iostream>
using namespace std;

class etudiant {
    
    int moyenne;
protected:
    int numeroMatricule;
public:
    void setMatricule(int);
    int getMatricule();
    void setMoyenne(int);
    int getMoyenne();
};


void etudiant::setMatricule(int nouveauMatricule){
    //Le numÃ©rod de matricule doit nÃ©cessairement avoir 7 chiffres
    if ((nouveauMatricule >= 100000) && (nouveauMatricule <= 9999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0;
    }
}

int etudiant::getMatricule(void){
    return (this->numeroMatricule);
}

void etudiant::setMoyenne(int nouvelleMoyenne){
    if (nouvelleMoyenne <= 100){
        this->moyenne = nouvelleMoyenne;
    }
    else{
        this->moyenne = 100;
    }
}

int etudiant::getMoyenne(void){
    return (this->moyenne);
}

class etudiantMusique : public etudiant{
    int nbrInstrumentsJoue;
    
    public : 
    void setNbrInstrumentsJoues (int nb){
        nbrInstrumentsJoue = nb;
    }
    int getNbrInstrumentsJoues (void){
        return nbrInstrumentsJoue;
    }
    void setMatricule (int nouveauMatricule){
        if ((nouveauMatricule >= 2000000) && (nouveauMatricule <= 2999999)){
            numeroMatricule = nouveauMatricule;    
        }
        else{
            numeroMatricule = 9999999;
        }
    }
};

int main() {
    int numeroMatriculeTmp;
    int moyenneTmp;
    
    printf("Hello world !\n\n");
    
    etudiantMusique etudiant1;
    etudiant1.setMatricule(2039447);
    etudiant1.setMoyenne(80);
    etudiant1.setNbrInstrumentsJoues(5);
    numeroMatriculeTmp = etudiant1.getMatricule();
    moyenneTmp = etudiant1.getMoyenne(); 
    printf("Etudiant1, matricule # %d, moyenne %d\n", numeroMatriculeTmp, moyenneTmp);
    printf("Nb instruments : %d", etudiant1.getNbrInstrumentsJoues());
    return 0;
}
