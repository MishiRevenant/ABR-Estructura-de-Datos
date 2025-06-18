#include <iostream>
#include <string>
using namespace std;

//---------------------------
// ESTRUCTURA DE DATOS NODO
//---------------------------
struct Nodo {
    int id;                 // ID único del miembro (clave principal)
    string nombre;          // Nombre del miembro
    int edad;               // Edad del miembro (puede usarse para búsquedas o informes)
    int padre_id;           // ID del padre (-1 si desconocido)
    int madre_id;           // ID de la madre (-1 si desconocido)
    Nodo* izq;              // Hijo izquierdo (ABB por ID)
    Nodo* der;              // Hijo derecho

    Nodo(int _id, string _nombre, int _edad, int _padre=-1, int _madre=-1)
        : id(_id), nombre(_nombre), edad(_edad), padre_id(_padre), madre_id(_madre), izq(nullptr), der(nullptr) {}
};

//---------------------------
// CLASE ÁRBOL GENEALÓGICO
//---------------------------
class ArbolGenealogico {
private:
    Nodo* raiz;

    // Aquí se agregarán las funciones privadas recursivas necesarias para cada funcionalidad

public:
    ArbolGenealogico() : raiz(nullptr) {}

    //---------------------
    // 1. Gestión de Miembros Genealógicos
    //---------------------

    // Registrar nuevo miembro en el ABB
    // void insertar(int id, string nombre, int edad, int padre_id, int madre_id);

    // Eliminar miembro y re-enlazar el sub-árbol afectado
    // void eliminar(int id);

    // Modificar datos de un miembro (nombre, edad o vínculos)
    // void modificar(int id, string nuevoNombre, int nuevaEdad, int nuevoPadre, int nuevaMadre);

    // Buscar miembro por ID
    // Nodo* buscarPorID(int id);

    // Buscar miembro por nombre (puede requerir recorrido completo)
    // Nodo* buscarPorNombre(string nombre);

    // Listar miembros activos del árbol (por inorden o por criterios)
    // void listarMiembros();

    //---------------------
    // 2. Consultas de Relación Familiar
    //---------------------

    // Obtener ancestros directos de un miembro (camino hasta la raíz)
    // void mostrarAncestros(int id);

    // Obtener descendientes/sub-ramas completas
    // void mostrarDescendientes(int id);

    // Calcular nivel generacional (profundidad respecto al ancestro fundador)
    // int nivelGeneracional(int id);

    // Detectar ancestro común más cercano entre dos IDs
    // Nodo* ancestroComun(int id1, int id2);

    //---------------------
    // 3. Recorridos y Visualización
    //---------------------

    // Recorrido inorden para lista alfabética por ID o nombre
    // void recorridoInorden();

    // Recorrido preorden (raíz-hojas)
    // void recorridoPreorden();

    // Recorrido postorden (hojas-raíz)
    // void recorridoPostorden();

    // Recorrido por niveles (BFS) para mostrar generaciones
    // void recorridoPorNiveles();

    // Visualización tipo ASCII del árbol (como en tus ejemplos)
    // void imprimirASCII();

    //---------------------
    // 4. Interfaz de Usuario
    //---------------------

    // Menú por consola (opciones numéricas)
    // void mostrarMenu();

    //---------------------
    // 5. Persistencia de Datos (opcional)
    //---------------------

    // Guardar el árbol en archivo de texto (save())
    // void guardarArchivo(const string& nombreArchivo);

    // Cargar árbol desde archivo (load())
    // void cargarArchivo(const string& nombreArchivo);

    // Exportar recorrido inorden a CSV para investigación externa
    // void exportarCSV(const string& nombreArchivo);
};

//---------------------------
// PROGRAMA PRINCIPAL
//---------------------------
int main() {
    ArbolGenealogico genealogia;
    int opcion;

    // genealogia.cargarArchivo("familia.txt");  // Opcional: cargar datos al inicio

    do {
        // genealogia.mostrarMenu();
        // Leer opción del usuario y llamar a la funcionalidad correspondiente
        /*
        1. Registrar nuevo miembro
        2. Buscar miembro
        3. Eliminar miembro
        4. Modificar miembro
        5. Mostrar ancestros
        6. Mostrar descendientes
        7. Recorrido inorden
        8. Recorrido preorden
        9. Recorrido por niveles
        10. Guardar árbol
        0. Salir
        */
    } while(opcion != 0);

    // genealogia.guardarArchivo("familia.txt"); // Guardar al salir

    return 0;
}

