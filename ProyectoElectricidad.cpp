#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Funciones {
public:
    vector<double> respar;
    vector<double> reserie;
    vector<double> capser;
    vector<double> capar;
    vector<double> indpar;
    vector<double> indser;

    double resparalelo() {
        double suma = 0;
        for (int i = 0; i < respar.size(); i++) {
            suma = suma + (1 / respar[i]);
        }
        double resultado = 1 / suma;
        return resultado;
    }

    double capserie() {
        double suma = 0;
        for (int i = 0; i < capser.size(); i++) {
            suma = suma + (1 / capser[i]);
        }
        double resultado = 1 / suma;
        return resultado;
    }

    double indparalelo() {
        double suma = 0;
        for (int i = 0; i < indpar.size(); i++) {
            suma = suma + (1 / indpar[i]);
        }
        double resultado = 1 / suma;
        return resultado;
    }

    double resserie() {
        double suma = 0;
        for (int i = 0; i < reserie.size(); i++) {
            suma = suma + reserie[i];
        }
        return suma;
    }

    double caparalelo() {
        double suma = 0;
        for (int i = 0; i < capar.size(); i++) {
            suma = suma + capar[i];
        }
        return suma;
    }

    double indserie() {
        double suma = 0;
        for (int i = 0; i < indser.size(); i++) {
            suma = suma + indser[i];
        }
        return suma;
    }

    void adsserie(string tipo, double valor) {
        if (tipo == "r") {
            reserie.push_back(valor);
        } else if (tipo == "c") {
            capser.push_back(valor);
        } else if (tipo == "i") {
            indser.push_back(valor);
        }
    }

    void adparalelo(string tipo, double valor) {
        if (tipo == "r") {
            respar.push_back(valor);
        } else if (tipo == "c") {
            capar.push_back(valor);
        } else if (tipo == "i") {
            indpar.push_back(valor);
        }
    }
};

int main() {
    Funciones funciones;
    cout << "Bienvenido al programa, le presentamos las opciones:" << endl;
    int opcion = 1;

    while (opcion != 5) {
        cout << "1. Reducir Un Circuito en paralelo\n2. Reducir un circuito en serie\n3. Calcular impedancias en Serie\n4. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                double capacitancia = 0, resistencia = 0, inductancia = 0;

                cout << "Para reducir este circuito solo sera posible ingresar objetos del mismo tipo en cada malla" << endl;
                cout << "Ingrese el numero de mallas de este circuito: ";
                int numeroMallas;
                cin >> numeroMallas;

                for (int k = 1; k <= numeroMallas; k++) {
                    cout << "Malla #" << k << " ingrese el tipo de objeto:\n r->resistencia\n c->capacitor\n i->inductor: ";
                    string tipo;
                    cin >> tipo;

                    if (tipo == "r") {
                        cout << "Ingrese la cantidad de objetos en esta malla: ";
                        int cantidad;
                        cin >> cantidad;
                        cout << "Ahora, separados por enter, ingrese los valores: ";

                        for (int j = 1; j <= cantidad; j++) {
                            double valor;
                            cin >> valor;
                            resistencia += valor;
                        }
                        funciones.adparalelo(tipo, resistencia);
                        cout << "Objeto resultante con valor de " << resistencia << endl;
                        resistencia = 0;
                    } else if (tipo == "i") {
                        cout << "Ingrese la cantidad de objetos en esta malla: ";
                        int cantidad;
                        cin >> cantidad;
                        cout << "Ahora, separados por enter, ingrese los valores: ";

                        for (int j = 1; j <= cantidad; j++) {
                            double valor;
                            cin >> valor;
                            inductancia += valor;
                        }
                        funciones.adparalelo(tipo, inductancia);
                        cout << "Objeto resultante con valor de " << inductancia << endl;
                        inductancia = 0;
                    } else if (tipo == "c") {
                        cout << "Ingrese la cantidad de objetos en esta malla: ";
                        int cantidad;
                        cin >> cantidad;
                        cout << "Ahora, separados por enter, ingrese los valores: ";

                        for (int j = 1; j <= cantidad; j++) {
                            double valor;
                            cin >> valor;
                            capacitancia += 1 / valor;
                        }
                        funciones.adparalelo(tipo, 1 / capacitancia);
                        cout << "Objeto resultante con valor de " << 1 / capacitancia << endl;
                        capacitancia = 0;
                    }
                }
                cout << "La resistencia equivalente es: " << funciones.resparalelo() << endl;
                cout << "El capacitor equivalente es: " << funciones.caparalelo() << endl;
                cout << "El inductor equivalente es: " << funciones.indparalelo() << endl;
            } break;

            case 2: {
                double capacitancia = 0, resistencia = 0, inductancia = 0;

                cout << "Ingrese el numero de objetos de este circuito: ";
                int numeroObjetos;
                cin >> numeroObjetos;

                for (int k = 1; k <= numeroObjetos; k++) {
                    cout << "Objeto #" << k << " ingrese el tipo:\n r->resistencia\n c->capacitor\n i->inductor: ";
                    string tipo;
                    cin >> tipo;

                    if (tipo == "r") {
                        cout << "Ingrese el valor del objeto: ";
                        cin >> resistencia;
                        funciones.adsserie(tipo, resistencia);
                        resistencia = 0;
                    } else if (tipo == "i") {
                        cout << "Ingrese el valor del objeto: ";
                        cin >> inductancia;
                        funciones.adsserie(tipo, inductancia);
                        inductancia = 0;
                    } else if (tipo == "c") {
                        cout << "Ingrese el valor del objeto: ";
                        cin >> capacitancia;
                        funciones.adsserie(tipo, capacitancia);
                        capacitancia = 0;
                    }
                }
                cout << "La resistencia equivalente es: " << funciones.resserie() << endl;
                cout << "El capacitor equivalente es: " << funciones.capserie() << endl;
                cout << "El inductor equivalente es: " << funciones.indserie() << endl;
            } break;

            case 3: {
                cout << "Ingrese el valor de la resistencia equivalente en el circuito (Ohms): ";
                double resistencia;
                cin >> resistencia;
                cout << "Ingrese el valor de la capacitancia total del circuito (Faradios): ";
                double capacitancia;
                cin >> capacitancia;
                cout << "Ingrese el valor de la inductancia total del circuito (Henries): ";
                double inductancia;
                cin >> inductancia;
                cout << "Ingrese la frecuencia del circuito (Hertz Hz): ";
                double frecuencia;
                cin >> frecuencia;

                double frecuenciaAngular = 2 * frecuencia * M_PI;
                double reactanciaCapacitiva = 1 / (frecuenciaAngular * capacitancia);
                double reactanciaInductiva = frecuenciaAngular * inductancia;
                double parteReal = resistencia;
                double parteImaginaria = reactanciaInductiva - reactanciaCapacitiva;
                double magnitud = sqrt(pow(parteReal, 2) + pow(parteImaginaria, 2));
                double cociente = (parteImaginaria / parteReal);
                double angulo = atan(cociente) * (180 / M_PI);

                cout << "Reactancia Inductiva=" << reactanciaInductiva << endl;
                cout << "Reactancia Capacitiva=" << reactanciaCapacitiva << endl;
                cout << "Frecuencia Angular=" << frecuenciaAngular << endl;
                cout << "Angulo=" << angulo << endl;
                cout << "La impedancia es: " << parteReal << " + " << parteImaginaria << "J" << endl;
                cout << "La magnitud de la impedancia es: " << magnitud << endl;
                cout << "V(t)=V0Sen(" << frecuenciaAngular << "t +" << angulo << "°)" << endl;
            } break;
        }
    }

    return 0;
}
