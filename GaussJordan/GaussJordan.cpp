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
int buscarPivote(matriz &miMatriz, int fila, int numFilas); // Nos permite localizar el número más grande y hacerlo el de la primera fila

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
    cout << endl;
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{

cout << "La solucion del sistema es \n" << "X = " << miMatriz[0][3] <<"\n Y = " << miMatriz[1][3] << "\n Z = " << miMatriz[2][3];
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
void intercambiarFilas(matriz &miMatriz, int fila1, int fila2, int columnas){
    for(int j = 0; j < columnas; j++){
        int temp = miMatriz[fila1][j];
        miMatriz[fila1][j] = miMatriz[fila2][j];
        miMatriz[fila2][j] = temp;
    }
}

template <typename matriz>
void GaussJordan(matriz & miMatriz){
    int filas =miMatriz.size(), columnas = miMatriz.size() +1;
    double valorPivote;

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
// PARA ELIMINAR LA PRIMERA COLUMNA ////////////////////////////////////////////////////////////
    for (int j = 0; j < columnas; j ++){
        valorPivote = miMatriz[0][0];// Declaramos el pivote como el valor 0,0 de la matriz
        miMatriz[0][j] /= valorPivote; //Dividimos la primer fila por el pivote
    }
    for (int i = 1; i < filas; i++) { // Iteramos sobre cada fila excepto la primera
        for (int j = 0; j < columnas; j++) { // Iteramos sobre las columna
            double valorFila1 = miMatriz[0][j]; // Obtenemos el primer elemento de la fila actual
            miMatriz[i][j] = miMatriz[i][j] - (miMatriz[i][j] * valorFila1);// Restamos el producto del primer elemento de la fila actual y la primera fila de la matriz
        }
    }
// PARA ELIMINAR LA SEGUNDA COLUMNA /////////////////////////
    for (int j = 0; j < columnas; j ++){
        valorPivote = miMatriz[2][1];// Declaramos el pivote como el valor 2 de la ultima fila de la matriz
        miMatriz[2][j] /= valorPivote;  //DIvidimos la ultima fila entre el pivote
    }
    for(int j = 0; j < columnas; j++){
        int temp = miMatriz[0][j];
        miMatriz[0][j] = miMatriz[2][j];
        miMatriz[2][j] = temp;
    }
    for (int i = 1; i < filas; i++) { // Iteramos sobre cada fila excepto la primera
        for (int j = 0; j < columnas; j++) { // Iteramos sobre las columna
            double valorFila1 = miMatriz[0][j]; // Obtenemos el primer elemento de la fila actual
            miMatriz[i][j] = miMatriz[i][j] - (miMatriz[i][j] * valorFila1);// Restamos el producto del primer elemento de la fila actual y la primera fila de la matriz
        }
    }
    // PARA ELIMINAR LA TERCER COLUMNA //////////////////////////////////////
    for (int j = 0; j < columnas; j ++){
        valorPivote = miMatriz[1][2];// Declaramos el pivote como el valor 2 de la ultima fila de la matriz
        miMatriz[1][j] /= valorPivote;  //DIvidimos la ultima fila entre el pivote
    }

    for(int j = 0; j < columnas; j++){
        int temp = miMatriz[0][j];
        miMatriz[0][j] = miMatriz[1][j];
        miMatriz[1][j] = temp;
    }
    for (int i = 1; i < filas; i++) { // Iteramos sobre cada fila excepto la primera
        for (int j = 0; j < columnas; j++) { // Iteramos sobre las columna
            double valorFila1 = miMatriz[0][j]; // Obtenemos el primer elemento de la fila actual
            miMatriz[i][j] = miMatriz[i][j] - (miMatriz[i][j] * valorFila1);// Restamos el producto del primer elemento de la fila actual y la primera fila de la matriz
        }
    }


    for (int i = 0; i < filas; i++) {
        cout << "[ ";
        for (int j = 0; j < filas + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n\n";
    }

    }




/*
if (j != 0){ //si no es la fila 1
miMatriz[j][i] = miMatriz[j][i] - (miMatriz[j][i] * miMatriz[i-1][i]);
}



  miMatriz[1][j] = miMatriz[1][j] - (miMatriz[1][j]*miMatriz[1-1][j]);
*/







