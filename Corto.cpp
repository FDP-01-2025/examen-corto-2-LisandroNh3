#include <iostream>
using namespace std;

int main()
{

    float billetera = 1000;
    int edad, catalogo, compra, c1, c2, c3,c4;

    cout << "Bienvenido a tiendas de electronicos, para saber si puede acceder al catalogo porfavor necesito verificar su edad";
    cin >> edad;

    if (edad < 15)
    {
        cout << "Lo sentimos pero no posee la edad suficiente para acceder al catalogo" << endl;
    }
    else
    {

        cout << "Selecciona que catalogo de artefactos quieres ver" << endl;
        cout << "1- Estudiantes" << endl;
        cout << "2- Profesionales" << endl;
        cout << "3- Ver todos" << endl;

        cin >> catalogo;

        switch (catalogo)
        {
        case 1:
            cout << "Con 20% de descuento" << endl;
            cout << "Laptop Básica: $900" << endl;
            cout << "Tablet Estudiantil: $600" << endl;
            cout << "Chromebook: $700" << endl;
            cout << "Que articulo comprara?" << endl;

            cin >> compra;

            switch (compra)
            {
            case 1:
                c3 = (billetera - 720);
                c4 = (720 - billetera);
                if (c1 < 720)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c4 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c3 << endl;
                }
                break;

            case 2:

                c1 = (billetera - 480);
                c2 = (480 - billetera);
                if (c1 < 480)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c2 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c1 << endl;
                }

                break;

            case 3:
                c3 = (billetera - 560);
                c4 = (560 - billetera);
                if (c1 < 560)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c4 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c3 << endl;
                }
                break;
            default:
                cout << "Porfavor eliga un articulo valido" << endl;
                break;

                break;
            }
            break;
        case 2:
            cout << "Con 10% de descuento" << endl;
            cout << "1- Laptop Avanzada: $1500" << endl;
            cout << "2- Tablet Pro: $1200" << endl;
            cout << "3- Estación de Trabajo: $2000" << endl;
            cout << "Que articulo comprara?" << endl;

            cin >> compra;

            switch (compra)
            {
            case 1:
                c1 = (billetera - 1350);
                c2 = (1350 - billetera);
                if (c1 < 1350)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c2 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c1 << endl;
                }
                break;

            case 2:

                c1 = (billetera - 1080);
                c2 = (1080 - billetera);
                if (c1 < 1080)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c2 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c1 << endl;
                }

                break;

            case 3:
                c1 = (billetera - 1800);
                c2 = (1800 - billetera);
                if (c1 < 1800)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c2 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c1 << endl;
                }
                break;

            default:
                cout << "Porfavor eliga un articulo valido" << endl;
                break;
            }

            break;

        case 3:
            cout << "Con 20% de descuento" << endl;
            cout << "1- Laptop Básica: $900" << endl;
            cout << "2- Tablet Estudiantil: $600" << endl;
            cout << "3- Chromebook: $700" << endl;
            cout << "Con 10% de descuento" << endl;
            cout << "4- Laptop Avanzada: $1500" << endl;
            cout << "5- Tablet Pro: $1200" << endl;
            cout << "6- Estación de Trabajo: $2000" << endl;
            cout << "Que articulo comprara?" << endl;

            cin >> compra;

            switch (compra)
            {
            case 1:
                c1 = (billetera - 720);
                c2 = (720 - billetera);
                if (c1 < 720)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c1 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c2 << endl;
                }
                break;

            case 2:

                c1 = (billetera - 480);
                c2 = (480 - billetera);
                if (c1 < 480)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c2 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c1 << endl;
                }

                break;

            case 3:
                c1 = (billetera - 560);
                c2 = (560 - billetera);
                if (c1 < 560)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c1 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c2 << endl;
                }
                break;

                 case 4:
                c1 = (billetera - 1350);
                c2 = (1350 - billetera);
                if (c1 < 1350)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c2 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c1 << endl;
                }
                
                break;

            case 5:

                c1 = (billetera - 1080);
                c2 = (1080 - billetera);
                if (c1 < 1080)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c2 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c1 << endl;
                }

                break;

            case 6:
                c1 = (billetera - 1800);
                c2 = (1800 - billetera);
                if (c1 < 1800)
                {
                    cout << "Lo sentimos pero no puede comprar este articulo su saldo faltante es de $" << c2 << endl;
                }
                else
                {

                    cout << "Felicidades por su compra :D, ahora su saldo actual es de $" << c1 << endl;
                }
                break;

            default:  cout << "Porfavor eliga un articulo valido" << endl;
               
                break;
                

            
                break;
            }
             default:  cout << "Porfavor eliga un articulo valido" << endl;
        }
         

        return 0;
    }
}