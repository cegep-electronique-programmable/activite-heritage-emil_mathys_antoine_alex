#include <iostream>
using namespace std;

class etudiant {
    int numeroMatricule;
    int moyenne;
	
public:
    void setMatricule(int);
    int getMatricule();
    void setMoyenne(int);
    int getMoyenne();
};


void etudiant::setMatricule(int nouveauMatricule){
    //Le numÃ©rod de matricule doit nÃ©cessairement avoir 6 chiffres
    if ((nouveauMatricule >= 100000) && (nouveauMatricule <= 999999)){
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

int main() {
    int numeroMatriculeTmp;
    int moyenneTmp;
    
    printf("Hello world !\n\n");
    
    etudiant etudiant1;
    etudiant1.setMatricule(111111);
    etudiant1.setMoyenne(80);
    numeroMatriculeTmp = etudiant1.getMatricule();
    moyenneTmp = etudiant1.getMoyenne(); 
    printf("Etudiant1, matricule # %d, moyenne %d\n", numeroMatriculeTmp, moyenneTmp);

    return 0;
}
