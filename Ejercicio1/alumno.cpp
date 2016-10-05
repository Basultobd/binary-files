#include "alumno.h"
#include <iostream>
#include <QString>
#include <QCoreApplication>
#include <QDebug>
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

char *Alumno::getAlumniName(){
    return alumniName;
}

float Alumno:: getAlumniGrade(){
    return alumniGrade;
}

void Alumno:: setAlumniID(int newAlumniID){
    alumniID = newAlumniID;
}

void Alumno:: setAlumniName(QString newAlumniName){

    QByteArray array = newAlumniName.toLocal8Bit();
    //string fname = newAlumniName.toStdString();
    //strcmp( alumniName, fname.c_str());
    alumniName = array.data();

}

void Alumno:: setAlumniGrade(float newAlumniGrade){
    alumniGrade = newAlumniGrade;
}


