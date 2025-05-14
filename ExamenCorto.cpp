#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int user, age, student, pro;
    double fondos, desc, restante;
    cout<<"Bienvenido, a la compra en linea de dispositivos."<<endl;
    cout<<"Por favor Indicar su edad:"<<endl;
    cin>>age;
    

    if (age >= 16 ){
    cout<<"Prosigamos con la compra:"<<endl;
    cout<<"Por favor indicar su tipo de usuario"<<endl;
    cout<<"1.Estudiante"<<endl;
    cout<<"2.Profesional"<<endl;
    cout<<"3.Ver Todos"<<endl;
    cout<<"4.Salir"<<endl;
    cin>>user;

    switch (user)
    {
    case 1:
        cout<<"Para Estudiantes (aplica descuento de 20%)"<<endl;
        cout<<"Tenemos los siguientes productos, por favor elegir uno:"<<endl;
        cout<<"1-Laptop Basica       $900"<<endl;
        cout<<"2-Tablet Estudiantil  $600"<<endl;
        cout<<"3-Chromebook          $700"<<endl;
        cin>>student;
    

        switch (student)
        {
        case 1:
            cout<<"Por favor Ingrese su saldo actual:"<<endl;
            cin>>fondos;
            if(fondos < 900 ){
                cout<<"Lo sentimos mucho, no te alcanza para ningun producto"<<endl;
            }
                else {

            cout<<"Usted ha seleccionado la Laptop Basica con un precio de $900"<<endl;
            cout<<"Su compra ha sido exitosa con el 20% de descuento aplicado!!!! "<<endl;
            desc = fondos  * (0.2); 
            restante = 900 - desc;
            cout<<"Su saldo restantes de:"<<restante<<endl;
                }


            break;


            case 2: 
            cout<<"Usted ha seleccionado la Tablet Estudiantil con un precio de $600"<<endl;
            cout<<"Su compra ha sido exitosa!!! "<<endl;
            desc = 600  * (0.2); 
            fondos = 600 - desc;
            cout<<"Su saldo restante es de:"<<fondos<<endl;
            break;
            case 3: 
            cout<<"Usted ha seleccionado la Tablet Estudiantil con un precio de $600"<<endl;
            cout<<"Su compra ha sido exitosa!!! "<<endl;
            desc = 700  * (0.2); 
            fondos = 700 - desc;
            cout<<"Su saldo restante es de:"<<fondos<<endl;
            break;
        
        default:
        cout<<"Por favor seleccionar un producto valido"<<endl;
            break;
        }
        
        


       
    
        break;
        case 2:
        cout<<"Para Profesionales (aplica descuento de 10%)"<<endl;
        cout<<"Tenemos los siguientes productos, por favor elegir uno:"<<endl;
        cout<<"1-Laptop Avanzada      $1500"<<endl;
        cout<<"2-Tablet Estudiantil  $1200"<<endl;
        cout<<"3-Chromebook          $2000"<<endl;
        cin>>pro;

        break;

        case 3:
        cout<<"Ver todos los productos"<<endl;
        cout<<"1-Laptop Basica       $900"<<endl;
        cout<<"2-Tablet Estudiantil  $600"<<endl;
        cout<<"3-Chromebook          $700"<<endl;
        cout<<"4-Laptop Avanzada      $1500"<<endl;
        cout<<"5-Tablet Estudiantil  $1200"<<endl;
        cout<<"6-Chromebook          $2000"<<endl;
        cout<<"Puedes verlos, no obstante comprar, por favor vuelve e identificate como un Usuario"<<endl;

        break;
        case 4:
        cout<<"Gracias por preferirnos, vuelva pronto"<<endl;
        break;

    
    default:
        cout<<"Por favor seleccionar un Usuario valido"<<endl;
        break;
    }





    }


    else {
        cout<<"No puedes continuar, eres menor de edad! "<<endl;
    }


}