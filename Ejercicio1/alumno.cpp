#include "alumno.h"
#include "archivo.h"
#include <iostream>
#include <cstdio>

using namespace std;

//---- first constructor
Alumno::Alumno(
        int alumniID,
        char* alumniName,
        float alumniGrade,
        int alumniPosition)
    {
        this->alumniID = alumniID;
        this->alumniName = alumniName;
        this->alumniGrade = alumniGrade;
        this->alumniPosition = alumniPosition;
    }

//---- second constructor
Alumno::Alumno(){
}

//---- destructor
Alumno::~Alumno(){
}

int Alumno:: getAlumniID(){
    return alumniID;
}

char *Alumno::getAlumniName(){
    return alumniName;
}

float Alumno:: getAlumniGrade(){
    return alumniGrade;
}

int Alumno:: getAlumniPosition(){
    return alumniPosition;
}

void Alumno:: setAlumniID(int newAlumniID){
    alumniID = newAlumniID;
}

void Alumno:: setAlumniName(char* newAlumniName){

    size_t newAlumNameLen = strlen(newAlumniName);

    bool isValidLength = newAlumNameLen > 0;
    bool isNewLine = newAlumniName[newAlumNameLen-1] == '\n';

    if ( isValidLength && isNewLine ) {
        //removes the last character ("\n")
        newAlumniName[--newAlumNameLen] = '\0';
    }

    alumniName = newAlumniName;

}

void Alumno:: setAlumniGrade(float newAlumniGrade){
    alumniGrade = newAlumniGrade;
}


