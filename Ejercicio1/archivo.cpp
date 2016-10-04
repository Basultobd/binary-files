#include "archivo.h"
#include "alumno.h"
#include <iostream>
#include <cstdio>

using namespace std;

Archivo::Archivo(){
}

void Archivo::initialize(FILE *file){

    fseek(file, 0 , SEEK_SET);

    int i;
    for(i=0; i<10; i++){
      Alumno nullAlumni(i+1,"nulo",0.0);
      fwrite(&nullAlumni,sizeof(Alumno),1,file);
    }
}

void Archivo:: searchAlumniInFile(FILE *file){

    int alumniIndexToSearch;
    cout << "write a number between 1 and 10: ";
    cin >> alumniIndexToSearch;
    cout << "\n";

    //Beacuse the index begin in 0
    alumniIndexToSearch--;

    Alumno newAlumni;
    fseek(file,sizeof(Alumno)*alumniIndexToSearch, SEEK_SET); //from the begining
    fread(&newAlumni,sizeof(Alumno),1,file);

    if (newAlumni.getAlumniID() == -1){
        cout << "The register does not exist \n" << endl;
    }else{
        printf("ID: %d\n", newAlumni.getAlumniID());
        printf("Name: %s\n", newAlumni.getAlumniName());
        printf("Grade: %.2f\n\n", newAlumni.getAlumniGrade());
    }
}

void Archivo:: deleteAlumniInFile(FILE *file){

    int alumniIndexToSearch;
    cout << "write a number between 1 and 10: ";
    cin >> alumniIndexToSearch;

    //Beacuse the index begin in 0
    alumniIndexToSearch--;

    Alumno newAlumni;
    fseek(file,sizeof(Alumno)*alumniIndexToSearch, SEEK_SET); //from the begining
    fread(&newAlumni,sizeof(Alumno),1,file);

    newAlumni.alumniID = -1;
    fseek(file,sizeof(Alumno)*alumniIndexToSearch, SEEK_SET); //from the begining
    fwrite(&newAlumni,sizeof(Alumno),1,file);

    printAlumniFile(file);

}

//verify the content later
void Archivo:: modifyAlumniInFile(FILE *file){

    int alumniIndexToSearch;
    cout << "write a number between 1 and 10: ";
    cin >> alumniIndexToSearch;

    //Beacuse the index begin in 0
    alumniIndexToSearch--;

    Alumno newAlumni;
    fseek(file,sizeof(Alumno)*alumniIndexToSearch, SEEK_SET); //from the begining
    fread(&newAlumni,sizeof(Alumno),1,file);

    newAlumni.alumniID = -1;
    fseek(file,sizeof(Alumno)*alumniIndexToSearch, SEEK_SET); //from the begining
    fwrite(&newAlumni,sizeof(Alumno),1,file);

    printAlumniFile(file);
}

void Archivo::printAlumniFile(FILE *file){

    int i;
    for(i=0; i<MAX_NUM_REGISTER; i++){

        Alumno alumniToPrint;
        fseek(file,sizeof(Alumno)*i, SEEK_SET);
        fread(&alumniToPrint,sizeof(Alumno),1,file);

        if( alumniToPrint.getAlumniID() == -1 ){
              continue;
        }else{
            cout << "Alumni ID: " << alumniToPrint.getAlumniID() << "\n";
            cout << "Alumni Name: " << alumniToPrint.getAlumniName() << "\n";
            cout << "Alumni Grade: " << alumniToPrint.getAlumniGrade() << "\n";
            cout << "\n";
        }
    }

}

