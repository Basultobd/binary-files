#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <cstdio>


class Archivo{

public:

    const int MAX_NUM_REGISTER = 10;
    FILE *file;
    Archivo();
    void initialize(FILE *file);
    void searchAlumniInFile(FILE *file);
    void modifyAlumniInFile(FILE *file);
    void deleteAlumniInFile(FILE *file);
    void printAlumniFile(FILE *file);


};

#endif // ARCHIVO_H
