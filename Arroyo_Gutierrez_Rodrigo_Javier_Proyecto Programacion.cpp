#include <iostream>
#include <string.h>
#include <limits>

using namespace std;

int main()
{
int barras=8, opcionesn=0, salir=0;

while(opcionesn != 1 && opcionesn != 2 && opcionesn != 3 && opcionesn != 4 && opcionesn != 5)   
    {
cout<<"Hola! Hoy decidiras el rumbo de la historia de un cerdito llamado pascal y contaras con un contador de barras de comida \n"<<endl;
//menu 1
cout<<"Pascal era un cerdito que vivia en una granja junto a sus amigos, hasta que un dia un terrible remolino arraso con todo a su paso y lo dejo varado en un desierto, Pascal decidio regresar a la granja con la esperanza de reencontrarse con sus amigos,  \n Ahora elige que hara Pascal \n 1:ir al pueblo \n 2:Espear que pase alguien \n 3:Ir al pueblo abandonado \n 4:ir a la bahia \n5.Salir del programa"<<endl;
std::cout << "Barras disponibles:"<<barras << endl;
cin>>opcionesn;
cout<<"Elegiste -"<<opcionesn<<""<<endl;
    switch(opcionesn)
    {
    case 1:
    barras-=2;
    cout<<"fue al pueblo en donde encontro gente tratando de atraparlo y otro niño que le prometio ayudarlo. \n Quedo con "<< barras << " barras \n Elige su proxima accion \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta \n4.Salir del programa" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<""<<endl;
        //menu1.1
        switch(opcionesn)
        {      
        case 1:
        barras-=1;
        cout<<"Fue con el niño y este le dio alimento \n Quedo con "<< barras << " barras \n Elige su proxima accion \n1.Seguir confiando en el niño \n2.Esperar el momento e irse \n3.Tomar mas comida con la posibilidad que se enoje\n4.Salir del programa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<""<<endl;
            switch(opcionesn)
            {
            
            case 1: barras-=1;
            cout<<"El niño te explico que el plan que era escapar un dia de su casa y empezar el viaje a tu granja. \n Quedo con "<<barras<< " barras \n Elige su proxima accion \n1.Aceptar el trato \n2.Decirle que no y que lo haras solo \n3.Robar su comida e irte\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                //menu1.1.1
                switch(opcionesn)
                {
                barras-=0;
                case 1:barras-=1;
                cout<<"Aceptaste el trato y el dia del escape sus papas los descubrieron \n Quedo con "<< barras << " barras \n Elige su proxima accion \n1.Ayudar al niño y salvarlo \n2.Irse al momento \n3.Esperar para robarle dinero para ir a la granja \n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    //menu 1.1.1.1
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Lo ayudo y lo salvo!, El cumplio y lo llevo a la granja donde se reunio con sus amigos\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Se fue rapido pero se le acabron las barras de energia y, ¡No logro llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Se fue y pidio un taxi hacia la granja, ¡Lo logro! Llego a la granja, pero, ¿qué se sintio traicionarlo?"<<endl;
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                case 2:barras-=1;
                cout<<"Le dijo que no, y el niño le dijo que en verdad queria ayudarlo \n Quedo con "<< barras << " barras \n Elige su proxima accion \n1.Confiar en él \n2.Que se vaya aun así \n3.Decirle que sí pero que si tambien podia llevarle comida a sus amigos" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                //menu 1.1.1.2
                    switch(opcionesn)
                    {    
                    case 1:
                    cout<<"Confio en él, cumplio y lo llevo a la granja donde se reunio con sus amigos\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Se fue pero se le acabron las barras de energia y, ¡No logro llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Le dijo que sí pero qur solo poquita, te llevo, ¡Lo logro! Llego a la granja y les diste comida a tus amigos"<<endl;
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                case 3: barras+=2;
                cout<<"Recargaste energia y te fuiste, encontraste a lo lejos la granja \n Quedo con "<< barras << " barras \n Elige su proxima accion \n1.Ir corriendo sin detenerse a la granja \n2.Ir pero haciendo una parada a ver que puede encontrar \n3.Esperar a reunir mas energia para irse\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Corrio pero le falto energia y, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Hizo la parada y encontro agua que le dio la suficiente energia para llegar y, ¡Logro llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Espero mucho y no reunio la suficiente energia, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                default:
                cout<<"Elige una opcion correcta"<<endl;
                }
            break;    
            case 2:barras-=2;
            cout<<"Te fuiste y te perdiste, solo recuerdas el camino de regreso al niño \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Regresar con el niño \n2.Seguir caminando hasta encontrar algo \n3.Buscar en la basura algo de comida\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    //menu1.12
                    switch(opcionesn)
                    {
                    case 1:barras-=1;
                    cout<<"Regresaste con el niño pero te dijo que solo te podia decir el camino ya que no podia acompañarte \n Quedo con "<< (barras)-float(2); cout << " barras \n Elige su proxima accion \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {  
                        case 1:barras-=1;
                        cout<<"El cumplio y le dijo el camino a la granja, llego y se reunio con sus amigos\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras-=3;
                        cout<<"Se fue rapido pero se le acabron las barras de energia y, ¡No logro llegar a la granja!" << std::endl;
                        break;
                        case 3:barras-=1;
                        cout<<"Se fue y pidio un taxi hacia la granja, ¡Lo logro! Llego a la granja, pero, ¿qué se sintio traicionarlo?"<<endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:barras-=1;
                    cout<<"Encontro un señor de un sombrero en una esquina que le ofrecio ayuda \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguirlo \n2.Ignorarlo \n3.Morderlo\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:barras-=6;
                        cout<<"Lo siguio y resulto ser malo\n ¡No logro regresar a la  granja y quedo hecho chicharron!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras-=6;
                        cout<<"¡Lo ignoro y ya cuando se iba, el señor lo capturo y, ¡No logro llegar a la granja!" << std::endl;
                        break;
                        case 3:barras-=2;
                        cout<<"Lo mordio y resulto ser una persona mala asi que por ayudar a atraparlo lo llevaron a la granja, ¡Lo logro! Llego a la granja y se reunio con sus amigos, que feliz!"<<endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3: barras-=1;
                    cout<<"Encontraste comida pero parece un poco pasada \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Guardarla en su bolsa y usarla solo en caso de ser necesaria en el camino \n2.Comerla e irse\n3.Tirarla otra vez e ir a la granja\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:barras-=1;
                        cout<<"Inicio el recorrido a la granja y comio lo que habia recogido y eso le ayudo a llegar a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras-=1;
                        cout<<"Se fue rapido y, ¡Logro llegar a la granja!\n¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 3:barras-=6;
                        cout<<"Tiro la comida y fue a la granja pero no le basto la energia y, \n ¡No logro llegar!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                
                    break;
                    case 4:
                    	return 0;
                   	break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
            break;
            case 3:barras+=2;
            cout<<"El niño se enojo y te regaño porque sus papas cuentan la comida y se pueden dar cuenta \n Quedo con "<< barras << " barras \n Elige su proxima accion \n1.Aceptar el regaño del niño \n2.Enojarte o sentirte mal e irte \n3.Pedirle disculpas al niño y decirle que te vas a ir\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        //menu1.13
                        switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Acepto el regaño del niño y el niño le dijo que esta bien que lo ayduara \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguir con el niño \n2.Salirse de su casa \n3.Robar comida e irse\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
           				    cout<<"Elegiste -"<<opcionesn<<""<<endl;
  					     	switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:barras-=1;
                            cout<<"Siguio con el niño y este lo llevo a la granja, ¡Lo logro!\n ¡Ahora vuelve a ser feliz en la granja!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se fue, pero se quedo sin energia y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=0;
                            cout<<"Con la comida que robo si pudo llegar a la granja \n ¡Logro llegar!\n ¡Sus amigos lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Le dijo que no, y el niño le dijo que en verdad queria ayudarlo pero que cooperara \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Acepta el trato \n2.Buscar dinero en su casa \n3.Pedirle nadamas un mapa y una verdura\n4.Salir del programa" << std::endl;
       				  cin>>opcionesn;
           				    cout<<"Elegiste -"<<opcionesn<<""<<endl;
  					     	switch(opcionesn)
                            {   
                            case 1:barras-=1;
                            cout<<"Siguio con el niño y este lo llevo a la granja, ¡Lo logro!\n ¡Ahora vuelve a ser feliz en la granja!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Busco dinero pero lo vio el niño y de consecuencia lo durmio ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=0;
                            cout<<"Le brindo las heramientas el niño y Pascal muy facilemnte llego a la granja \n ¡Sí logro llegar!\n ¡Sus amigos estaban muy contentos de verlo!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Le dijo que si se queria ir estaba bien pero que saliendo no podia regresar \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Quedarse \n2.Esperar a que se vaya y robarle su celular \n3.Tomar agua de su casa e irse\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
           				    cout<<"Elegiste -"<<opcionesn<<""<<endl;
  					     	switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Siguio con el niño y este lo llevo a la granja, ¡Lo logro!\n ¡Ahora vuelve a ser feliz en la granja!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=1;
                            cout<<"Le robo el celular y con el mapa tomo la ruta mas corta y cambio el celular por comida ¡Si logro llegar a la granja!\n¡Les llevo comida a sus amigos!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Tomo agua pero no lo hidrato lo suficiente y quedo desmayado en el camino \n ¡No logro llegar!\n ¡Falto muy poco!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
            break;
            case 4:
            	return 0;
            default: 
            cout<<"Elige una opcion correcta"<<endl;
            }
        
            
        break;
        case 2:barras-=2;
        cout<<"Siguio buscando y encontro un mapa \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Revisar el mapa \n2.Guardar el mapa \n3.Comerse el mapa\n4.Salir del programa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                //menu 1.2
                switch(opcionesn)
                {
                case 1: barras-=1;
                cout<<"Revisaste el mapa y si esta la granja dentro de el \n Quedo con "<< barras << " barras \n Elige su proxima accion \n1.Seguir el mapa \n2.Guardarlo y seguir buscando algo que le pueda ayudar\n3.Buscar comida para llevarles a sus amigos de la granja\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:barras-=1;
                    cout<<"Siguio el  mapa pero a mitad de camino le ofrecieron mucha comida a cambio de el \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Cambiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio \n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:barras+=4;
                        cout<<"Acepto el trato y ya con la comida Inicio el viaje, ¡Sí logro llegar a la granja!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras-=6;
                        cout<<"Rechazo la oferta y no tuvo suficiente energia para llegar y, ¡No logro llegar a la granja!" << std::endl;
                        break;
                        case 3:barras-=6;
                        cout<<"Lo estafo, el que le propuso el cambio le dio la comida y Pascal se iba a escapar pero lo atrapo el chico, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:barras-=2;
                    cout<<"Encontro un carrito prendido abandonado \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Subirse, extender el mapa e ir a la granja \n2.Apagarlo y esperar al dueño \n3.Ignorarlo e irse a la granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Manejo hasta la granja con ayuda del mapa ¡Sí logro llegar a la granja!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras+=1;
                        cout<<"Espero al dueño y este le agradecio llevandolo y dandole dinero para comida \n¡Logro llegar a la granja!" << std::endl;
                        break;
                        case 3:barras-=6;
                        cout<<"Ignoro el carro pero no tuvo la suficiente energia para llegar a la granja, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:barras-=1;
                    cout<<"Solo encontro agua para sus amigos \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ir solo con el agua \n2.Cambiar mas de la mitad del agua por poca comida \n3.Tomar un poco de agua e irse corriendo a la granja\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {   
                        case 1:barras+=1;
                        cout<<"Corrio pero le falto energia y tuvo que beber el agua, ¡Sí logro llegar a la granja!\n ¡Sus amigos lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras+=3;
                        cout<<"Cambio el agua por la comida y llego a la granja, ¡Logro llegar a la granja!, les dio la comida a sus amigos" << std::endl;
                        break;
                        case 3:barras-=6;
                        cout<<"No tomo el agua suficiente y no reunio la suficiente energia, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default: cout<<"elige una opcion correcta"<<endl;
                    }
                break;
                case 2:barras+=1;
                cout<<"Guardo el mapa y comio de un plato abandonado al lado de la basura \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Abrir el mapa \n2.Tirar el mapa porque siente que le estorba \n3.Comer mas comida de la basura\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:barras-=1;
                    cout<<"Abrio el mapa y vio que estaba un poco lejos de la granja \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Irse sin comer nadamas \n2.Buscar agua y despues intentar llegar a la granja \n3.Descansar antes de partir a la granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {   
                        case 1:barras-=6;
                        cout<<"Corrio pero le falto energia y, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras+=1;
                        cout<<"Encontro agua que le dio la suficiente energia para llegar y, ¡Logro llegar a la granja!" << std::endl;
                        break;
                        case 3:barras-=0;
                        cout<<"Se quedo dormido y le robaron el mapa, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:barras-=1;
                    cout<<"Tiro el mapa y se quedo sin saber en donde estaba \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Decirle a un perro si sabe donde esta \n2.Buscar el mapa \n3.Intentar robar dinero de un niño\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {   
                        case 1:barras-=1;
                        cout<<"El perro le dijo que si sabia pero que era en otro estado, lo cual era imposible, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras-=6;
                        cout<<"Busco el mapa pero no lo encontro y se acabo sus barras de energia, ¡No lgro llegar a la granja!" << std::endl;
                        break;
                        case 3:barras-=2;
                        cout<<"Le robo dinero a un niño pero no le alcanzo para nada y lo atraparon, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:barras+=1;
                    cout<<"Comio mas comida y le hizo daño \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Avanzar hacia la granja \n2.Comer verduras e intentar llegar a la granja \n3.Tomar agua de un charco muy grande e intentar ir a la granja\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {    
                        case 1:barras-=3;
                        cout<<"No avanzo mucho cuando la comida hizo que se desmayara¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras+=3;
                        cout<<"Comio las verduras y le dieron justo la energia para llegar, ¡Logro llegar a la granja!" << std::endl;
                        break;
                        case 3:barras-=6;
                        cout<<"Tomo agua del charco pero termino intoxicado, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
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
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                    
                break;
                case 3:barras+=1;
                cout<<"Se comio el mapa y ahora no sabe donde esta \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Intentar vomitarlo \n2.No hacer nada \n3.Subirse a una camioneta que tiene animales dentro\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:barras-=1;
                    cout<<"Intento vomitarlo pero solo escupio pedazos del mapa pero muy importantes \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Cambaiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {  
                        case 1:barras-=6;
                        cout<<"Corrio pero le falto energia y, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras+=3;
                        cout<<"Hizo la parada y encontro agua que le dio la suficiente energia para llegar y, ¡Logro llegar a la granja!" << std::endl;
                        break;
                        case 3:barras-=6;
                        cout<<"Espero mucho y no reunio la suficiente energia, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        	return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:barras-=0;
                    cout<<"No hizo nada y paso un carro que lo atropello\n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Levantarse e irse \n2.Dejar que lo lleve al veterinario el del carro \n3.Cerrar los ojos\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:barras-=6;
                        cout<<"Se levanto pero no llego mu lejos, se quedo sin energia, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras+=2;
                        cout<<"Lo llevo al veterinario pero se encariño con el que lo atropello y, ¡Conocio a su neuvo mejor amigo!" << std::endl;
                        break;
                        case 3:barras-=6;
                        cout<<"Cerro los ojos y lamentablemente, murio, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        	return 0;
                       	break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:barras-=1;
                    cout<<"Subio a la camioneta y al subir hablo con los demas animales, al parecer van a una granja\n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Bajarse de la camioneta \n2.Quedarse arriba de la camioneta \n3.Seguir preguntando a los otros animales aunque sienta que los estresa\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {  
                        case 1:barras-=6;
                        cout<<"Se bajo de la granja y se perdio, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:barras-=1;
                        cout<<"Se quedo arriba de la camioneta y se dio cuenta que iba para su granja, eran animales nuevos , ¡Logro llegar a la granja y reunirse con sus amigos!" << std::endl;
                        break;
                        case 3:barras-=4;
                        cout<<"Les siguio preguntando pero los estreso y estos lo aventaron fuera de la camioneta, ¡No logro llegar a la granja!\n ¡Ni modo!\n Quedo con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        	return 0;
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
                cout<<"Elige una opcion correcta"<<endl;
                }
        break;
        case 3:barras-=1;
        cout<<"Entro a la casa abierta y se dio cuenta que era de un carnicero cuando vio los cuchillos y la carne \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Esconderse \n2.Tomar comida que hay en la mesa e irse \n3.Esperar al carnicero e intentar hablar con el\n4.Salir del programa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                //menu 1.1.3
                switch(opcionesn)
                {
                case 1:barras-=1;
                cout<<"Se escondio y llego el carnicero a dormir a su casa \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Salir de la casa \n2.Despertarlo e intentar hablar con el \n3.Hablar con el, el dia siguiente\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:barras-=1;
                    cout<<"Salio de la casa y cuando estaba caminando solo, un policia lo subio a su patrulla para entregarlo a proteccion animal \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Dejarse llevar hasta alla \n2.En cuanto lo bajen tratar de huir \n3.Durante el recorrido en la patrulla hablar con los policias\n4.Salir del programa" << std::endl;
    			        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:barras-=0;
                            cout<<"Lo llevaron a proteccion animal y ahí se va a quedar ¡No lo logro!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Huyo cuando lo bajaron pero no tenia las suficientes barras de energia, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=0;
                            cout<<"Le conto a los policias y dijeron que ibas a estar mejor en esa granja que al lugar que te van a llevar \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:barras-=1;
                    cout<<"Lo desperto y aunque al principio el carcnicero se espanto, logro hablar con el, el carnicero le dijo que le podia dar comida y agua o llevarlo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Decirle que lo lleve \n2.Decidir por la comida y agua \n3.Tomar toda su comida e irse\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                            {  
                            case 1:barras-=6;
                            cout<<"Confio en el pero el carnicero lo traiciono y no lo llevo a la granja, ¡No lo logro!\n ¡Lo hizo carnitas!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Te comiste la comida en su casa pero resulto estar envenedada, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=4;
                            cout<<"Comio su comida y se dirigio a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: barras-=2;
                    cout<<"Al principio el carcnicero se espanto y fue tras el \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Dejar que lo alcance \n2.Esconderse en su casa \n3.Huir y robar su comida\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
				        switch(opcionesn)
                            { 
                            case 1:barras-=4;
                            cout<<"Lo alcanzo y no termino nada bien, ¡No lo logro!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se escondio, pero lo encontro y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=4;
                            cout<<"Robo su comida y llego a la granja con la energia que le dio \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 4:
                    	return 0;
                    	break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl; 
                    }
                break;
                case 2:barras+=2;
                cout<<"Tomo un poco de comida y se fue sin dejar rastro \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Entrar a otra casa \n2.Regresar en la noche a robarle al carnicero dinero \n3.Caminar direccion a la granja a ver si la ve\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:barras-=1;
                    cout<<"Entro a otra casa y encontro un bebe solito en peligro \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Cuidar al niño hasta que llegue alguien \n2.Dejar al niño y buscar dinero en la casa \n3.Robar su auto e irte a la granja\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
				        switch(opcionesn)
                            {  
                            case 1:barras-=0;
                            cout<<"Cuido al niño y llegaron los papas y le agradecieron y a cambio lo llevaron a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"No encontro dinero y se salio a la calle pero se perdio y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Robo el carro y no tenia gasolina \n ¡No logro llegar!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:barras-=2;
                    cout<<"Regreso pero el carnicero lo estaba esperando, el sí sabia que habia ido \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Irse antes que se de cuetnta \n2.Enfrentar al carnicero \n3.Intentar volver a entrar por agua\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
				        switch(opcionesn)
                            {   
                            case 1:barras-=6;
                            cout<<"Se estaba yendo pero el carnicero lo atrapo, ¡No lo logro!\n ¡Termino hecho carnitas!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Peleo con el carnicero y perdio, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=2;
                            cout<<"Entro por el agua y logro salir de la casa \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: barras-=2;
                    cout<<"Camino y camino y no logro verla pero sabia que estaba cerca porque unas personas se lo dijeron \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Pedirles un poco de comida a las personas \n2.Seguir caminando y probar suerte \n3.Rendirse\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
				        switch(opcionesn)
                            {  
                            case 1:barras+=4;
                            cout<<"Les pidio comida y se la dieron, y aparte lo llevaron a la granja ¡Lo logro!\n ¡Sus amigos lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Dio muchas vueltas pero jamas logro encontrar la granja, y se le acabo la energia ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Se rindio y no encontro la granja \n ¡No logro llegar!\n ¡Sus amigos se quedaron esperandolo!\n Quedo con "<<barras<< " barras" << std::endl;
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
                    cout<<"Elige una opcion correcta"<<endl; 
                    }
                break;
                case 3:barras-=1;
                cout<<"El carnicero lo vio y luego luego fue por el \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Correr \n2.Quedarse quieto y exlicarle la situacion \n3.Atacarlo\n4.Salir del programa" <<endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:barras-=3;
                    cout<<"Corrio y escapo, gasto mucha energia \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Dejarse atrapar por el carnicero \n2.Meterse a un restaurante a buscar comida \n3.Gritarle al carnicero la situacion en lo que lo persigue\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
				        switch(opcionesn)
                            {   
                            case 1:barras-=0;
                            cout<<"El carnicero lo atrapo y conversaron y termino llevandolo a la granja a cambio de decirle quien era el dueño de la granja ¡Lo logro!\n ¡Sus amigos lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras+=5;
                            cout<<"Encontro mucha comida que se devoro y pudo tener energia para ¡llegar a la granja!\n¡Qué buena suerte que haya habido comida en ese restaurante abandonado no?!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Se lo grito y el carnicero le dijo que parara que lo ayudaria, pero no fue asi, lo capturo y lo hizo chicharron\n ¡No logro llegar a la granja!\n ¡No confies en todo lo que te dicen!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:barras-=0;
                    cout<<"Le explico la situacion y el carnicero lo entendio, el dijo que conocia la granja \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Pedirle si lo puede llevar \n2.Pedirle que le realice un mapa \n3.Pedirle dinero prestado para irse\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                            {    
                            case 1:barras-=2;
                            cout<<"El carnicero lo llevo ya que de ahi, podia hacer trato con el dueño, ¡Lo logro!\n ¡Estuvo feliz con sus amigos!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"No le dio tiempo al carnicero de hacer el mapa, asi que se fue y se perdio entre las calles ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Le presto el dinero pero le dijo que si no se lo devolvia, iria por el \n ¡Logro llegar a la granja!\n ¡Mas le vale pagarle al carnicero!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: barras-=2;
                    cout<<"Lo ataco pero el carnicero lo amarro y le dio oportunidad de explciarle \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Inventar una historia de que esta enfermo para que no le haga nada \n2.Contarle la verdad \n3.Intentar zafarse\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                            { 
                            case 1:barras-=6;
                            cout<<"El carnicero llamo un veterianrio para revisarlo, el veterinario le dijo que estaba bien, y el carnicero se enojo porque le mintio, asi que lo mando para el otro mundo ¡No lo logro!\n ¡La verdad siempre sale a la luz!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras+=3;
                            cout<<"El carnicero entendio su caso y lo llevo a la granja y le dio de comer verduras, se hicieron buenos amigos ¡Sí logro llegar a la granja!\n¡Ahora tiene un nuevo amigo!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"No pudo zafarse y el carnicero al darse cuenta, lo hizo carnitas \n ¡No logro llegar a la granja!\n ¡El dialogo es muy importante!\n Quedo con "<<barras<< " barras" << std::endl;
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
                    cout<<"Elige una opcion correcta"<<endl; 
                    }
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
        cout<<"Elige una opcion correc"<<endl;
        }
        
    break;        
    case 2:barras-=1;
    cout<<"Espero y paso un carro que lo subio a su maletero y lo llevo a otra granja \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Estar dispuesto a conocer la nueva granja \n2.Morder al que lo recogio en cuanto lo agarre \n3.Hacer desastres en la nueva granja\n4.Salir del programa" << endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<""<<endl;
            
            //menu 1.2
            switch(opcionesn)
            {   
            case 1:barras-=1;
            cout<<"Conociste la nueva granja y es mejor que la otra en comodidad \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguir acoplandose a la granja \n2.Idear un plan para escapar \n3.Hablarle a los demas animales\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    //menu1.2.1
                    switch(opcionesn)
                    {
                    case 1:barras-=1;
                    cout<<"Le gusto mucho la nueva granja \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Intentar hacer nuevos amigos \n2.Espiar al dueño \n3.Relajarse mas" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Intento hacer nuevos amigos y lo consiguio aunque le adivirtieron que no era tan buen lugar \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Quedarse en la granja \n2.Intentar irse \n3.Preguntarles porqué\n4.Salir del programa" << std::endl;
 								   cin>>opcionesn;
			   			   		   cout<<"Elegiste -"<<opcionesn<<""<<endl;
		   				   		   switch(opcionesn)
      		   			   		   { 
	                               case 1:
	                               cout<<"Se quedo en la nueva granja, ¡Tiene nuevo hogar!\n ¡Que le vaya bien!\n Quedo con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 2:barras-=6;
	                               cout<<"Intento irse pero justo antes de salir lo agarraron, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 3:barras-=0;
	                               cout<<"Les pregunto porqué y ellos le dijeron que pronto lo averiguaria \n ¡Quedo atrapado!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 4:
	                               return 0;
	                               default:
	                               cout<<"Elige una opcion correcta"<<endl;
	                               }
                        break;
                        case 2:barras-=1;
                        cout<<"Espio al dueño y resulto no ser tan buen lugar, el dueño era malo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ir a contarle a los otros animales \n2.Intentar huir solo inmediatamente \n3.Quedarse aun así\n4.Salir del programa" << std::endl;
           					 cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<""<<endl;
            				 switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Le conto a los otros animales pero ellos le contestaron que ya sabian y quedo atrapado Pascal, ¡Espera el fin!\n ¡Atrapado quedo!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Intento huir y lo logro aunque se le acabaron las barras de energia y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-0;
                            cout<<"Se quedo en la nueva granja a pesar de las advertencias, ¡Tiene nuevo hogar!\n ¡Que le vaya bien...!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=0;
                        cout<<"Se relajo mas y se quedo dormido hasta el otro dia \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Hablarle a los demas animales \n2.Comer e irse a su granja \n3.Quedarse\n4.Salir del programa" << std::endl;
           				  cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<""<<endl;
            				 switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Le hablo a los demas animales y estos le dijeron que ya se quedaria ahi para siempre ¡No llego con sus amigos!\n ¡Lo llevaron a su prision!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras+=2;
                            cout<<"Comio pero cuando quiso salir de la granja ya no se lo permitieron ¡No logro llegar a la granja!\n¡Quedo atrapado!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=0;
                            cout<<"Se quedo en su nuevo hogar \n ¡Ahora tiene amigos nuevos!\n ¡Quedo atrapado en esa granja!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:barras-=1;
                    cout<<"Ideo el plan para escapar pero mientras lo hacia se dio cuenta que aquí tenia mejor lugar \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguir con el plan \n2.Probar que mas tiene la granja \n3.Hablarle al nuevo cerdo que llevaron\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Siguio con el plan y ya tenia todo listo para irse a su granja pero los demas animales lo trataron de convencer que se quedara \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Irse a su granja \n2.Quedarse en esa granja \n3.Preguntar por que deberia quedarse a los otros animales" << std::endl;
                		cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<""<<endl;
            				 switch(opcionesn)
                            { 
                            case 1: barras-=1;
                            cout<<"El siguí con su plan y se fue a su granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=0;
                            cout<<"Se dejo llevar por la nueva granja y termino decidiendo quedarse ¡No logro llegar a la granja!\n¡Tiene un nuevo hogar!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Pregunto a los otros animales y se dio cuenta que nadamas fue puro cuento, y descubrio la verdad de esa granja \n ¡No logro llegar con sus amigos!\n ¡Lo atraparon en la nueva granja!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=2;
                        cout<<"Probo todas las funciones de la granja y es la mejor granja que ha conocido y no sabe si extraña a sus amigos \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Quedarse en la nueva granja \n2.Empezar a hablarle a los demas animales \n3.Irse a su granja con sus amigos\n4.Salir del programa" <<endl;
                		cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<""<<endl;
            				 switch(opcionesn)
                            {  
                            case 1:barras-=0;
                            cout<<"Se dejo envovler por todo lo que tiene la nueva granja y ahi se quedo ¡No lo logro!\n ¡Lo habian engañado en su nueva granja!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=1;
                            cout<<"Al momento de hablarle a los demas animales se dio cuenta de su error pues todos querian salir de ahi ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Intento salir de la granja pero se dio cuenta que es casi imposible, ya que las entradas estan revisadas siempre \n ¡No logro llegar!\n ¡Quedo atrapado!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Le hablo al nuevo cerdo que llevaron y este le dijo que no era nuevo que el habia escapado de ahi porque no es un buen lugar y ahora no hay escape \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Resignarse \n2.Hacer un plan con el cerdo \n3.Intentar escapar solo\n4.Salir del programa" <<endl;
            				 cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<""<<endl;
            				 switch(opcionesn)
                            {  
                            case 1:barras-=0;
                            cout<<"Se resigno y acepto que jamas saldria de ahi, ¡No lo logro!\n ¡Le habian lavado la mente!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Intentaron escapar por medio de un tunel y, ¡Lo lograron, llegaron a la superficie!\n¡Pero Pascal no tuvo la suficiente energia para ir con sus amigos!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=2;
                            cout<<"Iba a escapar solo pero al momento de atravesar las puertas lo atraparon \n ¡No logro escapar!\n ¡Ahora esta atrapado!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:barras-=1;
                    cout<<"Le hablo a los animales y lo ignoraron \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Volver a intentarlo \n2.Hacerles una groseria y escapar \n3.Salir de la granja por un tunel\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Esta vez si contestaron y dijeron que no querian contestar para no decirle que en realidad la granja era terrible \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.No creerles y seguir normal \n2.Quedarse a pesar de las advertencias \n3.Intentar salir para comprobar lo que le dijeron\n4.Salir del programa" << std::endl;
    					    cin>>opcionesn;
          			  		cout<<"Elegiste -"<<opcionesn<<""<<endl;
							switch(opcionesn)
                            {   
                            case 1:
                            cout<<"No les creyo y siguio disfrutando de su nuevo hogar ¡No logro llegar a la granja!\n ¡Ahora tiene un nuevo hogar!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se quedo, aunque preocupado por las advertencias, pero ya habia tomado la decision ¡No logro llegar a la granja!\n¡Esta atrapado y no lo sabe!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Intento salir pero rapidamente lo capturaron y volvieron a meter a la granja \n ¡Era verdad!\n ¡Ha quedado atrapado!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Les hizo la groseria y se fue a esconder hasta que llego un gallo que intento hablar con el \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Hablar con el gallo \n2.Ignorar al gallo \n3.Atacar al gallo\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
          			  		cout<<"Elegiste -"<<opcionesn<<""<<endl;
							switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Hablo con el gallo, quien le conto que ahora no iba a poder salir de la granja y es por eso que los otros animales no querian decirselo, ¡No lo logro!\n ¡Resulto ser una estafa!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Decicio ignorar al gallo y poder seguir disfrutando de su nuevo hogar, ¡No logro llegar a la granja!\n¡Que disfrute su nuevo hogar!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=2;
                            cout<<"Ataco al gallo y lo metieron a un pozo, al parecer en esa granja habia castigos \n ¡No ogro llegar con sus amigos!\n ¡Esa granja no era lo que parecia!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Salio de la granja y desde afuera le dieron ganas de volver a entrar \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Irse a su granja \n2.Volver a entrar a la granja \n3.Ir por comida adentro de la granja y salir para irse con sus amigos\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
          			  		cout<<"Elegiste -"<<opcionesn<<""<<endl;
							switch(opcionesn)
                            {  
                            case 1:barras-=6;
                            cout<<"Salio de la granja pero se quedo sin energia a mitad del camino, ¡No logro llegar a la granja!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=1;
                            cout<<"Volvio entrar a la granja y esta vez ya no pudo salir, ¡No logro llegar a la granja!\n¡Que disfrute su nuevo hogar?!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=5;
                            cout<<"Entro por comida, tomo toda la que pudo, se salio y fue hacia su granja \n ¡Logro llegar con sus amigos!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opcion correcta"<<endl; 
                    }
            break;
            case 2:barras-=2;
            cout<<"Mordio al que lo recogio y este le pego pero Pascal alcanzo a escapar \n Quedo con "<<barras<< " barras \n Elige su proxima accion \n1.Seguir corriendo hasta encontrar algo \n2.Escapar y meterse a la granja de infiltrado \n3.Volver con el que lo recogio\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    //menu 1.2
                    switch(opcionesn)
                    {
                    case 1: barras-=1;
                    cout<<"Corrio y encontro una chica que tenia intenciones de recogerlo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Dejarse recoger por la chica \n2.Morderla igual\n3.Huir de ella\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        //menu1.1.1
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Lo recogio y le curo el golpe que habia tenido \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Dejarse de la chica y decirle lo que pasa\n2.En cuanto vea una puerta abierta intentar escapar \n3.Comer la comida que tenia en el suelo e intentar encontrar la salida\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                            //menu finaL
                            switch(opcionesn)
                            {  
                            case 1:
                            cout<<"Le conto a la chica y esta se conmovio y lo llevo a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se escapo, pero se quedo sin barras y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojo por el desastre que hizo pero al saber la historia lo comprendio y lo llevo a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"La mordio pero aun asi lo agarro y acaricio \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ya dejarse \n2.Volverla morder \n3.Explicarle su situacion\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                            //menu final
                            switch(opcionesn)
                            {  
                            case 1:
                            cout<<"Se dejo y se encariño con la chava, ¡No logro llegar a la granja!\n ¡Conocio su nueva dueña y hogar!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"La volvio a morder y se escapo, no llego muy lejos por falta de energia ¡No logro llegar a la granja!\n¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le explico su situacion y la chica le dio los cuidados y lo llevo a la granja \n ¡Sí logro llegar!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=2;
                        cout<<"Huyo de ella pero su herida le dolia mucho \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Regresar y explicarse su caso \n2.Seguir caminando y buscar comida en los botes de basura \n3.Rendirse\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                            //menu final
                            switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Regreso arrepentido y la chava lo noto y lo ayudo a reunirse con sus amigos, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Busco comida pero no encontro y termino por quedarse sin energia ¡No logro llegar a la granja!\n¡Que mala onda!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"No aguanto mas el dolor y decidio dormirse y, \n ¡No logro llegar!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 4:
                        return 0;
                        default: cout<<"elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:barras-=1;
                    cout<<"Se metio a la granja de infiltrado y vio muchos cerditos como el \n Quedo con "<<barras<< " barras \n Elige su proxima accion \n1.Hablarle a los demas cerditos \n2.Alejarse de ellos y esconderse \n3.Irse a otra zona de la granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {
                        case 1:barras-=0;
                        cout<<"Los demas cerditos lo miraban raro \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ir a preguntarles que pasa \n2.Ingorarlos y comer la comida tan rica que dan ahí \n3.Comer e intentar irse a su granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                            switch(opcionesn)
                            {
                            case 1:barras-=1;
                            cout<<"Los cerdos le contaron lo que pasa en esa granja, y fue cuando se dio cuenta que habia cometido un error ¡No logro ir con sus amigos!\n ¡Quedo atrapado en esa comoda granja!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras+=5;
                            cout<<"Decidio quedarse y comer toda la comida que le ponen ¡No logro llegar a la granja!\n¡Esta muy contento con la nueva granja!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=1;
                            cout<<"Una vez que acabo de comer, vio una puerta abierta y se subio a otra camienta que lo llevo a la granja \n ¡Logro llegar con sus amigos!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Se alejo de ellos, y ellos continuaron normal \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Compartir de su comida a los demas cerdos \n2.Comer solito en su lugar \n3.Irse a la granja con sus amigos\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                            switch(opcionesn)
                            {
                            case 1:barras-=0;
                            cout<<"Le compartio a los otros cerditos ya que vio que ellos no tenian comida, y estos le contaron que asi es al pricnipio y despues los empiezan a maltratar ¡No logro llegar a la granja!\n ¡En que lugar se metio!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras+=3;
                            cout<<"Comio solito y nadie mas le hablo, pero el disfruta su estancia ¡No logro llegar a la granja!\n¡Esta contento con su nuevo hogar!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Ya se iba de la granja cuando fue sorprendido, y vio que no seria tan facil, mordio al que lo trato de agarrar y escapo \n ¡Logro llegar a la granja con sus amigos!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Se fue a otra zona en donde los animales lo miraban raro \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Preguntarles que pasa \n2.Irse de la granja ya que se sintio incomodo \n3.Seguir comiendo y en su rollo\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                            switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Les pregunto y estos le dijeron la verdad sobre todo el lugar y que al final los ocupan paora cosas malas ¡No logro llegar a la granja!\n ¡Ya no hay forma de salir!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se fue, pero se quedo sin barras y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=0;
                            cout<<"Se siente tan agusto en su nueva granja \n ¡Nuevo hogar!\n ¡Que le dure mucho el gusto...!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:barras-=2;
                    cout<<"Volvio con el que lo recogio y este lo levanto e hizo todo el papeleo para dejarlo ahí \n Quedo con "<<barras<< " barras \n Elige su proxima accion \n1.Aceptarlo y actuar bien portado \n2.Soltarse y buscar su carro \n3.Morderlo y escapar\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
                        switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Actuo muy bien portado y al entrar a la granja quedo fascinado, era tan increible \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Quedarse a vivir ahí mejor \n2.Comer lo suficiente para irse a su granja con sus amigos \n3.Intentar hacer nuevos amigos y si no irse de ahi\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                            switch(opcionesn)
                            {  
                            case 1:barras+=2;
                            cout<<"Se quedo a disfrutar de la comida y la comdidad que le brinda, ¡No logro llegar a la granja!\n ¡Ahora es mas feliz!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras+=5;
                            cout<<"Comio mucho y se fue, encontro la salida y nadie lo vio salir y se fue a la granja, ¡Sí logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Le hablo a otros animales y le revelaron que la granja era mu mala, que con el pasar del tiempo los van maltratando y haciendo cosas raras con ellos \n ¡Ya no pudo escapar!\n ¡Quedo atrapado!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Busco el carro del que lo recogio y se subio, ya estaba encendido \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Irse a la granja \n2.Robarle las llaves e irse \n3.Echarlas adentro del carro y cerrarlo\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                            switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Se fue a la granja y aunque ya asi llegando se quedo sin gasolina pudo ontinuar a pata ¡Lo logro, llego con sus amigos!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se escapo con las llaves, pero se quedo sin energia y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Eso fue muy malvado pero a Pascal no le sirvio de nada ya que no tenia la energia suficiente y se perdio en el bosque \n ¡No logro llegar a la granja!\n ¡No seas tan rencoroso!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Lo mordio y escapo, encontro muchas botellas de agua y unas verduras, solo puede llevar una \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Llevarse las aguas para mantenerse hidratado y llegar a la granja \n2.Llevarse las verduras para tener la suficiente energia \n3.Comerse unas cuantas verduras y llevarse las aguas\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<""<<endl;
                            switch(opcionesn)
                            {   
                            case 1:barras-=6;
                            cout<<"Se hidrato muy bien pero no le alcanzaron las calorias para continuar, ¡No lo logro!\n ¡Sus amigos se quedaron esperandolo!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Las verduras no le aportaron la suficiente energia y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=6;
                            cout<<"Bien pensado, tuvo energia de sobra para poder correr hacia la granja \n ¡Logro llegar a la granja con sus amigos!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 4:
                        	return 0;
                        	break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    return 0;
                        	break;
                    default:
                    cout<<"Elige una opcion correcta"<< endl;
                    }
            break;
            case 3:barras-=1;
            cout<<"Hizo desastres en la nueva granja pero derrepente se dio cuenta que era muy buena la granja \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguirlos haciendo \n2.Relajarse mas y ver que sucede \n3.Comer y actuar bien\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    //menu 1.1.3
                    switch(opcionesn)
                    {
                    case 1:barras-=1;
                    cout<<"Los siguio haciendo  y le llamaron al que lo fue a dejar para que fuera por el, asi que fue por el pero noto que lo iba a abandonar en el camino \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Intentar hablar con el \n2.Dejar que lo abandone \n3.Pedirle comida de la que tiene en los aientos de atras\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                         //menu
                        switch(opcionesn)
                        {
                        case 1:barras-=0;
                        cout<<"Intento hablar con el y le pidio que mejor lo llevara a la granja \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguir hacia la granja \n2.Pedirle otra oportunidad en la granja que lo habia llevado \n3.Pedirle un poco de comida\n4.Salir del programa" << std::endl;
		   				    cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    	    switch(opcionesn)
                            {  
                            case 1:barras-=0;
                            cout<<"Siguieron la ruta y lo llevo a la granja, ¡Lo logro!\n ¡Sus amigos lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=0;
                            cout<<"Le dijo que ya no lo iban a aceptar asi que lo fue a dejar a la granja ¡Sí logro llegar a la granja!\n¡No era lo que queria!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Le pidio un poco de comida pero el se la nego, se enojaron y Pascal de bajo del carro, ya no pudo conitnuar, se quedo sin energia \n ¡No logro llegar!\n ¡Estuvo tan cerca!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=0;
                        cout<<"Lo abandono en la carretera \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Meterse al bosque a buscar algo util \n2.Seguir caminando hacia la granja \n3.Tomar agua de una fuente misteriosa" << std::endl;
                    	cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    	    switch(opcionesn)
                            {
                            case 1:barras-=6;
                            cout<<"No encontro algo y solo le salio un animal que lo persiguio hasta araparlo, ¡No lo logro!\n ¡Sus amigos se quedaron esperando!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Siguio caminando, pero se quedo sin energia y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=5;
                            cout<<"El agua era muy buena y le dio mucha energia, asi que corrio hacia la granja \n ¡Sí logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3: barras+=5;
                        cout<<"Le pidio la comida y se la dio y lo dejo en la carretera \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Antes de bajarse del carro robarle mas y correr \n2.Bajarse con la comida que le dio \n3.Pedirle que le dibuje un mapa\n4.Salir del programa" << std::endl;
                    	cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    	    switch(opcionesn)
                            { 
                            case 1:barras+=2;
                            cout<<"Le robo la comida y junto la suficiente energia para correr y lelgar a la granja, ¡Lo logro!\n ¡Sus amigos lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se bajo del auto y empezo a caminar pero le hizo falta energia ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=0;
                            cout<<"Le dibujo el mapa con la ruta mas corta y si alcanzo a llegar \n ¡Logro llegar!\n ¡Sus amigos lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl; 
                        }
                    break;
                    case 2:barras-=1;
                    cout<<"Se relajo y le gusto de mas la nueva granja, es muy comoda y espaciosa \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Espiar al dueño \n2.Salirse e irse \n3.Empezar a conocer animales\n4.Salir del programa" << endl;
					    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
						switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Espio al dueño y descubrio que tramaba algo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Decirle a los demas animales \n2.Salvarse solo \n3.Quedarse en la granja\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    	    switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Se lo conto a los demas animales y estos iniciaron una revolucion, el dueño termino huyendo ¡Lo logro, salvo la nueva granja!\n ¡Hurra!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se escapo, pero se quedo sin barras y, ¡No logro llegar a la granja!\n¡Sus amigos se quedaron esperandolo!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se quedo en la granja, apesar de lo que escucho, ya despues se las arreglara \n ¡No logro llegar a la granja!\n ¡Ahora tiene nuevo hogar!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Se salio y se fue, ahora tiene que buscar la forma de llegar a la granja \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Cruzar el bosque \n2.Rodear el rio \n3.Seguir la carretera\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    	    switch(opcionesn)
                            {  
                            case 1:barras-=6;
                            cout<<"Ese era un camino incorrecto, intento cruzar el bosque pero no salio vivo ¡No lo logro!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Ese era un camino incorrecto, intento rodear el rio pero se termino cayendo al agua ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=5;
                            cout<<"Ese era el camino correcto, la energia apenas y le alcanzo \n ¡Logro llegar!\n ¡Sus amigos lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Le hablo a unos animales y se hicieron buenos amigos \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Quedarse en la granja \n2.Invitarlos a su granja con sus amigos \n3.Comer e irse de ahi\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    	    switch(opcionesn)
                            { 
                            case 1:barras-=0;
                            cout<<"Se sintio muy agusto y se quedo a dsifrutar esa granja ¡Tiene hogar nuevo!\n ¡Los cambios tambien son buenos!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=0;
                            cout<<"Los invito pero no quisieron ir y lo obligaron a quedarse en la suya ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=2;
                            cout<<"Se fue y tomo el camino correcto \n ¡Logro llegar!\n ¡Esta muy feliz con sus amigos!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:barras+=5;
                    cout<<"Actuo muy bien y quedo bien alimentado \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Aprovechar para comer mas y salirse a la calle para buscar su granja \n2.Hablarle a los otros cerdos \n3.Intentarrecoelctar cosas para llevarle a sus amigos\n4.Salir del programa" << std::endl;
	     			    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<""<<endl;
						switch(opcionesn)
                        {
                        case 1:barras-=6;
                        cout<<"Se fue y quedo en la calle, ahora tiene que averiguar que direccion es la correcta \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ir a un lugar con niebla \n2.Seguir al desierto \n3.Seguir la carretera\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    	    switch(opcionesn)
                            {
                            case 1:barras-=6;
                            cout<<"Se fue por el camino con niebla y cayo en un pozo muy grande ¡No lo logro!\n ¡Quedo atrapado!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se fue por el desierto pero hacia mucho calor y se quedo sin energia  ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"La carretera era la ruta perfecta \n ¡Logro llegar!\n ¡Se volvio a reunir con sus amigos!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Hablo con los otros cerdos y se lelvaron muy bien \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Decirles que luego vendra a visitarlos y que se va a su granja \n2.Quedarse con ellos \n3.Decirles que lo acompañen a su granja\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    	    switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Se fue y no volvera a verlos, llego a la granja ¡Lo logro!\n ¡Sus amigos lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se quedo con ellos y olvido a sus amigos de la otra granja ¡No logro llegar a la granja!\n¡Pobre de sus amigos!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Aceptaron acompañarte y se quedaron contigo, les presentaste los nuevos animales a tus amigos \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Busco y encontro muchas cosas que pueden hacerle la vida mas comoda a sus amigos \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Averiguar si le alcanza la energia para llevarles las cosas \n2.Seguir buscando cosas \n3.Irse sin las cosas pero corriendo\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    	    switch(opcionesn)
                            {
                            case 1:barras-=1;
                            cout<<"Si le alcanzo la energia y les hizo mucho mejor la vida a sus amigos ¡Lo logro!\n ¡Todos estan muy contentos!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Siguio buscando cosas y no logro encontrar mas, quedo sin alimento y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Se fue corriendo y llego muy rapido a la granja \n ¡Si logro llegar!\n ¡Lo que improta es la amistad!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
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
            cout<<"Elige una opcion correc"<<endl;
            }
                
                
    break;
    case 3: barras-=1;
    cout<<"fue al pueblo abandonado en donde encontro una television prendida y en las noticias salio la granja afectada de donde el venia \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Buscar comida en la casa \n2.Buscar en la cochera \n3.Ver como se llama bien la granja y tdoso los datos para pdoer llegar\n4.Salir del programa" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<""<<endl;
            //menu 1.3
            switch(opcionesn)
            {
            case 1:barras-=1;
            cout<<"Busco comida en la casa pero encontro mucho dinero \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Caminar hacia otro lugar para poder comprar comida y un taxi hacia la granja \n2.Dejar el dinero ahí (no vaya a estar maldito) y seguir buscando comida \n3.Guardar el dinero y buscar comida\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:barras-=1;
                cout<<"Camino a otro lugar y se le cayo la mitad del dinero, aun asi tiene mucho \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Comprar verduras para sus amigos \n2.Buscar el dinero perdido \n3.Ir yendo a la avenida para pedir el taxi\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=0;
                        cout<<"La verdura que compro estaba podrida \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Tirarla y emprender el viaje a la granja \n2.Guardarla por si la ocupa durante el camino a la granja \n3.Tomar pura agua durante el camino a la granja\n4.Salir del programa" << std::endl;
    							  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            {    
                            case 1:barras-=6;
                            cout<<"Tiro la verdura y no logro encontrar la granja, ¡No lo logro!\n ¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras+=3;
                            cout<<"La guardo y la ocupo mas adelante, esas verduras lo ayudaron a encontrar la granja, ¡Sí logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=4;
                            cout<<"El agua fue suficiente para poder encontrar la granja, apenas y llego \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Busco pero no lo encontro, y le ofrecieron una tarjeta de debito \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ya irse a la granja en taxi \n2.Aceptar la tarjeta de debido \n3.Irse caminando para poder pasar a comprar cosas para sus amigos en el camino\n4.Salir del programa" << std::endl;
   					 			 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            {   
                            case 1:barras-=1;
                            cout<<"Se fue a la granja y llego sin problemas, aun le sobro dinero, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Los tramites son muy largos y cansados ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=5;
                            cout<<"Se fue caminando y paso por comida para el, para sus amigos, les llevo juguetes y monton de cosas mas \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Se subio al taxi y justo cuando arranco, los chocaron \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Pagarle el choque al taxista para que no se pare \n2.Apoyarlo y atacar al que los choco \n3.Bajarse e irse en otro\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            { 
                            case 1:barras-=0;
                            cout<<"Le pago casi el carro al taxista pero este lo llevo y hasta pasaron por comida, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se pelearon contra el que los choco y Pascal quedo en muy mal estado, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se bajo y dejo el problema atras, el nuevo taxi lo llevo sin problema a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 2:barras-=1;
                cout<<"Encontro comida! Pero el dinero no estaba maldito, ya no lo puede tomar porque se desaparecio \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Comerse toda la comida \n2.Solo se come una parte y era alergico a un componente \n3.Cayo sobre un charco que lo llevo a otra dimension\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Busco mas comida y encontro un celular con bateria \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Abrir el mapa en el celular \n2.Guadarlo y buscar agua o bebidas \n3.Ignorar el celular\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
           			  		 cout<<"Elegiste -"<<opcionesn<<""<<endl;
              			  	 switch(opcionesn)
                            {  
                            case 1:barras+=5;
                            cout<<"Abro el mapa en el celular y con este se guio para llegar a la granja, mientras comia lo que habia guardado, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Guardo el celular que en un momento se le cayo y no se fijo, por estar buscando bebidas se quedo sin energia y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Ignoro el celular y con la comida que tenia se fue a buscar la granja, al parecer estaba muy lejos para ir caminando \n ¡No logro llegar!\n ¡Es mejor usar ruedas!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Espero a que se le pasara la reaccion y quedo con hambre y enfermo de un ojo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Buscar zanahorias y agua \n2.Ir en bicicleta que estaba afuera de una casa a la granja \n3.Ir al veterinario abandonado y curarse para ir a la granja\n4.Salir del programa" << std::endl;
              					  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            { 
                            case 1:barras-=6;
                            cout<<"Quedo muy tocado por la alergia y facilmente se desmaya y no puede continuar con el recorrido ¡No lo logro!\n ¡Qué mala surte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=1;
                            cout<<"Se fue en la bicicleta, fue mas rapido,  ¡Logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Fue al veterinario pero no habia las suficientes cosas para curarse, asi que termina por quedarse dormido \n ¡No logro llegar!\n ¡Qué mal plan:(!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Ahora debe ir a salvar a sus amigos de un incendio \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Buscar un celular \n2.Correr a una ciudad habitada para buscar ayuda \n3.Creer que no es real lo que esta viviendo\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            {   
                            case 1:barras-=1;
                            cout<<"Encontro el celular y llamo a los bomberos, llegaron y resulto que no ahbai ningun incendio, ¡Todo fue una imaginacion!\n ¡Ten cuidado donde caes!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=1;
                            cout<<"Intento llegar a una ciudad habitada pero ya no podia salir del pueblo abandonado ¡Se quedo atrapado en el!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Logro despertar del sueño pero se quedo en el mismo lugar donde estaba \n ¡No logro llegar!\n ¡No tomes sueños tan profundos!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 3:barras-=1;
                cout<<"Encontro muchas verduras pero casualmente estan frescas \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Comerlas \n2.Salir a bsucar a un supermercado que hay \n3.Guardarlas" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras+=10;
                        cout<<"Las comio y no le paso nada y hasta le dieron mas energia \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Empezar el viaje a la granja \n2.Ir a la tienda de tecnologia \n3.Ir a la avenida y pelearse con un condutor por el carro\n4.Salir del programa" << std::endl;
         				   cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            {
                            case 1:barras-=2;
                            cout<<"Con la energia que le dieron las verduras encontro rapidamente la granja ¡Lo logro!\n ¡Las verduras eran magicas!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Fue a la tienda y encontro un patin electrico en el que se fue pero se acabo la bateria y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Se dirigio a la avenida a atacar a un conductor para quitarle el carro e irse a la granja pero termino atropellado \n ¡No logro llegar!\n ¡No te aloques tanto!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"En el supermercado encontro muchas aguas \n Quedo con "<<barras<< " barras \n Elige su proxima accion \n1.Ponerlas dentro de una mochila para llevarle a sus amigos \n2.Tomarse dos y dejar las demas \n3.Salir del supermercado e irse a la granja\n4.Salir del programa" << std::endl;
          				  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            { 
                            case 1:barras+=3;
                            cout<<"Comenzo el viaje pero se gasto todas las aguas porque la granja quedaba muy lejos, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Al dejar las demas no tuvo la suficiente energia para seguir y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"No tuvo la suficiente energia para llegar a la granja \n ¡No logro llegar!\n ¡Hay que planear bien los viajes!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Las guardo y empezo a ir a la granja, pero en un momento le dio demasiada hambre \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Comer solo una verdura y guardar las demas  \n2.Revisar la comida antes de comerla \n3.Intentar llegar sin consumir las verduras\n4.Salir del programa" << std::endl;
         				   cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            { 
                            case 1:barras+=6;
                            cout<<"Eran verduras magicas y la unica que comio le basto para llenar su barra de energia y llegar a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Reviso las verduras y vio que brillaban, fue ahí cuando descubrio que eran magicas pero se espanto y las tiro lo que provoco que no tuviera energia para llegar a la granja, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Intento llegar sin consumir las verduras pero no tenia energia y cuando quiso comer una se dio cuenta que se le habian caido \n ¡No logro llegar!\n ¡Aprovecha la comida cuando la tienes enfrente!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 4:
               	return 0;
                default:
                cout<<"Elige una opcion correc"<<endl; 
                }
            break;
            case 2:barras-=1;
            cout<<"En la chochera encontro una bicicleta vieja que le hace falta aceite \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Salir a la carretera para poder encontrar alguien y que arregle la bicicleta \n2.Dejar la bicicleta ahí y seguir alimentandose para irse \n3.Buscar el aceite\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:barras-=1;
                cout<<"salio a la carretera y logro que un adolescente se parara, le conto la situacion y este accedio a ayudarlo\n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Confiar en el adolescente \n2.Decirle que mejor ya no \n3.Pedirle que si lo llevaria el\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=0;
                        cout<<"Confio en el adolescente y este le dejo un mapa y la bicicleta arreglada \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Darle las gracias y darle su unica botella de agua \n2.Mientras lo hacia, alejarse de el \n3.Preguntarle porqué le ayudo\n4.Salir del programa" << std::endl;
	  							  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            {
                            case 1:barras-=1;
                            cout<<"Con la bicileta arreglada y el mapa fue mas facil llegar ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se alejo de el pero no encontro nadamas y sin energia no hizo nada y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Le pregunto porque le ayudo y el adolescente solo contesto que hay que ahcer el bien, Pascal llego en la bicicleta a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=0;
                        cout<<"El adolescente le dice que confie en el, que le ayudara en verdad \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Confiar en el \n2.Rechazarlo y decirle que se fuera \n3.Morderlo sin razon alguna" << std::endl;
                				  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            { 
                            case 1:barras-=1;
                            cout<<"Confio en el y el chico le dio todo lo necesario para llegar a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Lo rechazo y como venganza el chico le quito toda la comida, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Lo mordio y el chico por querer empujarlo termino por dejarlo caer sobre una esquina filosa y Pascal murio \n ¡No logro llegar!\n ¡Por qué atacarlo?!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Le pidio que lo llevara pero el adolescente le dijo que no podia, que solo podia ayudarlo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Preguntarle por qué no podia \n2.Correrlo \n3.Aceptar su ayuda y ponerle gasolina a la motoicleta que estaba estacionada afuera de la casa\n4.Salir del programa" << std::endl;
      				  			  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            {  
                            case 1:barras-=6;
                            cout<<"Le pregunto y el adolescente respondio que tenia otras cosas que hacer pero que ahora por eso lo iba a dejar solo, Pascal no pudo hacer nada, ¡No logro llegar!\n ¡Se mas paciente!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Lo corrio y el adolescente se fue por lo que Pascal quedo desamparado, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=0;
                            cout<<"Acepto la ayuda y se fue en la moto a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 2:barras-=1;
                cout<<"Dejo la bicicleta y ya cuando se iba se dio cuenta que el aceite estaba arriba de un mueble \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Apilar cosas hasta alcanzarlo \n2.Tirar el mueble para que caiga el aceite \n3.Irse a buscar comida\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Apilo las cosas y cuando lo iba alcanzar se derribaron las cosas y Pascal cayo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Levantarse y actuar como si nada \n2.Reposar y curarse el golpe \n3.Ponerse una crema y seguir poniendo el aceite\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            {  
                            case 1:barras-=6;
                            cout<<"Se levanto pero solo duro un segundo de pie y cayo,Pascal no pudo mas ¡No logro llegar a la granja!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=0;
                            cout<<"Se curo del golpe pero al ver que no tenia la suficiente energia para irse decidio quedarse en el pueblo, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Le puso el aceite a la bici y alcanzo a llegar con la energia que tenia \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=2;
                        cout<<"Tiro el mueble pero le cayo encima, ahora le duele mucho el cuerpo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Intentar levantarse \n2.Quedarse tirado hasta que pase el dolor para poder aplicar el aceite e irse \n3.Levantarse e ir por comida para ir a la granja\n4.Salir del programa" << std::endl;
           					cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            {   
                            case 1:barras-=6;
                            cout<<"Se levanto pero no tuvo la sigueinte fuerza para seguir adelante, ¡No logro llegar a la granja!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Espero, se le paso el dolor y ya con la bicicleta arreglada en el camino se dio cuenta que no tenia frenos y ya no resisitio otro golpe¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=4;
                            cout<<"Se levanto y consiguio mucha comida y le alcanzo para ir por la bicicleta y llegar a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Busco comida y encontro solo agua unas cuantas frutas y azucar \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Hacer un jugo que dara mucha energia \n2.Tomarse el agua y guardar las frutas para sus amigos \n3.Guardarlo e iniciar el viaje\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            { 
                            case 1:barras+=6;
                            cout<<"Con el jugo que se tomo le dio energia para encontrar la granja ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Tomo el agua y despues de estar caminando comio las frutas pero ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"No repartio bien su comida y se quedo varado en el camino \n ¡No logro llegar a la granja!\n ¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 3:barras-=1;
                cout<<"Busco el aceite y lo encontro arriba de un mueble \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Intentar bajar el aceite \n2.Buscar la comida para irse a la granja \n3.Buscar las llaves de la moto estacionada afuera\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Bajo el aceite y se lo coloco a la bicicleta, ahora puede rodar \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ir a la granja así \n2.Buscar comida e irse en la bici \n3.Revisar la bicicleta antes de irse\n4.Salir del programa" << std::endl;
           					cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    			  switch(opcionesn)
                            {
                            case 1:barras-=6;
                            cout<<"Se fue a la granja en la bici pero no se percato que no tenia frenos y choco ¡No lo logro!\n ¡La granja se quedo esperandolo!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=0;
                            cout<<"Se fue a la granja en la bici pero no se percato que no tenia frenos y choco pero con la comida que llevaba resistio el golpe ¡Sí logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Reviso la bicicleta, se dio cuenta que no tenia frenos asi que los arreglo y se fue a la granja despues \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras+=2;
                        cout<<"Encontro la comida y comio un poco \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Guardar la demas comida e irse a la granja \n2.Comer toda de un jalon \n3.Irse asi a la granja" << std::endl;
	   							cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
          			  			switch(opcionesn)
                            {  
                            case 1:barras+=2;
                            cout<<"Raciono bien su alimento y le alcanzo para llegar a la granja ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"No raciono bien su alimento y no le alcanzo para llegar a la granja, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Se quedo con falta de energia en el camino \n ¡No logro llegar a la granja!\n ¡Sus amigos se quedaran esperandolo!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras+=2;
                        cout<<"Encontro las llaves de la moto y tomo agua para hidratarse\n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Revisar la moto antes de irse \n2.Buscar el casco de seguridad e irse \n3.Irse así a la granja\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
  			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
   			  				switch(opcionesn)
                            { 
                            case 1:barras-=0;
                            cout<<"La moto estaba muy buen estado, asi que se fue y el camino estuvo muy facil ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Busco y busco el casco pero no lo encontro, asi que decidio irse a pie y no le alcanzo la energia ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=0;
                            cout<<"Se arriesgo a irse sin revisar la moto y sin casco pero todo le salio bien y no paso nada \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 4:
                	return 0;
                default:
                cout<<"Elige una opcion correc"<<endl; 
                }
            break;
            case 3:barras-=6;
            cout<<"Se quedo viendo la tele y ahora sabe bien los datos de la granja, pero tambien salio que el dueño de la granja era malo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguir queriendo ir a la granja para informarle a sus amigos \n2.Apresurarse a ir para salvar a sus amigos \n3.Ya no ir y pasearse en el pueblo\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:barras-=1;
                cout<<"Para regresar a la granja busca recolectar cosas que le sirvan \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Buscar preferentemente comida \n2.Buscar preferentemente medio de transporte rapido \n3.Buscar cosas al azar\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Busco y encontro mucha comida enlatada que metio dentro de una mochila que carga \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Dejar un poco de comida para que no gaste tanta energia \n2.Llevarse toda la comida que pueda\n3.Comer la mitad\n4.Salir del programa" << std::endl;
			 			cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
          			  			switch(opcionesn)
                            {  
                            case 1:barras-=6;
                            cout<<"La poquita que dejo fue la que le hizo falta para llegar a la granja ¡No logro llegar a la granja!\n ¡Que mala eleccion!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras+=6;
                            cout<<"Se llevo toda y la fue comiendo durante el camino, hasta que un oso que salio derrepene se la quito y lo dejo sin nada ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=6;
                            cout<<"Comio la mitad al empezar el viaje y la otra mitad cuando ya faltaba poco \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Encontro una patineta en la recamara de un niño \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Usar esa patineta para ir con sus amigos \n2.Mejor irse caminando y ver si la energia alcanza \n3.Dejarla y buscar otro metodo\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
          			  			switch(opcionesn)
                            {
                            case 1:barras-=1;
                            cout<<"Intento llegar con la patineta y le resulto mas facil de lo que pensaba ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se fue, pero se quedo sin energia y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"Dejo la patineta y no encontro otro metodo, buscando por los callejones del pueblo salio una rata que lo asusto y provoco un paro cardiaco \n ¡No logro llegar a la granja!\n ¡Murio del susto!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Encontro una resortera y agua \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Guardarlo y buscar piedras \n2.Dejarlo tirado \n3.Tomarse el agua y guardar la resortera" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
          			  			switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Encotro las piedras y fue a la granja a sacar al dueño a resorterazos y si pudo hacerlo, ¡Lo logro!\n ¡Salvo a sus amigos y les dio la granja!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=0;
                            cout<<"Lo dejo tirado y al llegar a la granja no pudo hacer nada y solo le conto a los demas animales lo que vio ¡Sí logro llegar a la granja!\n¡Qué mala suerte que no pudo hacer nada!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras+=2;
                            cout<<"Tomo el agua y busco piedras en la granja para lanzarle al dueño, lograron ahuyentarlo \n ¡Logro llegar y salvarlos!\n ¡Sus amigos se lo agradecieron!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 2:barras-=1;
                cout<<"Se pone a buscar cosas para salvar a sus amigos y un plan \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Buscar un transporte para sacar a sus amigos \n2.Buscar mucha comida para llenarlos de energia \n3.Buscar una cuerda con un gancho\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Encontro un camion muy grande pero con la mitad de gasonlina \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Arriesgarse e ir por sus amigos \n2.Desviarse del camino para cargar gasolina tomando el riesgo de no poder llegar a tiempo por sus amigos \n3.Buscar otro transporte\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
          			  			switch(opcionesn)
                            {
                            case 1:barras-=0;
                            cout<<"El camion si llego a la granja y Pascal ayudo a todos sus amigos a subir al camion ¡Lo logro!\n ¡Los salvo Pascal!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=0;
                            cout<<"Paso a ponerle gasolina pero cuando llego a la granja fue muy tarde ¡No logro llegar a tiempo a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=0;
                            cout<<"Busco otro transporte y encontro una camioneta mas chica, donde solo pudo salvar a los mas pequeños y los grandes hicieron desastres para poder salir \n ¡Logro llegar!\n ¡Les aviso y los salvo!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Fue a un supermercado y empaco toda la comida enlatada que habia \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Irse de una vez siguiendo la brujula \n2.Buscar un mapa en el supermercado \n3.Abrir una lata de comida y comerla\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
          			  			switch(opcionesn)
                            {  
                            case 1:barras+=5;
                            cout<<"Con la comida y la brujula, Pascal llego facilmente a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"No encontro el mapa y a pesar de toda la comida que tenia, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=6;
                            cout<<"La lata estaba echada a perder y le dio una infeccion en el estomago, Pascal no resistio \n ¡No logro llegar!\n ¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"En el supermercado encontro la cuerda y el gancho junto con colchones inflables \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Llevarse todo \n2.Buscar el inflador para los colchones \n3.Dejar los colchones para ahorrar energia al cargar\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
          			  			switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Llevo todo y al llegar a la granja les conto lo que vio en las noticias a sus amigos y los ayudo a escapar con las cosas, solo que se hicieron daño por no tener con que inflar los colchones, ¡Lo logro!\n ¡Los salvo!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=1;
                            cout<<"Lo encontro y fue rapido a la granja a ayudar a sus amigos y se fueron a vivir a otra granja¡Sí logro llegar a la granja!\n¡Los salvo del dueño malo!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Llevo todo y al llegar a la granja les conto lo que vio de las noticias a sus amigos y los ayudo a escapar con las cosas que guardo, ¡Lo logro!\n ¡Los salvo!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 3:barras-=1;
                cout<<"Ya no quiere ir y se va a un parque del pueblo abandonado \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Subirse a los juegos \n2.Buscar algo de comer \n3.Ir a la granja abandonada del pueblo\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Se subio a los juegos pero vio que adentro habia fantasmas \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Abrir y cerrar los ojos \n2.Huir \n3.Atacarlos" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
          			  			switch(opcionesn)
                            {   
                            case 1:
                            cout<<"Los abrio y cerro y ya no habia nada, ¡El pueblo estaba maldito!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intento escapar pero siempre volvia al mismo lugar ¡No logro llegar a la granja!\n¡El peublo estaba maldito!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:barras-=1;
                            cout<<"Los ataco pero sus golpes los atravesaban, no podia hacer nada \n ¡Quedo atrapado!\n ¡No logro ir con sus amigos!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:barras-=1;
                        cout<<"Vio un puesto de helados viejo al fondo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ir a los helados \n2.Buscar otro puesto, ese se ve muy tenebroso \n3.Quedarse en los juegos\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
          			  			switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Fue a los helados y al llegar el puesto lo absobio y no se supo nada mas ¡No logro reunirse con sus amigos!\n ¡Qué lastima!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Busco otro puesto y tomo su helado pero se quedo atrapado en ese lugar ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Siguio jugando en los juegos y asi se dio cuenta que ahi estaria para siempre \n ¡No Logro llegar!\n ¡Qué fue lo que paso?!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:barras-=1;
                        cout<<"Fue a la granja abandonada y noto que era igual a comparacion de la que venia el \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Revisar si esta el mismo hoyo que el habia hecho una vez \n2.No darle importancia y salirse de la granja \n3.Quedarse ahi a hablar con los animales que estan\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<""<<endl;
          			  			switch(opcionesn)
                            {  
                            case 1:barras-=1;
                            cout<<"Lo reviso y sí era, ¡Estaba en un mudno alterno derrepente!\n ¡como sucedio?!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:barras-=6;
                            cout<<"Se salio de la granja pero por andar paseandose no cumplio su mision, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No habia ningun animal, todo fue parte de sus alucinaciones \n ¡Quedo atrapado en sus sueños!\n ¡Que raro!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 4:
               	return 0;
                default:
                cout<<"Elige una opcion correc"<<endl; 
                }
            break;
            case 4:
            return 0;
            default:
            cout<<"Elige una opcion correc"<<endl;
            }
            
    break;
    case 4:barras-=0;
    cout<<"fue a la bahia y solo vio pasar un pescador que lo observo un rato \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Esperar a que regrese el pescador \n2.Seguir buscando en la bahia una pista \n3.Agarrar el bote que dejo el pescador\n4.Salir del programa" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<""<<endl;
            //menu 1.4
            switch(opcionesn)
            {
            case 1:barras-=1;
            cout<<"Espero al pescador y este regreso y se le acerco, le dijo que por qué estaba ahí \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Contestarle y placticarle el asunto \n2.Contarle una historia falsa para ver que hace el pescador \n3.Ignorarlo y correr\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:barras-=1;
                cout<<"Le platico y entendio su caso pero dijo que el no podia ayudarlo porque tenia que pescar pero le podia ofrecer comida y agua y decirte como irse \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Aceptar la comida y el agua  \n2.Rechazarlo e irse \n3.Robarle su dinero y escapar\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras+=6;
                        cout<<"Acepto la comida y el agua y cree estar listo para ir a la granja aunque sea un camino muy largo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Irse \n2.Esperar a reunir comida para el camino \n3.Preguntarle otra vez al pescador cuando podria llevarlo\n4.Salir del programa" << std::endl;
     					  		  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se fue y llego a la granja sin problemas ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras+=3;
                            	  cout<<"Reunio mas comida, llego sin problemas a la granja y hasta le sobro comida para sus amigos, ¡Sí logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"El pescador se estreso y ya no lo llevo y quedo sin energia \n ¡No logro llegar!\n ¡Sé mas paciente!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:barras-=1;
                        cout<<"Lo rechazo y se fue, no logro encotrar mas comida \n Quedo con "<< barras<<" barras \n Elige su proxima accion \n1.Regresar con el pescador \n2.Seguir buscando por los alrededores \n3.Ir rodeando el mar para encontrar la granja\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras-=1;
                            	  cout<<"Regreso con el pescador y este lo rechazo, ¡No lo logro!\n ¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"No encontro nada y se rompio la pata en una caida, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Rodeo el mar y estaba luego luego la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:barras-=1;
            			cout<<"Robo el dinero y le alcanza para el taxi, solo debe seguir caminando \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguir caminando hacia la carretera \n2.Arrepentirse y regresarle su dinero al pescador \n3.Buscar comida en el camino\n4.Salir del programa" << std::endl;
                					cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras-=1;
                            	  cout<<"Llego a la carretera y paro un taxi que lo llevo a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=1;
                            	  cout<<"Le devolvio el dinero al pescador y este solo tomo el dinero y se fue, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Por estar buscando la comida cayo en una zanja y, \n ¡No logro llegar!\n ¡Qué malo!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 2:barras-=1;
                cout<<"Le conto y el pescador lo dudo un poco pero le ofrecio alimento y decirle el camino \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Aceptar la ayuda del pescador \n2.Decirle que sí pero planear robarle \n3.Rechazarlo e irse\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras+=3;
                        cout<<"Acepto la ayuda del pescador y le dio la comida solo tiene que esperar a que le digan el camino \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.No esperar mas y preguntarle al pescador \n2.Ser paciente \n3.Pedirle mas agua para el camino\n4.Salir del programa" << std::endl;
                					  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {    
                            	  case 1:barras-=6;
                            	  cout<<"El pescador por decirle rapido las instrucciones se las dijo mal y Pascal se perdio, ¡No lo logro!\n ¡Sé mas paciente!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Fue paciente y el pescador le trazo un mapa que seguir y llego a la granja sin problemas , ¡Sí logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras+=4;
                            	  cout<<"Le dio mas agua el pescador y Pascal llego bien hidratado a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:barras-=1;
                        cout<<"El dia del robo te descubrio \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Simular y arreglarlo \n2.Aceptarlo y escaparse \n3.Terminar de robarle y huir" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {   
                            	  case 1:barras-=1;
                            	  cout<<"Simulo y arreglo la escena, tomo el dinero y se fue a la granja ¡Lo logro!\n ¡Robando, pero llego!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"Se escapo, pero se quedo sin barras y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Lo alcanzo antes de subirse al taxi y le quito el dinero y lo vendio a un carnicero \n ¡No logro llegar!\n ¡Cada acto tiene su consecuencia!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:barras-=1;
                        cout<<"Lo rechazo y se fue, se perdio pero encontro agua \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Volver con el pescador \n2.Empezar a caminar lo que cree que es el camino a la granja \n3.Rendirse\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
			  				   	  {
	   
                            	  case 1:barras-=6;
                            	  cout<<"El pescador lo ignoro y Pascal se fue y perdio en un bosque, ¡No lo logro!\n ¡Qué mal plan!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Camino y sí le atino, era el camino hacia la granja , ¡Lo logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Se rindio y hasta ahí llego \n ¡No logro llegar!\n ¡Se mas perseverante!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 3: barras-=2;
                cout<<"Corriste pero te alcanzo y quiere que le digas que hacias en su zona \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Decirle que esta perdido y quiere volver a su granja \n2.Pedirle comida y agua \n3.Deirle que no tiene hogar\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Le pregunta cual es su granja y le responde, el le dice que puede darle unas monedas para irse si le ayuda a pescar \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ayudarle a pescar \n2.Pescar pero escapar con los peces \n3.Rechazarlo y pedirle nadamas el camino\n4.Salir del programa"<<endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:
                            	  cout<<"Le ayudo al pescador y este se conmovio y lo llevo a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"Se escapo, pero se quedo sin barras y los peces no sirvieron de mucho, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Le dijo el camino pero a falta de energia, Pascal fue derribado por una enorme roca de la que no pudo escapar \n ¡No logro llegar!\n ¡Muy mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:barras-=1;
                        cout<<"Le dijo que sí, y que te te tienes que ir lo mas pronto \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Tomar la comida y agua e irse \n2.Tomarlo como insulto y no aceptar nada \n3.Pedirle mas comida para sus amigos\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras+=6;
                            	  cout<<"Se fue con la comida y agua y llevo a la granja donde les dio las sobras a sus amigos ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"Se fue pero por culpa de su orgullo se quedo sin energia ¡No logro llegar \n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras+=5;
                            	  cout<<"Le dio un poco mas de comida y se fue a darsela a sus amigos \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:barras-=1;
                        cout<<"Le dice que el esta muy solo y que podrias ser su acompañante \n Quedo con "<< barras << " barras \n Elige su proxima accion \n1.Aceptar ser su acompañante \n2.Decirle que puede visitarlo muy seguido si le ayuda \n3.Rechazarlo\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  case 1:
                            	  cout<<"Se quedo con el y ahora hacen un gran equipo ¡Encontro un nuevo hogar!\n ¡Que feliz!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=1;
                            	  cout<<"El pescador acepta y lo ayuda a llegar a la granja, ¡Sí logro llegar a la granja!\n¡Qué buena onda!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Lo rechaza y el pescador no le ayuda, Pascal ve que hay lluvia acida y no encuentra donde esconderse \n ¡No logro llegar!\n ¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opcion correcta"<<endl; 
                }
            break;
            case 2:barras-=1;
            cout<<"Encontro unas monedas del pescador en un baul \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Tomar las monedas e irse \n2.Dejarlas ahí y esperar mas tiempo \n3.Esconderse enfrente del baul" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:barras-=1;
                cout<<"Tomo las monedas y le alcanza para comprar comida y agua para sus amigos o pagar el taxi a la granja \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Pagar el taxi a la granja \n2.Ir caminando para poder comprarles alimentos a tus amigos \n3.Ahorrar el dinero\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=0;
                        cout<<"Elige pagar el taxi pero se da cuenta que se le cayo una parte del dinero \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguir aun asi \n2.Buscarlo \n3.Irse caminando\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  case 1:barras-=6;
                            	  cout<<"Siguio y si le alcanzo ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"Lo buscopero se quedo sin barras y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras+=5;
                            	  cout<<"Compro comida en el camino y se fue caminando¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:barras-=6;
                        cout<<"Va caminando pero ve que le hace falta alimento a él \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Comprarse para el\n2.Arriesgar y no comprar \n3.Pagar un taxi" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  { 
                            	  case 1:barras+=8;
                            	  cout<<"Se compro demasiada comida y tuvo barras de energia de sobra, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"Se arriesgo, pero se quedo sin energia y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Pago un taxi que lo llevo a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:barras-=6;
                        cout<<"Ya le falta poco para lograr juntar para los dos \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Irse ya asi \n2.Dar un ultimo esfuerzo \n3.Invertirlo todo en comida\n4.Salir del programa" << std::endl;
                        		  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras+=6;
                            	  cout<<"Se compro para el taxi y comida, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras+=4;
                            	  cout<<"Logro juntar para los dos ¡Si logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras+=5;
                            	  cout<<"Invirtio todo en comida, tardo mucho pero llego \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 2:barras-=1;
                cout<<"Las dejo ahí y el pescador fue y echo mas monedas \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Tomarlo y huir \n2.En cuanto lo vuelva a ver decirle lo mal de su escondite \n3.Esperar a que se junte mas\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=2;
                        cout<<"Lo toma y se va pero lo ve a lo lejos y lo alcanza en su moto vieja \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Le explica que es para regresar con sus amigos \n2.No dice nada y lo ataca para poder escapar otra vez \n3.Devolverle el dinero y pedirle perdon\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras-=0;
                            	  cout<<"El pescador le dice que se suba a la moto y lo lleva a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"Lo ataco pero no sirvio de nada, este lo capturo , ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Le devolvio el dinero y este lo perdono pero no lo llevo a la granja \n ¡No logro llegar!\n ¡Pero es de sabios arrepentirse!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:barras-=0;
                        cout<<"Le dice el pescador que qué hacia ahí \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Le dice que estaba planeando robarle pero que decidio no hacerlo \n2.Decirle que lo iban siguiendo y que por eso te escondiste ahí \n3.Contarle la verdad\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras-=6;
                            	  cout<<"El pescador lo corrio de su casa y Pascal termino sin nada, ¡No lo logro!\n ¡Intenta mas para la otra!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=0;
                            	  cout<<"Resulto el plan y por lastima lo llevo a la granja, ¡Sí logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=0;
                            	  cout<<"El pescador al principio se enojo por las mentiras que hizo pero al saber la historia lo comprendio y lo llevo a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:barras-=0;
                        cout<<"No ha ido a ponerle mas \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Esperar mas tiempo \n2.Tomar lo que hay hasta el momento e irse \n3.Ir a otro lado de la casa a buscar comida o agua" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  { 
                            	  case 1:barras-=6;
                            	  cout<<"Espero demasiado y nunca llego a nada, ¡No lo logro!\n ¡Intenta mas para la otra!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=2;
                            	  cout<<"Se fue con lo que habia y se bajo antes del taxi pero camino y llego, ¡Sí logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Se acabo su energia tratando de encontrar mas energia \n ¡No logro llegar!\n ¡Sera para la proxima!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 3: barras-=1;
                cout<<"Se escondio pero se le veia la cola y el pescador lo descubrio  "<< barras<< " barras \n Elige su proxima accion \n1.Voltear y morderlo para agarrar su moto e irse \n2.Hacerse el muerto \n3.Decirle la situacion que esta pasando\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=2;
                        cout<<"Gana tiempo mordiendolo pero la moto no arranca \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Irse a pata \n2.Seguir intentando hasta que arranque \n3.Dejarse atrapar\n4.Salir del programa" << std::endl;
                					cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras-=0;
                            	  cout<<"Lo mordio y tomo su moto, arranco hasta la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"No arranco la moto nunca, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=0;
                            	  cout<<"Se dejo atrapar y de castigo se quedo como acompañante del pescador \n ¡Logro un nuevo compañente!\n ¡Que no sea un castigo!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:barras-=0;
                        cout<<"Se hace el muerto y funciona, lo pone sobre su sillon para pensar que hacer con el \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Esperar a que se vaya para tomar todo lo que pueda e irse \n2.Seguir haciendose el muerto \n3.Cuando lo termine de acomodar atacarlo y correr\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {   
                            	  case 1:barras+=3;
                            	  cout<<"Se fue el pescador y no logro conseguir muchas cosas pero apenas y pudo llegar, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"Se siguio haciendo el muerto pero el pescador le hizo una prueba y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Lo ataco pero no llego muy lejos, el pescador lo secuestro \n ¡No logro llegar!\n ¡Qué mal plan!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:barras-=0;
                        cout<<"Le dijo la situacion y lo entiendo, le ofrecio llevarlo en su moto pero diciendole que tardaria y el tendria que bsucar su comida \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Aceptar el trato \n2.Rechazarlo y robarle su comida \n3.Robarle su moto y ver si tiene gasolina\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras+=3;
                            	  cout<<"Acepto el trato y consiguio su propia comida ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras+=5;
                            	  cout<<"Lo rechazo y robo su comida con la que pudo llegar a la granja ¡Sí logro llegar a la granja!\n¡Qué buena suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras+=3;
                            	  cout<<"Le robo su moto y si le alcanzo para llegar a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 4: return 0;
                default:
                cout<<"Elige una opcion correcta"<<endl; 
                }
            break;
            case 3:barras-=1;
            cout<<"Agarro el bote y vio que si servia \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ir con el bote al otro lado del mar \n2.Quedarse en el bote esperando \n3.Bajarse y esperar al siguiente dia para irse en el\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<""<<endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:barras-=2;
                cout<<"Llego al otro lado y vio muy cerca la granja, solo tiene que cruzar un rio \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguir con el plan \n2.Parar el barco para buscar comida \n3.Continuar a pie para explorar cruzando el rio con el puente de un tronco de un arbol\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=0;
                        cout<<"Cruzo el rio, pero lo vio el pescador que fue con el dueño de la granja  \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Desviarse \n2.Continuar con direccion a la granja \n3.Intentar llamar a sus amigos por señas para que le ayuden\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  { 
                            	  case 1:barras-=1;
                            	  cout<<"Se desvio y espero a que se fuera, cuando vio que se fue regreso a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=1;
                            	  cout<<"Continuo hacia la granja y ¡Sí llego!\n¡Qué buena onda!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=1;
                            	  cout<<"Los amigos le ayudaron y desviaron la atencion del pescador para que pudiera llegar Pascal \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:barras-=1;
                        cout<<"Paro el barco pero se lo llevo la marea \n Quedo con "<<barras<< " barras \n Elige su proxima accion \n1.Buscar la comida \n2.Intentar recuperar el bote jalando la cuerda que tiene atada \n3.Ver si con la energia que tiene le alcanza para llegar a la granja\n4.Salir del programa" << std::endl;
                					cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {    
                            	  case 1:barras+=5;
                            	  cout<<"Busco la comida y la encontro, le dio suficiente energia para llegar a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"La jalo con todas sus fuerzas pero se termino cayendo al mar, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras+=4;
                            	  cout<<"Apenitas y le alcanzo la energia para llegar \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:barras-=1;
                        cout<<"Va cruzando el puente pero se cae \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Nada con todas sus fuerzas a la orilla \n2.Dejarse llevar por la corriente \n3.Sostenerse del tronco e intentar subir\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras-=6;
                            	  cout<<"Nado hasta la orilla pero lamentablemente no pudo avanzar mas, ¡No lo logro!\n ¡Pobrecito!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=1;
                            	  cout<<"Se dejo llevar por la corriente y le ayudo mucho solo tuvo que caminar unos metros a la granja, ¡Lo logro llegar a la granja!\n¡Por fin se reunio con sus amigos!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Por mas que intento subir no pudo y se dejo caer al rio \n ¡No logro llegar!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 2:barras-=1;
                cout<<"Espero mucho y vio que venia el pescador \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Esperar a que llegue al bote el pescador \n2.Empezar a mover el bote al instante \n3.Bajarse y correr\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=1;
                        cout<<"Hablo con el pescador y este se subio y lo acerco a la granja \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Pedirle que lo lleve hasta donde se pueda a la granja \n2.Preguntarle si no tiene un poco de comida \n3.Bajarse y agradecerle\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras-=0;
                            	  cout<<"Se lo pidio y el granjero accedio, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"Le pregunto si no tenia comida y el pescador le dijo que no, asi que se quedo sin energia, ¡No logro llegar a la granja!\n¡Falto muy poco!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=1;
                            	  cout<<"Se bajo y el pescador lo acompaño hsta la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:barras-=1;
                        cout<<"Lo movio y el pescador corrio y empezo a jalar de la cuerda, al final gano Pascal y se llevo el bote \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Detener el bote y devolverselo al pescador \n2.Continuar hasta llegar a la orilla de la granja \n3.Parar a buscar comida\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  case 1:barras-=1;
                            	  cout<<"Detuvo el bote y al devolverselo al pescador, este lo llevo a la granja, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=1;
                            	  cout<<"Continuo y en la orilla corrio hacia la granja y, ¡Sí logro llegar a la granja!\n¡Que feliz estaba con sus amigos!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"No encontro mas comida y se quedo varado en el camino \n ¡No logro llegar!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:barras-=2;
                        cout<<"Se bajo y corrio pero se alento por falta de energia \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Parar y esperar al pescador que lo seguia \n2.Aventarse al mar \n3.Comer algo que se encontro en el suelo y seguir corriendo hsta perderlo\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  { 
                            	  case 1:barras-=6;
                            	  cout<<"Lo espero y el pescador no tuvo piedad, ¡No lo logro!\n ¡Eso debio doler!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=1;
                            	  cout<<"Se avento al mar y la corriente lo empujo hasta la orlla de la granja ¡Sí llego!\n¡Se reunio con sus amigos!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Lo que comio del suelo solo le dio energia para perder al pescador pero no para llegar a la granja \n ¡No logro llegar!\n ¡Que mala suerte!Quedo con"<<barras<<"barras"<<std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                break;
                case 3: barras-=1;
                cout<<"Espero al siguiente dia y el pescador se habia llevado el bote \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Seguir esperando \n2.En lo que no esta el pescador, saquear su alacena \n3.Irse en su moto hasta el momento en el que tenga que cruzar el rio\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<""<<endl;
                switch(opcionesn)
                        {
                        case 1:barras-=0;
                        cout<<"Espero y aparecio el bote otra vez pero no tiene la suficiente energia para manejarlo \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Ir a la casa a buscar comida \n2.Buscar la comida en la cabaña \n3.Tomar agua e intentar lograrlo con eso\n4.Salir del programa" << std::endl;
                					  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras-=1;
                            	  cout<<"Fue a la casa y si encontro comida, la comio e inmediatamente se fue al bote, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"En la cabaña solo habian herramientas de trabajo y de tanto buscar, gasto su energia, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras+=3;
                            	  cout<<"Tomo suficiente agua como para llegar a la granja \n ¡Logro llegar!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:barras-=1;
                        cout<<"Recolecto mucha comida \n Quedo con "<< barras<< " barras \n Elige su proxima accion \n1.Caminar hacia la granja, guiandose a través del cartel \n2.Irse en el bote \n3.Quedarse a vivir con el pescador\n4.Salir del programa" << std::endl;
                						 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:
                            	  cout<<"Se guio a través del cartel pero era otra granja, ¡No lo logro!\n ¡Que mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;barras-=6;
                            	  case 2:
                            	  cout<<"Se fue en el bote, pero se quedo sin barras y, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;barras-=6;
                            	  case 3:
                            	  cout<<"Le ofrecio su compañia y el pescador la acepto \n ¡Encontro un nuevo hogar!\n ¡Que vivan felices!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:barras-=1;
                        cout<<"Llego al cruce del rio pero no hay con que cruzarlo \n Quedo con "<< barras<<" barras \n Elige su proxima accion \n1.Intentar cruzarlo nadando \n2.Buscar una tabla con la que pueda cruzarlo \n3.Buscar otro camino mas lejano\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<""<<endl;
                    		  	  switch(opcionesn)
                            	  {  
                            	  case 1:barras-=1;
                            	  cout<<"Nado y nado, y con sus ultimos suspiros, ¡Lo logro!\n ¡Lo habian extrañado mucho!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:barras-=6;
                            	  cout<<"Busco la tabla pero no la encontro y se agoto su energia, ¡No logro llegar a la granja!\n¡Qué mala suerte!\n Quedo con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:barras-=6;
                            	  cout<<"Encontro el camino pero no llego, se quedo a metros \n ¡No logro llegar!\n ¡Energia agotada!\n Quedo con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opcion correcta"<<endl;
                        }
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
            cout<<"Elige una opcion correcta"<<endl;
            
            }
    break;
    case 5:
    return 0;
    break;
    default:
    cout<<"Elige una opcion correcta"<<endl;
    }
        
    
    
  
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    
}
    return 0;

}
