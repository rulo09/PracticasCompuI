#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);

template<typename matriz>
int buscarPivote(matriz &miMatriz, int fila, int numFilas); // Nos permite localizar el número más grande y hacerlo elde la primera fila

template<typename matriz>
void intercambiarFilas(matriz &miMatriz, int fila1, int fila2, int columnas);


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solución para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array<array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    ImprimirMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}


/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{

    //TODO

}

template <typename matriz>
int buscarPivote(matriz &miMatriz, int fila, int numFilas){
    int columna = fila, indicePivote = -1;

    float max = miMatriz[fila][columna];
    for(int i = fila; i<numFilas; i++) {
        if(miMatriz[i][columna] != 0 & miMatriz[i][columna] >= max){
            max = miMatriz[i][columna];
            indicePivote = i;
        }
    }
    return indicePivote;
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template<typename matriz>
void intercambiarFilas(matriz &miMatriz, int fila1, int fila2, int cols){
    for(int j = 0; j < cols; j++){
        int temp = miMatriz[fila1][j];
        miMatriz[fila1][j] = miMatriz[fila2][j];
        miMatriz[fila2][j] = temp;
    }
}

template <typename matriz>
void GaussJordan(matriz & miMatriz){
    int filas =miMatriz.size(), columnas = miMatriz.size() +1;

    for(int i = 0; i < filas; i ++){
        int indicePivote = buscarPivote(miMatriz, i, filas);
        if (indicePivote != -1){
            intercambiarFilas(miMatriz, i, indicePivote, columnas);
        }
        else{
            cout<< "El sistema no tiene solución" << endl;
            exit(0);
        }

    }
    for (int i = 0; i < filas; i++){
        miMatriz[0][columnas] /= miMatriz[0][0];
        int valorPivote = miMatriz[0][0];
        if( i != 0) {
            miMatriz[filas][columnas] = miMatriz[filas][columnas] - (miMatriz[filas][columnas] * valorPivote);

            }
        }


    }







