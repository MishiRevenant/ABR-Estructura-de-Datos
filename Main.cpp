#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//----------------------------
// Definición de la estructura Nodo
//----------------------------
struct Nodo {
    int id;            // ID del miembro
    string nombre;     // Nombre
    int edad;          // Edad
    int padre_id;      // ID del padre
    int madre_id;      // ID de la madre
    Nodo* izq;         // Hijo izquierdo
    Nodo* der;         // Hijo derecho
};

//----------------------------
// Declaración de funciones (solo nombres, sin implementación)
//----------------------------

// Registrar nuevo miembro
Nodo* insertarRec(Nodo* raiz, int id, string nombre, int edad, int padre_id, int madre_id);

// Buscar miembro por ID
Nodo* buscarRec(Nodo* raiz, int id);

// Buscar miembro por nombre
Nodo* buscarPorNombreRec(Nodo* raiz, string nombre);

// Recorrido inorden
void inordenRec(Nodo* raiz);

// Recorrido preorden
void preordenRec(Nodo* raiz);

// Recorrido postorden
void postordenRec(Nodo* raiz);

// Visualización tipo ASCII
void imprimirASCII(Nodo* n, int nivel = 0);

// Mostrar menú de usuario
void mostrarMenu();

int main() {
    Nodo* raiz = NULL;
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;
        if(cin.fail()){ cin.clear(); cin.ignore(256,'\n'); opcion=-1; }

        if(opcion == 1) {
            int id, edad, padre_id, madre_id;
            string nombre;
            cout << "ID: "; cin >> id;
            cout << "Nombre: "; cin.ignore(); getline(cin, nombre);
            cout << "Edad: "; cin >> edad;
            cout << "ID Padre (-1 si desconoce): "; cin >> padre_id;
            cout << "ID Madre (-1 si desconoce): "; cin >> madre_id;
            // raiz = insertarRec( ... );
        }
        else if(opcion == 2) {
            int id;
            cout << "ID a buscar: "; cin >> id;
            // Nodo* res = buscarRec( ... );
            // if(res) cout << "Encontrado..." << endl;
            // else cout << "No encontrado." << endl;
        }
        else if(opcion == 3) {
            string nombre;
            cout << "Nombre a buscar: "; cin.ignore(); getline(cin, nombre);
            // Nodo* res = buscarPorNombreRec( ... );
            // if(res) cout << "Encontrado..." << endl;
            // else cout << "No encontrado." << endl;
        }
        else if(opcion == 4) {
            cout << "Recorrido Inorden:" << endl;
            // inordenRec( ... );
        }
        else if(opcion == 5) {
            cout << "Recorrido Preorden:" << endl;
            // preordenRec( ... );
        }
        else if(opcion == 6) {
            cout << "Recorrido Postorden:" << endl;
            // postordenRec( ... );
        }
        else if(opcion == 7) {
            cout << "Visualización del árbol (ASCII):" << endl;
            // imprimirASCII( ... );
        }
        else if(opcion == 0) {
            cout << "Saliendo..." << endl;
        }
        else {
            cout << "Opción inválida." << endl;
        }
    } while(opcion != 0);

    return 0;
}

//-----------------------------
// Aquí irían las implementaciones de cada función declarada arriba
//-----------------------------

Nodo* insertarRec(Nodo* raiz, int id, string nombre, int edad, int padre_id, int madre_id) {
    if (raiz == NULL) {
        Nodo* nuevo = new Nodo;
        nuevo->id = id;
        nuevo->nombre = nombre;
        nuevo->edad = edad;
        nuevo->padre_id = padre_id;
        nuevo->madre_id = madre_id;
        nuevo->izq = NULL;
        nuevo->der = NULL;
        return nuevo;
    }

    if (id < raiz->id) {
        raiz->izq = insertarRec(raiz->izq, id, nombre, edad, padre_id, madre_id);
    } else if (id > raiz->id) {
        raiz->der = insertarRec(raiz->der, id, nombre, edad, padre_id, madre_id);
    } else {
        cout << "El ID ya existe. No se permiten duplicados." << endl;
    }

    return raiz;
}
Nodo* buscarRec(Nodo* raiz, int id) {
    if (raiz == NULL || raiz->id == id) {
        return raiz;
    }

    if (id < raiz->id) {
        return buscarRec(raiz->izq, id);
    } else {
        return buscarRec(raiz->der, id);
    }
}
Nodo* buscarPorNombreRec(Nodo* raiz, string nombre) {
    if (raiz == NULL) return NULL;

    if (raiz->nombre == nombre) {
        return raiz;
    }

    Nodo* izquierda = buscarPorNombreRec(raiz->izq, nombre);
    if (izquierda != NULL) return izquierda;

    return buscarPorNombreRec(raiz->der, nombre);
}
/*
// Ejemplo de cómo empezar la definición
Nodo* insertarRec(Nodo* raiz, int id, string nombre, int edad, int padre_id, int madre_id) {
    // Implementación aquí
}
*/

