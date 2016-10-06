#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <cstdio>
#include <QString>


class Archivo{

public:

    const int MAX_NUM_REGISTER = 10;
    const int MAX_NAME_LEN = 50;
    const int DELETE_CODE = -1;
    Archivo();
    void initialize(FILE *file);
    void searchAlumniInFile(FILE *file);
    void modifyAlumniInFile(FILE *file);
    void deleteAlumniInFile(FILE *file);
    void printAlumniFile(FILE *file);


};

#endif // ARCHIVO_H
