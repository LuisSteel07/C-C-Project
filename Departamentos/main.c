#include "Interfaz.h"

int main() {
    Departamento AllDepartementos[5];
    const int TLDepartamentos = 5;

    InicializarDepartamentos(AllDepartementos,TLDepartamentos);

    InicializarMedios(AllDepartementos,TLDepartamentos);

    StartMenu(AllDepartementos, TLDepartamentos);

    return 0;
}
