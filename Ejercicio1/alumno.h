#ifndef ALUMNO_H
#define ALUMNO_H
#include <QString>
#include <cstdio>


class Alumno{

public:

    int alumniID; // min value 1 - max value 10
    char* alumniName;
    float alumniGrade; // min value 0.0 - max value 100.0

    /** Methods declaration */

    //---- First constructor
    Alumno(int alumniID, QString alumniName, float alumniGrade);

    //---- Second constructor
    Alumno();

    //---- Destructor
    ~Alumno();

    //---- getters
    int getAlumniID();
    char* getAlumniName();
    float getAlumniGrade();

    //---- setters
    void setAlumniID(int newAlumniID);
    void setAlumniName(QString newAlumniName);
    void setAlumniGrade(float newAlumnGrade);

};

#endif // ALUMNO_H
