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

    //opened for write and lecture. Binary file
    FILE *file;
    file = fopen("fseek.txt","w+b");

    if (file == NULL) {
        cout << "Error opening the file" << endl;
        exit(1);
    }

    //----- Initialize the information in file
    Archivo newFile;
    newFile.initialize(file);

    int badOption = ERROR_CODE;
    int goodOption = CONTINUE_CODE;
    int option;

    while(badOption!=goodOption){

        cout << "Choose one option \n"
                "1-Modify a register \n"
                "2-Search a register \n"
                "3-Delete a register \n"
                "4-Print all registers \n"
                "0-Exit\n"
                "option: ";

        cin >> option;

        cout << "\n";

        fflush(stdin);

        switch(option){
            case 0:
                cout << "Leaving on the system!\n" << endl;
                exit(1);
            case 1:
                newFile.modifyAlumniInFile(file);
                cout << "\n";
                break;
            case 2:
                newFile.searchAlumniInFile(file);
                cout << "\n";
                break;
            case 3:
                newFile.deleteAlumniInFile(file);
                cout << "\n";
                break;
            case 4:
                newFile.printAlumniFile(file);
                cout << "\n";
                break;
            default:
                printf("Invalid option!\n");
            }
    }

    fclose(file);
    return a.exec();
}
