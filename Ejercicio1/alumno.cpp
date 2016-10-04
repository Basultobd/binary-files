#include "alumno.h"
#include <iostream>
#include <QString>
#include <cstdio>

using namespace std;


Alumno::Alumno(
        int alumniID,
        QString alumniName,
        float alumniGrade)
    {
        this->alumniID = alumniID;
        this->alumniName = alumniName.toLatin1().data();
        this->alumniGrade = alumniGrade;
    }

Alumno::Alumno(){
}

Alumno::~Alumno(){

    //cout << "El objeto alumno ha sido destruido" << endl;

}

int Alumno:: getAlumniID(){
    return alumniID;
}

const char *Alumno::getAlumniName(){
    return alumniName;
}

float Alumno:: getAlumniGrade(){
    return alumniGrade;
}

void Alumno:: setAlumniID(int newAlumniID){
    alumniID = newAlumniID;
}

void Alumno:: setAlumniName(const char* newAlumniName){
    alumniName = newAlumniName;
}

void Alumno:: setAlumniGrade(float newAlumniGrade){
    alumniGrade = newAlumniGrade;
}


