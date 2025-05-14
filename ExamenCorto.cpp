#include<iostream>
#include<cmath>
using namespace std;
int main (){
    //Asignamos la variables que sean necesarias segun de nos presentes todos los casos
    int user, age, student, pro;
    double fondos, desc, restante, total;
    cout<<"=================================================="<<endl;
    cout<<"Bienvenido, a la compra en linea de dispositivos."<<endl;
    cout<<"Por favor Indicar su edad:"<<endl;
    cin>>age;
    //Ponemos condiciones que se deban complir para proseguir

    if (age >= 16 ){
        //Si se cumple proseguimos con la compra, con la seleccion de Usuario
     cout<<"=================================================="<<endl;
    cout<<"Prosigamos con la compra:"<<endl;
    cout<<"Por favor indicar su tipo de usuario"<<endl;
    cout<<"1.Estudiante"<<endl;
    cout<<"2.Profesional"<<endl;
    cout<<"3.Ver Todos"<<endl;
    cout<<"4.Salir"<<endl;
    cout<<"=================================================="<<endl;
    cin>>user;

    switch (user)
    {
    case 1:
    cout<<"=================================================="<<endl;
        cout<<"Para Estudiantes (aplica descuento de 20%)"<<endl;
        cout<<"Tenemos los siguientes productos, por favor elegir uno:"<<endl;
        cout<<"1-Laptop Basica       $900"<<endl;
        cout<<"2-Tablet Estudiantil  $600"<<endl;
        cout<<"3-Chromebook          $700"<<endl;
        cout<<"=================================================="<<endl;
        cin>>student;
    
        //Insertamos el  Switch para Estudiantes
        switch (student)
        {
        case 1:
        cout<<"=================================================="<<endl;
            cout<<"Por favor Ingrese su saldo actual:"<<endl;
            cin>>fondos;
            if(fondos < 900 ){
                cout<<"Lo sentimos mucho, no te alcanza para ningun producto"<<endl;
                cout<<"======================================================"<<endl;
            }
                else {
            cout<<"=============================================================="<<endl;        
            cout<<"Usted ha seleccionado la Laptop Basica con un precio de $900"<<endl;
            cout<<"Su compra ha sido exitosa con el 20% de descuento aplicado!!!! "<<endl;
            desc = fondos  * (0.2); 
            restante = 900 - desc;
            total = 900 - restante;
            cout<<"Su saldo restante es de:$"<<total<<endl;
            cout<<"=============================================================="<<endl;  
                }


            break;


            case 2: 
            cout<<"=================================================="<<endl;
            cout<<"Por favor Ingrese su saldo actual:"<<endl;
            cin>>fondos;
            if(fondos < 600 ){
                cout<<"Lo sentimos mucho, no te alcanza para ningun producto"<<endl;
                cout<<"=============================================================="<<endl;  
            }
                else {
            cout<<"=============================================================="<<endl;         
            cout<<"Usted ha seleccionado la Table Estudiantil con un precio de $600"<<endl;
            cout<<"Su compra ha sido exitosa con el 20% de descuento aplicado!!!! "<<endl;
            desc = fondos  * (0.2); 
            restante = 600 - desc;
            total = 600 - restante;
            cout<<"Su saldo restante es de:$"<<total<<endl;
            cout<<"=============================================================="<<endl;  
                }
            break;
            case 3: 
            cout<<"=================================================="<<endl;
            cout<<"Por favor Ingrese su saldo actual:"<<endl;
            cin>>fondos;
            if(fondos < 700 ){
                cout<<"Lo sentimos mucho, no te alcanza para ningun producto"<<endl;
                cout<<"=============================================================="<<endl;  
            }
                else {
            cout<<"=============================================================="<<endl;         
            cout<<"Usted ha seleccionado la Chromebook con un precio de $700"<<endl;
            cout<<"Su compra ha sido exitosa con el 20% de descuento aplicado!!!! "<<endl;
            desc = fondos  * (0.2); 
            restante = 700 - desc;
            total = 700 - restante;
            cout<<"Su saldo restante es de:$"<<total<<endl;
            cout<<"=============================================================="<<endl;  
                }
            break;
                
        default:
        cout<<"Por favor seleccionar un producto valido"<<endl;
        cout<<"=================================================="<<endl;
            break;
            //Finalizamos casos de Switch para Estudiantes
        }
        
        


       
    
        break;

        
        case 2:
        cout<<"=================================================="<<endl;
        cout<<"Para Profesionales (aplica descuento de 10%)"<<endl;
        cout<<"Tenemos los siguientes productos, por favor elegir uno:"<<endl;
        cout<<"1-Laptop Avanzada      $1500"<<endl;
        cout<<"2-Tablet Estudiantil  $1200"<<endl;
        cout<<"3-Chromebook          $2000"<<endl;
        cout<<"=================================================="<<endl;
        cin>>pro;
        // Insertammos el Switch para Profesionales
        switch (pro)
        {
            case 1:
            cout<<"=================================================="<<endl;
            cout<<"Por favor Ingrese su saldo actual:"<<endl;
            cin>>fondos;
            if(fondos < 1500 ){
                cout<<"Lo sentimos mucho, no te alcanza para ningun producto"<<endl;
                cout<<"=============================================================="<<endl;  
            }
                else {
            cout<<"=================================================="<<endl;
            cout<<"Usted ha seleccionado la Laptop Basica con un precio de $1500"<<endl;
            cout<<"Su compra ha sido exitosa con el 10% de descuento aplicado!!!! "<<endl;
            desc = fondos  * (0.1); 
            restante = 1500 - desc;
            total = 1500 - restante;
            cout<<"Su saldo restante es de:$"<<total<<endl;
            cout<<"=============================================================="<<endl;  
                }


            break;


            case 2: 
            cout<<"Por favor Ingrese su saldo actual:"<<endl;
            cin>>fondos;
            if(fondos < 1200 ){
                cout<<"Lo sentimos mucho, no te alcanza para ningun producto"<<endl;
                cout<<"=============================================================="<<endl;  
            }
                else {
            cout<<"=============================================================="<<endl;          
            cout<<"Usted ha seleccionado la Table Estudiantil con un precio de $1200"<<endl;
            cout<<"Su compra ha sido exitosa con el 10% de descuento aplicado!!!! "<<endl;
            desc = fondos  * (0.1); 
            restante = 1200 - desc;
            total = 1200 - restante;
            cout<<"Su saldo restante es de:$"<<total<<endl;
            cout<<"=============================================================="<<endl;  
                }
            break;
            case 3: 
            cout<<"Por favor Ingrese su saldo actual:"<<endl;
            cin>>fondos;
            if(fondos < 2000 ){
                cout<<"Lo sentimos mucho, no te alcanza para ningun producto"<<endl;
                cout<<"=============================================================="<<endl;  
            }
                else {
            cout<<"=============================================================="<<endl;          
            cout<<"Usted ha seleccionado la Chromebook con un precio de $2000"<<endl;
            cout<<"Su compra ha sido exitosa con el 10% de descuento aplicado!!!! "<<endl;
            desc = fondos  * (0.1); 
            restante = 2000 - desc;
            total = 2000 - restante;
            cout<<"Su saldo restante es de:$"<<total<<endl;
                }
            break;
        
        default:
        cout<<"Por favor seleccionar un producto valido"<<endl;
        cout<<"=============================================================="<<endl;  
            break;
            //Finalizamos Switch para Usuario de Profesionales
        }

        break;

        case 3:
        //No insertamos Switch, solo mostramos todos los productos y solicitamos volver
        cout<<"======================================================================================="<<endl;
        cout<<"Ver todos los productos"<<endl;
        cout<<"1-Laptop Basica       $900"<<endl;
        cout<<"2-Tablet Estudiantil  $600"<<endl;
        cout<<"3-Chromebook          $700"<<endl;
        cout<<"4-Laptop Avanzada      $1500"<<endl;
        cout<<"5-Tablet Estudiantil  $1200"<<endl;
        cout<<"6-Chromebook          $2000"<<endl;
        cout<<"Puedes verlos, no obstante comprar, por favor vuelve e identificate como un Usuario"<<endl;
        cout<<"===================================================================================="<<endl;

        break;
        case 4:
        cout<<"Gracias por preferirnos, vuelva pronto"<<endl;
        cout<<"=================================================="<<endl;
        break;

    
    default:
        cout<<"Por favor seleccionar un Usuario valido"<<endl;
        cout<<"=================================================="<<endl;
        break;
        //Finalizamos el Switch de Raiz
    }



    
    }


    else {
        cout<<"No puedes continuar, eres menor de edad! "<<endl;
        cout<<"=================================================="<<endl;
    }

    return 0;
    //Fin del programa
}