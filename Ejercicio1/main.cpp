#include <QCoreApplication>
#include <iostream>
#include <cstdio>

#include "alumno.h"
#include "archivo.h"

using namespace std;

#define ERROR_CODE -1;
#define CONTINUE_CODE 0;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //abre para lectura y escritura, binario
    FILE *file;
    file = fopen("fseek.txt","w+b");

    if (file == NULL) {
        cout << "No se pudo abrir el archivo." << endl;
        exit(1);
    }

    //----- Initializa the information in file
    Archivo newFile;
    newFile.initialize(file);

    int badOption = ERROR_CODE;
    int goodOption = CONTINUE_CODE;
    int option;

    while(badOption!=goodOption){

        cout << "Seleccione una opcion \n"
                "1-Escribir \n"
                "2-Leer \n"
                "3-Borrar \n"
                "Ingrese 0 para salir\n" << endl;
        cin >> option;

        fflush(stdin);

        switch(option){
            case 0:
                cout << "Saliendo del sistema!\n" << endl;
                exit(1);
            case 1:
                //newFile.modifyAlumniInFile(file);
                break;
            case 2:
                newFile.searchAlumniInFile(file);
                break;
            case 3:
                newFile.deleteAlumniInFile(file);
                break;
            default:
                printf("Opcion no valida!\n");
            }
    }

    fclose(file);
    return a.exec();
}
