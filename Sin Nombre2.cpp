#include <iostream>
#include <string.h>
#include <limits>

using namespace std;

int main()
{
int barras=6, decision=0, opcionesn=0, salir=0;

while(opcionesn != 1 && opcionesn != 2 && opcionesn != 3 && opcionesn != 4 && opcionesn != 5)   
    {
cout<<"Hola! Hoy decidiras el rumbo de la historia de un cerdito llamado pascal y contaras con un contador de barras de comida \n"<<endl;
//menu 1
cout<<"Pascal era un cerdito que vivia en una granja junto a sus amigos, hasta que un dia un terrible remolino arras� con todo a su paso y lo dejo varado en un desierto, Pascal decicio regresar a la granja con la esperanza de reencontrarse con sus amigos,  \n Ahora elige que har� Pascal \n 1:ir al pueblo \n 2:Espear que pase alguien \n 3:Ir al pueblo abandonado \n 4:ir a la bahia \n5.Salir del programa"<<endl;
std::cout << "Barras disponibles:"<<barras << endl;
cin>>opcionesn;
cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
    switch(opcionesn)
    {
    case 1:
    barras-=2;
    cout<<"fue al pueblo en donde encontr� gente tratando de atraparlo y otro ni�o que le prometio ayudarlo. \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
        //menu1.1
        switch(opcionesn)
        {       
        case 1:
        barras-=1;
        cout<<"Fue con el ni�o y este le di� alimento \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Seguir confiando en el ni�o \n2.Esperar el momento e irse \n3.Tomar mas comida con la posibilidad que se enoje" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            switch(opcionesn)
            {
            barras-=2;
            case 1:
            cout<<"El ni�o te explico que el plan que era escapar un dia de su casa y empezar el viaje a tu granja. \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Aceptar el trato \n2.Decirle que no y que lo har�s solo \n3.Robar su comida e irte" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.1.1
                switch(opcionesn)
                {
                barras-=2;
                case 1:
                cout<<"Aceptaste el trato y el dia del escape sus papas los descubrieron \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Ayudar al ni�o y salvarlo \n2.Irse al momento \n3.Esperar para robarle dinero para ir a la granja \n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.1.1.1
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Lo ayud� y lo salv�!, El cumpli� y lo llev� a la granja donde se reuni� con sus amigos\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Se fue rapido pero se le acabron las barras de energia y, �No logr� llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Se fue y pidi� un taxi hacia la granja, �Lo logr�! Lleg� a la granja, pero, �qu� se sinti� traicionarlo?"<<endl;
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                case 2:
                cout<<"Le dij� que no, y el ni�o le dijo que en verdad queria ayudarlo \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Confiar en �l \n2.Que se vaya aun as� \n3.Decirle que s� pero que si tambien podia llevarle comida a sus amigos" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.1.1.2
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Confi� en �l, cumpli� y lo llev� a la granja donde se reuni� con sus amigos\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Se fue pero se le acabron las barras de energia y, �No logr� llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Le dijo que s� pero qur solo poquita, te llev�, �Lo logr�! Lleg� a la granja y les diste comida a tus amigos"<<endl;
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                case 3: 
                cout<<"Recargaste energia y te fuiste, encontraste a lo lejos la granja \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Ir corriendo sin detenerse a la granja \n2.Ir pero haciendo una parada a ver que puede encontrar \n3.Esperar a reunir mas energia para irse" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Corri� pero le falt� energia y, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Hiz� la parada y encontro agua que le di� la suficiente energia para llegar y, �Logr� llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Esper� mucho y no reunio la suficiente energia, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                default:
                cout<<"Elige una opci�n correcta"<<endl;
                }
            break;    
            case 2:
            cout<<"Te fuiste y te perdiste, solo recuerdas el camino de regreso al ni�o \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Regresar con el ni�o \n2.Seguir caminando hasta encontrar algo \n3.Buscar en la basura algo de comida" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.12
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Regresaste con el ni�o pero te dijo que solo te podia decir el camino ya que no podia acompa�arte \n Qued� con "<< (barras)-float(2); cout << " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"El cumpli� y le dijo el camino a la granja, lleg� y se reuni� con sus amigos\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se fue rapido pero se le acabron las barras de energia y, �No logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Se fue y pidi� un taxi hacia la granja, �Lo logr�! Lleg� a la granja, pero, �qu� se sinti� traicionarlo?"<<endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Encontr� un se�or de un sombrero en una esquina que le ofreci� ayuda \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguirlo \n2.Ignorarlo \n3.Morderlo" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Lo sigui� y resulto ser malo\n �No logr� regresar a la  granja y qued� hecho chicharr�n!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"�Lo ignor� y ya cuando se iba, el se�or lo captur� y, �No logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Lo mordi� y resulto ser una persona mala asi que por ayudar a atraparlo lo llevaron a la granja, �Lo logr�! Lleg� a la granja y se reuni� con sus amigos, que feliz!"<<endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3: 
                    cout<<"Encontraste comida pero parece un poco pasada \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Guardarla en su bolsa y usarla solo en caso de ser necesaria en el camino \n2.Comerla e irse\n3.Tirarla otra vez e ir a la granja" <<endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Inici� el recorrido a la granja y comi� lo que habia recogido y eso le ayud� a llegar a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se fue rapido y, �Logr� llegar a la granja!\n�Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 3:
                        cout<<"Tiro la comida y fue a la granja pero no le bast� la energia y, \n �No logr� llegar!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                
                    break;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl;
                    }
            break;
            case 3:
            cout<<"El ni�o se enoj� y te rega�o porque sus papas cuentan la comida y se pueden dar cuenta \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Aceptar el rega�o del ni�o \n2.Enojarte o sentirte mal e irte \n3.Pedirle disculpas al ni�o y decirle que te vas a ir" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu1.13
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                        cout<<"Le dij� que no, y el ni�o le dijo que en verdad queria ayudarlo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                        cout<<"Recargaste energia y te fuiste, encontraste a lo lejos la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
            break;
            default: 
            cout<<"Elige una opci�n correcta"<<endl;
            }
        
            
        break;
        case 2:
        cout<<"Sigui� buscando y encontr� un mapa \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Revisar el mapa \n2.Guardar el mapa \n3.Comerse el mapa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.2
                switch(opcionesn)
                {
                case 1: 
                cout<<"Revisaste el mapa y si esta la granja dentro de el \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Seguir el mapa \n2.Guardarlo y seguir buscando algo que le pueda ayudar\n3.Buscar comida para llevarles a sus amigos de la granja" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Sigui� el  mapa pero a mitad de camino le ofrecieron mucha comida a cambio de el \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Cambiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio \n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Acept� el trato y ya con la comida Inici� el viaje, �S� logr� llegar a la granja!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Rechaz� la oferte y no tuvo suficiente energia para llegar y, �No logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Lo estaf�, el que le propuso el cambio le di� la comida y Pascal se iba a escapar pero lo atrapo el chico, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Encontr� un carrito prendido abandonado \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Subirse, extender el mapa e ir a la granja \n2.Apagarlo y esperar al due�o \n3.Ignorarlo e irse a la granja" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Manej� hasta la granja con ayuda del mapa �S� logr� llegar a la granja!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Esper� al due�o y este le agradeci� llevandolo y dandole dinero para comida \n�Logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Ignor� el carro pero no tuvo la suficiente energia para llegar a la granja, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Solo encontr� agua para sus amigos \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir solo con el agua \n2.Cambiar m�s de la mitad del agua por poca comida \n3.Tomar un poco de agua e irse corriendo a la granja" << std::endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corri� pero le falt� energia y tuvo que beber el agua, �S� logr� llegar a la granja!\n �Sus amigos lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Cambi� el agua por la comida y lleg� a la granja, �Logr� llegar a la granja!, les di� la comida a sus amigos" << std::endl;
                        break;
                        case 3:
                        cout<<"No tom� el agua suficiente y no reunio la suficiente energia, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default: cout<<"elige una opci�n correcta"<<endl;
                    }
                break;
                case 2:
                cout<<"Guard� el mapa y comi� de un plato abandonado al lado de la basura \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Abrir el mapa \n2.Tirar el mapa porque siente que le estorba \n3.Comer mas comida de la basura" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Abri� el mapa y vio que estaba un poco lejos de la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Irse sin comer nadamas \n2.Buscar agua y despues intentar llegar a la granja \n3.Descansar antes de partir a la granja" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corri� pero le falt� energia y, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Encontro agua que le di� la suficiente energia para llegar y, �Logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Se qued� dormid y le robaron el mapa, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Tir� el mapa y se qued� sin saber en donde estaba \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Decirle a un perro si sabe donde esta \n2.Buscar el mapa \n3.Intentar robar dinero de un ni�o" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"El perro le dijo que si sabia pero que era en otro estado, lo cual era imposible, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Busc� el mapa pero no lo encontr� y se acab� sus barras de energia, �No lgr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Le rob� dinero a un ni�o pero no le alcanz� para nada y lo atraparon, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Comi� m�s comida y le hiz� da�o \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Avanzar hacia la granja \n2.Comer verduras e intentar llegar a la granja \n3.Tomar agua de un charco muy grande e intentar ir a la granja" << std::endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"No avanz� mucho cuando la comida hizo que se desmayara�No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Comi� las verduras y le dieron justo la energia para llegar, �Logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Tom� agua del charco pero termino intoxicado, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl;
                    }
                    
                break;
                case 3:
                cout<<"Se comi� el mapa y ahora no sabe donde esta \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Intentar vomitarlo \n2.No hacer nada \n3.Subirse a una camioneta que tiene animales dentro" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Intent� vomitarlo pero solo escupi� pedazos del mapa pero muy importantes \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Cambaiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corri� pero le falt� energia y, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Hiz� la parada y encontro agua que le di� la suficiente energia para llegar y, �Logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Esper� mucho y no reunio la suficiente energia, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"No hiz� nada y pas� un carro que lo atropell�\n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Levantarse e irse \n2.Dejar que lo lleve al veterinario el del carro \n3.Cerrar los ojos" <<endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Se levant� pero no llego mu lejos, se quedo sin energia, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Lo llev� al veterinario pero se encari�o con el que lo atropell� y, �Conoci� a su neuvo mejor amigo!" << std::endl;
                        break;
                        case 3:
                        cout<<"Cerr� los ojos y lamentablemente, muri�, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Subi� a la camioneta y al subir habl� con los demas animales, al parecer van a una granja\n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Bajarse de la camioneta \n2.Quedarse arriba de la camioneta \n3.Seguir preguntando a los otros animales aunque sienta que los estresa" <<endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Se baj� de la granja y se perdi�, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se qued� arriba de la camioneta y se dio cuenta que iba para su granja, eran animales nuevos , �Logr� llegar a la granja y reunirse con sus amigos!" << std::endl;
                        break;
                        case 3:
                        cout<<"Les sigui� preguntando pero los estres� y estos lo aventaron fuera de la camioneta, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opcion correcta"<< endl;
                    }
                break;
                case 4:
                cout<<"Salir del programa"<<endl;
                default:
                cout<<"Elige una opci�n correcta"<<endl;
                }
        break;
        case 3:
        cout<<"Entro a la casa abierta y se di� cuenta que era de un carnicero cuando vi� los cuchillos y la carne \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Esconderse \n2.Tomar comida que hay en la mesa e irse \n3.Esperar al carnicero e intentar hablar con el" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.1.3
                switch(opcionesn)
                {
                case 1:
                cout<<"Se escondio y lleg� el carnicero a dormir a su casa \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Salir de la casa \n2.Despertarlo e intentar hablar con el \n3.Hablar con el, el dia siguiente" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Sali� de la casa y cuando estaba caminando solo, un policia lo subi� a su patrulla \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Lo despert� y aunque al principio el carcnicero se espant�, logr� hablar con el \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Al principio el carcnicero se espant�, logr� hablar con el \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl; 
                    }
                break;
                case 2:
                cout<<"Tom� un poco de comida y se fue sin dejar rastro \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Entrar a otra casa \n2.Regresar en la noche a robarle al carnicero dinero \n3.Caminar direcci�n a la granja a ver si la ve" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Entr� a otra casa y encontro un bebe solito en peligro \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Regreso pero el carnicero lo estaba esperando, el s� sabia que habia ido \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Camino y camino y no logro verla pero sabia que estaba cerca porque unas personas se lo dijeron \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl; 
                    }
                break;
                case 3:
                cout<<"El carnicero lo vi� y luego luego fue por el \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Correr \n2.Quedarse quieto y exlicarle la situaci�n \n3.Atacarlo" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Corri� y escap�, gast� muchas barras \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Le explic� la situaci�n y el carnicero lo entendi�, el dijo que conocia la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Lo atac� pero el carnicero lo amarr� y no le dio oportunidad de explciarle \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl; 
                    }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opci�n correcta"<<endl;
                }
              
        break;
        default:
        cout<<"Elige una opci�n correc"<<endl;
        }
        
    break;        
    case 2:
    cout<<"Esper� y paso un carro que lo subi� a su maletero y lo llev� a otra granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Estar dispuesto a conocer la nueva granja \n2.Morder al que lo recogio en cuanto lo agarre \n3.Hacer desastres en la nueva granja" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            
            //menu 1.2
            switch(opcionesn)
            {   
            case 1:
            cout<<"Conociste la nueva granja y es mejor que la otra en comodidad \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguir acoplandose a la granja \n2.Idear un plan para escapar \n3.Hablarle a los demas animales" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.2.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Le gust� mucho la nueva granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Intentar hacer nuevos amigos \n2.Espiar al due�o \n3.Relajarse m�s" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Intent� hacer nuevos amigos y lo consigui� aunque le adivirtieron que no era tan buen lugar \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Quedarse en la granja \n2.Intentar irse \n3.Preguntarles porqu�" << std::endl;
 								   cin>>opcionesn;
			   			   		   cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
		   				   		   switch(opcionesn)
      		   			   		   {
             		   		   	   barras-=2;    
	                               case 1:
	                               cout<<"Se qued� en la nueva granja, �Tiene nuevo hogar!\n �Que le vaya bien!\n Qued� con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 2:
	                               cout<<"Intent� irse pero justo antes de salir lo agarraron, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 3:
	                               cout<<"Les pregunt� porqu� y ellos le dijeron que protno lo averiguaria \n �Qued� atrapado!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 4:
	                               return 0;
	                               default:
	                               cout<<"Elige una opcion correcta"<<endl;
	                               }
                        break;
                        case 2:
                        cout<<"Espi� al due�o y result� no ser tan buen lugar, el due�o era malo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir a contarle a los otros animales \n2.Intentar huir solo inmediatamente \n3.Quedarse aun as�" << std::endl;
           					 cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a los otros animales pero ellos le contestaron que ya sabian y qued� atrapado Pascal, �Espera el fin!\n �Atrapado qued�!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intento huir y lo logr� aunque se le acabaron las barras de energia y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se qued� en la nueva granja a pesar de las advertencias, �Tiene nuevo hogar!\n �Que le vaya bien...!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Se relaj� m�s y se qued� dormido hasta el otro dia \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Hablarle a los dem�s animales \n2.Comer e irse a su granja \n3.Quedarse" << std::endl;
           				  cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Ide� el plan para escapar pero mientras lo hacia se dio cuenta que aqu� tenia mejor lugar \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguir con el plan \n2.Probar que mas tiene la granja \n3.Hablarle al nuevo cerdo que llevaron" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                		cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                		cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
            				 cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Le habl� a los animales y lo ignoraron \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Volver a intentarlo \n2.Hacerles una groseria y escapar \n3.Salir de la granja por un tunel" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl; 
                    }
            break;
            case 2:
            cout<<"Mordi� al que lo recogi� y este le peg� pero Pascal alcanz� a escapar \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Seguir corriendo hasta encontrar algo \n2.Escapar y meterse a la granja de infiltrado \n3.Volver con el que lo recogi�" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.2
                    switch(opcionesn)
                    {
                    case 1: 
                    cout<<"Corri� y encontr� una chica que tenia intenciones de recogerlo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Dejarse recoger por la chica \n2.Morderla igual\n3.Huir de ella" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu1.1.1
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Lo recogi� y le curo el golpe que habia tenido \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Dejarse de la chica y decirle lo que pasa\n2.En cuanto vea una puerta abierta intentar escapar \n3.Comer la comida que tenia en el suelo e intentar encontrar la granja" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu finaL
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"La mordi� pero aun asi lo agarr� y acarici� \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ya dejarse \n2.Volverla morder \n3.Explciarle su situaci�n" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu final
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Inici� el recorrido a la granja y comi� lo que habia recogido y eso le ayud� a llegar a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue rapido y, �Logr� llegar a la granja!\n�Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Tiro la comida y fue a la granja pero no le bast� la energia y, \n �No logr� llegar!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Huy� de ella pero su herida le doli� mucho \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Regresar y explicarse su caso \n2.Seguir caminando y buscar comida en los botes de basura \n3.SAASF" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu final
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Inici� el recorrido a la granja y comi� lo que habia recogido y eso le ayud� a llegar a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue rapido y, �Logr� llegar a la granja!\n�Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Tiro la comida y fue a la granja pero no le bast� la energia y, \n �No logr� llegar!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 4:
                        return 0;
                        default: cout<<"elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Se meti� a la granja de infiltrado y vi� muchos cerditos como el \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Hablarle a los demas cerditos \n2.Alejarse de ellos y esconderse \n3.Irse a otra zona de la granja" << std::endl;
                        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Volvi� con el que lo recogi� y este lo levant� e hizo todo el papeleo para dejarlo ah� \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<< endl;
                    }
            break;
            case 3:
            cout<<"Entro a la casa abierta y se dio cuenta que era de un carnicero cuando vi� los cuchillos y la carne \n Qued� con "<< (barras)-float(2); cout << " barras \n Elige su proxima acci�n \n1.Esconderse \n2.Tomar comida que hay en la mesa e irse \n3.Esperar al carnicero e intentar hablar con el" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.1.3
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"fue al pueblo en donde encontr� gente tratando de atraparlo y otro ni�o que le prometio ayudarlo. \n Qued� con "<< (barras)-float(3); cout << " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                         //menu1.1.1
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                        break;
                        case 2:
                    
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                        break;
                        case 3: 
                    
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl; 
                        }
                    case 2:
                    cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    
                    break;
                    
                    case 3:
                    cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    
                    break;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl;
                    }
                  
            break;
            default:
            cout<<"Elige una opci�n correc"<<endl;
            }
                
                
    break;
    case 3: 
    cout<<"fue al pueblo abandonado en donde encontr� una television prendida y en las noticias salio la granja afectada de donde el venia \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Buscar comida en la casa \n2.Buscar en la cochera \n3.Ver como se llama bien la granja y tdoso los datos para pdoer llegar" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            //menu 1.3
            switch(opcionesn)
            {
            case 1:
            cout<<"Busco comida en la casa pero encontr� mucho dinero \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Caminar hacia otro lugar para poder comprar comida y un taxi hacia la granja \n2.Dejar el dinero ah� (no vaya a estar maldito) y seguir buscando comida \n3.Guardar el dinero y buscar comida" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Camin� a otro \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Encontr� comida! Pero el dinero no estaba maldito, ya no lo puede tomar porque se desapareci� \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"Encontrste muchas verduras pero casualmente estan frescas \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                default:
                cout<<"Elige una opci�n correc"<<endl; 
                }
            break;
            case 2:
            cout<<"En la chochera encontr� una bicicleta vieja que le hace falta aceite \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Salir a la carretera para poder encontrar alguien y que arregle la bicicleta \n2.Dejar la bicicleta ah� y seguir alimentandose para irse \n3.Buscar el aceite" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"sali� a la carretera y logro que un adolescente se parar�, le cont� la situaci�n y este accedi� a ayudarlo\n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Confiar en el adolescente \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                default:
                cout<<"Elige una opci�n correc"<<endl; 
                }
            break;
            case 3:
            cout<<"Se qued� viendo la tele y ahora sabe bien los datos de la granja, pero tambien sali� que el due�o era malo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                default:
                cout<<"Elige una opci�n correc"<<endl; 
                }
            break;
            case 4:
            return 0;
            default:
            cout<<"Elige una opci�n correc"<<endl;
            }
            
    break;
    case 4:
    cout<<"fue a la bahia y solo vio pasar un pescador que lo observ� un rato \n Qued� con "<< (barras)-float(3); cout << " barras \n Elige su proxima acci�n \n1.Esperar a que regrese el pescador \n2.Seguir buscando en la bahia una pista \n3.Agarrar el bote que dejo el pescador" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            //menu 1.4
            switch(opcionesn)
            {
            case 1:
            cout<<"Esper� al pescador y este regres� y se le acerco, le dijo que por qu� estaba ah� \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Contestarle y placticarle el asunto \n2.Contarle una historia falsa para ver que hace el pescador \n3.Ignorarlo y correr" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Le platic� y entendi� su caso pero dijo que el no podia ayudarlo porque tenia que pescar pero le podia ofrecer comida y agua y decirte como irse \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<<" barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Le cont� y el pescador lo dudo un poco pero le ofreci� alimento y decirle el camino \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Corriste pero te alcanz� y quiere que le digas que hacias en su zona \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opci�n correcta"<<endl; 
                }
            break;
            case 2:
            cout<<"Encontr� unas monedas del pescador en un baul \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Tomar las monedas e irse \n2.Dejarlas ah� y esperar mas tiempo \n3.Esconderse enfrente del baul" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Tom� las monedas y le alcanza para comprar comida y agua para sus amigos o pagar el taxi a la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Las dej� ah� y el pescador fue y echo m�s monedas \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Se escondi� pero se le veia la cola y el pescador lo descubri�  "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 4: return 0;
                default:
                cout<<"Elige una opci�n correcta"<<endl; 
                }
            break;
            case 3:
            cout<<"Agarr� el bote y vi� que si servia \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el bote al otro lado del mar \n2.Quedarse en el bote esperando \n3.Bajarse y esperar al siguiente dia para irse en el" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Lleg� al otro lado y vi� muy cerca la granja, solo tiene que cruzar un rio \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Esper� mucho y vio que venia el pescador \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Esper� al siguiente dia y el pescador se habia llevado el bote \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Qued� con "<< barras<<" barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opci�n correcta"<<endl; 
                }
            break;
            default:
            cout<<"Elige una opci�n correcta"<<endl;
            
            }
    break;
    case 5:
    return 0;
    break;
    default:
    cout<<"Elige una opci�n correcta"<<endl;
    }
        
    
    
  
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    
}
    return 0;

}
