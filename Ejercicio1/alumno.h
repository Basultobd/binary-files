#ifndef ALUMNO_H
#define ALUMNO_H
#include <QString>
#include <cstdio>


class Alumno{

public:

    int alumniID; // min value 1 - max value 10
    char* alumniName; //Suggest not to use QString
    float alumniGrade; // min value 0.0 - max value 100.0
    int alumniPosition;


    /** Methods declaration */

    //---- First constructor
    Alumno(int alumniID, char* alumniName, float alumniGrade, int alumniPosition);

    //---- Second constructor
    Alumno();

    //---- Destructor
    ~Alumno();

    //---- getters
    int getAlumniID();
    char* getAlumniName();
    float getAlumniGrade();
    int getAlumniPosition();

    //---- setters
    void setAlumniID(int newAlumniID);
    void setAlumniName(char* newAlumniName);
    void setAlumniGrade(float newAlumnGrade);


};

#endif // ALUMNO_H
