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
cout<<"Pascal era un cerdito que vivia en una granja junto a sus amigos, hasta que un dia un terrible remolino arrasó con todo a su paso y lo dejo varado en un desierto, Pascal decicio regresar a la granja con la esperanza de reencontrarse con sus amigos,  \n Ahora elige que hará Pascal \n 1:ir al pueblo \n 2:Espear que pase alguien \n 3:Ir al pueblo abandonado \n 4:ir a la bahia \n5.Salir del programa"<<endl;
std::cout << "Barras disponibles:"<<barras << endl;
cin>>opcionesn;
cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
    switch(opcionesn)
    {
    case 1:
    barras-=2;
    cout<<"fue al pueblo en donde encontró gente tratando de atraparlo y otro niño que le prometio ayudarlo. \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta \n4.Salir del programa" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
        //menu1.1
        switch(opcionesn)
        {       
        case 1:
        barras-=1;
        cout<<"Fue con el niño y este le dió alimento \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Seguir confiando en el niño \n2.Esperar el momento e irse \n3.Tomar mas comida con la posibilidad que se enoje\n4.Salir del programa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            switch(opcionesn)
            {
            barras-=2;
            case 1:
            cout<<"El niño te explico que el plan que era escapar un dia de su casa y empezar el viaje a tu granja. \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Aceptar el trato \n2.Decirle que no y que lo harás solo \n3.Robar su comida e irte\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.1.1
                switch(opcionesn)
                {
                barras-=2;
                case 1:
                cout<<"Aceptaste el trato y el dia del escape sus papas los descubrieron \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Ayudar al niño y salvarlo \n2.Irse al momento \n3.Esperar para robarle dinero para ir a la granja \n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.1.1.1
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Lo ayudó y lo salvó!, El cumplió y lo llevó a la granja donde se reunió con sus amigos\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Se fue rapido pero se le acabron las barras de energia y, ¡No logró llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Se fue y pidió un taxi hacia la granja, ¡Lo logró! Llegó a la granja, pero, ¿qué se sintió traicionarlo?"<<endl;
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                case 2:
                cout<<"Le dijó que no, y el niño le dijo que en verdad queria ayudarlo \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Confiar en él \n2.Que se vaya aun así \n3.Decirle que sí pero que si tambien podia llevarle comida a sus amigos" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.1.1.2
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Confió en él, cumplió y lo llevó a la granja donde se reunió con sus amigos\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Se fue pero se le acabron las barras de energia y, ¡No logró llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Le dijo que sí pero qur solo poquita, te llevó, ¡Lo logró! Llegó a la granja y les diste comida a tus amigos"<<endl;
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                case 3: 
                cout<<"Recargaste energia y te fuiste, encontraste a lo lejos la granja \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Ir corriendo sin detenerse a la granja \n2.Ir pero haciendo una parada a ver que puede encontrar \n3.Esperar a reunir mas energia para irse\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Corrió pero le faltó energia y, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Hizó la parada y encontro agua que le dió la suficiente energia para llegar y, ¡Logró llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Esperó mucho y no reunio la suficiente energia, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                default:
                cout<<"Elige una opción correcta"<<endl;
                }
            break;    
            case 2:
            cout<<"Te fuiste y te perdiste, solo recuerdas el camino de regreso al niño \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Regresar con el niño \n2.Seguir caminando hasta encontrar algo \n3.Buscar en la basura algo de comida\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.12
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Regresaste con el niño pero te dijo que solo te podia decir el camino ya que no podia acompañarte \n Quedó con "<< (barras)-float(2); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"El cumplió y le dijo el camino a la granja, llegó y se reunió con sus amigos\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se fue rapido pero se le acabron las barras de energia y, ¡No logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Se fue y pidió un taxi hacia la granja, ¡Lo logró! Llegó a la granja, pero, ¿qué se sintió traicionarlo?"<<endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Encontró un señor de un sombrero en una esquina que le ofreció ayuda \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguirlo \n2.Ignorarlo \n3.Morderlo\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Lo siguió y resulto ser malo\n ¡No logró regresar a la  granja y quedó hecho chicharrón!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"¡Lo ignoró y ya cuando se iba, el señor lo capturó y, ¡No logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Lo mordió y resulto ser una persona mala asi que por ayudar a atraparlo lo llevaron a la granja, ¡Lo logró! Llegó a la granja y se reunió con sus amigos, que feliz!"<<endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3: 
                    cout<<"Encontraste comida pero parece un poco pasada \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Guardarla en su bolsa y usarla solo en caso de ser necesaria en el camino \n2.Comerla e irse\n3.Tirarla otra vez e ir a la granja\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Inició el recorrido a la granja y comió lo que habia recogido y eso le ayudó a llegar a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se fue rapido y, ¡Logró llegar a la granja!\n¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 3:
                        cout<<"Tiro la comida y fue a la granja pero no le bastó la energia y, \n ¡No logró llegar!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                
                    break;
                    default:
                    cout<<"Elige una opción correcta"<<endl;
                    }
            break;
            case 3:
            cout<<"El niño se enojó y te regaño porque sus papas cuentan la comida y se pueden dar cuenta \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Aceptar el regaño del niño \n2.Enojarte o sentirte mal e irte \n3.Pedirle disculpas al niño y decirle que te vas a ir\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu1.13
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Acepto el regaño del niño y el niño le dijo que esta bien que lo ayduara \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguir con el niño \n2.Salirse de su casa \n3.Robar comida e irse\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
           				    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
  					     	switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Siguió con el niño y este lo llevo a la granja, ¡Lo logró!\n ¡Ahora vuelve a ser feliz en la granja!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue, pero se quedo sin energia y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Con la comida que robo si pudo llegar a la granja \n ¡Logró llegar!\n ¡Sus amigos lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Le dijó que no, y el niño le dijo que en verdad queria ayudarlo pero que cooperara \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Acepta el trato \n2.Buscar dinero en su casa \n3.Pedirle nadamas un mapa y una verdura\n4.Salir del programa" << std::endl;
       				  cin>>opcionesn;
           				    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
  					     	switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Siguió con el niño y este lo llevo a la granja, ¡Lo logró!\n ¡Ahora vuelve a ser feliz en la granja!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Busco dinero pero lo vio el niño y de consecuencia lo durmio ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le brindo las heramientas el niño y Pascal muy facilemnte llego a la granja \n ¡Sí logró llegar!\n ¡Sus amigos estaban muy contentos de verlo!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Le dijo que si se queria ir estaba bien pero que saliendo no podia regresar \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Quedarse \n2.Esperar a que se vaya y robarle su celular \n3.Tomar agua de su casa e irse\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
           				    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
  					     	switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Siguió con el niño y este lo llevo a la granja, ¡Lo logró!\n ¡Ahora vuelve a ser feliz en la granja!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Le robo el celular y con el mapa tomo la ruta mas corta y cambio el celular por comida ¡Si logró llegar a la granja!\n¡Les llevo comida a sus amigos!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Tomo agua pero no lo hidrato lo suficiente y quedo desmayado en el camino \n ¡No logró llegar!\n ¡Falto muy poco!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
            break;
            case 4:
            	return 0;
            default: 
            cout<<"Elige una opción correcta"<<endl;
            }
        
            
        break;
        case 2:
        cout<<"Siguió buscando y encontró un mapa \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Revisar el mapa \n2.Guardar el mapa \n3.Comerse el mapa\n4.Salir del programa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.2
                switch(opcionesn)
                {
                case 1: 
                cout<<"Revisaste el mapa y si esta la granja dentro de el \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Seguir el mapa \n2.Guardarlo y seguir buscando algo que le pueda ayudar\n3.Buscar comida para llevarles a sus amigos de la granja\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Siguió el  mapa pero a mitad de camino le ofrecieron mucha comida a cambio de el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Cambiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio \n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Aceptó el trato y ya con la comida Inició el viaje, ¡Sí logró llegar a la granja!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Rechazó la oferte y no tuvo suficiente energia para llegar y, ¡No logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Lo estafó, el que le propuso el cambio le dió la comida y Pascal se iba a escapar pero lo atrapo el chico, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Encontró un carrito prendido abandonado \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Subirse, extender el mapa e ir a la granja \n2.Apagarlo y esperar al dueño \n3.Ignorarlo e irse a la granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Manejó hasta la granja con ayuda del mapa ¡Sí logró llegar a la granja!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Esperó al dueño y este le agradeció llevandolo y dandole dinero para comida \n¡Logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Ignoró el carro pero no tuvo la suficiente energia para llegar a la granja, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Solo encontró agua para sus amigos \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir solo con el agua \n2.Cambiar más de la mitad del agua por poca comida \n3.Tomar un poco de agua e irse corriendo a la granja\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corrió pero le faltó energia y tuvo que beber el agua, ¡Sí logró llegar a la granja!\n ¡Sus amigos lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Cambió el agua por la comida y llegó a la granja, ¡Logró llegar a la granja!, les dió la comida a sus amigos" << std::endl;
                        break;
                        case 3:
                        cout<<"No tomó el agua suficiente y no reunio la suficiente energia, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default: cout<<"elige una opción correcta"<<endl;
                    }
                break;
                case 2:
                cout<<"Guardó el mapa y comió de un plato abandonado al lado de la basura \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Abrir el mapa \n2.Tirar el mapa porque siente que le estorba \n3.Comer mas comida de la basura\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Abrió el mapa y vio que estaba un poco lejos de la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Irse sin comer nadamas \n2.Buscar agua y despues intentar llegar a la granja \n3.Descansar antes de partir a la granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corrió pero le faltó energia y, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Encontro agua que le dió la suficiente energia para llegar y, ¡Logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Se quedó dormid y le robaron el mapa, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Tiró el mapa y se quedó sin saber en donde estaba \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Decirle a un perro si sabe donde esta \n2.Buscar el mapa \n3.Intentar robar dinero de un niño\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"El perro le dijo que si sabia pero que era en otro estado, lo cual era imposible, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Buscó el mapa pero no lo encontró y se acabó sus barras de energia, ¡No lgró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Le robó dinero a un niño pero no le alcanzó para nada y lo atraparon, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Comió más comida y le hizó daño \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Avanzar hacia la granja \n2.Comer verduras e intentar llegar a la granja \n3.Tomar agua de un charco muy grande e intentar ir a la granja\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"No avanzó mucho cuando la comida hizo que se desmayara¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Comió las verduras y le dieron justo la energia para llegar, ¡Logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Tomó agua del charco pero termino intoxicado, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
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
                    cout<<"Elige una opción correcta"<<endl;
                    }
                    
                break;
                case 3:
                cout<<"Se comió el mapa y ahora no sabe donde esta \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Intentar vomitarlo \n2.No hacer nada \n3.Subirse a una camioneta que tiene animales dentro\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Intentó vomitarlo pero solo escupió pedazos del mapa pero muy importantes \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Cambaiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corrió pero le faltó energia y, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Hizó la parada y encontro agua que le dió la suficiente energia para llegar y, ¡Logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Esperó mucho y no reunio la suficiente energia, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        	return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"No hizó nada y pasó un carro que lo atropelló\n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Levantarse e irse \n2.Dejar que lo lleve al veterinario el del carro \n3.Cerrar los ojos\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Se levantó pero no llego mu lejos, se quedo sin energia, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Lo llevó al veterinario pero se encariño con el que lo atropelló y, ¡Conoció a su neuvo mejor amigo!" << std::endl;
                        break;
                        case 3:
                        cout<<"Cerró los ojos y lamentablemente, murió, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        	return 0;
                       	break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Subió a la camioneta y al subir habló con los demas animales, al parecer van a una granja\n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Bajarse de la camioneta \n2.Quedarse arriba de la camioneta \n3.Seguir preguntando a los otros animales aunque sienta que los estresa\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Se bajó de la granja y se perdió, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se quedó arriba de la camioneta y se dio cuenta que iba para su granja, eran animales nuevos , ¡Logró llegar a la granja y reunirse con sus amigos!" << std::endl;
                        break;
                        case 3:
                        cout<<"Les siguió preguntando pero los estresó y estos lo aventaron fuera de la camioneta, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
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
                cout<<"Elige una opción correcta"<<endl;
                }
        break;
        case 3:
        cout<<"Entro a la casa abierta y se dió cuenta que era de un carnicero cuando vió los cuchillos y la carne \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Esconderse \n2.Tomar comida que hay en la mesa e irse \n3.Esperar al carnicero e intentar hablar con el\n4.Salir del programa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.1.3
                switch(opcionesn)
                {
                case 1:
                cout<<"Se escondio y llegó el carnicero a dormir a su casa \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Salir de la casa \n2.Despertarlo e intentar hablar con el \n3.Hablar con el, el dia siguiente\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Salió de la casa y cuando estaba caminando solo, un policia lo subió a su patrulla para entregarlo a protección animal \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Dejarse llevar hasta allá \n2.En cuanto lo bajen tratar de huir \n3.Durante el recorrido en la patrulla hablar con los policias\n4.Salir del programa" << std::endl;
    			        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Lo llevaron a protección animal y ahí se va a quedar ¡No lo logró!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Huyó cuando lo bajaron pero no tenia las suficientes barras de energia, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le contó a los policias y dijeron que ibas a estar mejor en esa granja que al lugar que te van a llevar \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Lo despertó y aunque al principio el carcnicero se espantó, logró hablar con el, el carnicero le dijo que le podia dar comida y agua o llevarlo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Decirle que lo lleve \n2.Decidir por la comida y agua \n3.Tomar toda su comida e irse\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Confió en el pero el carnicero lo traicionó y no lo llevo a la granja, ¡No lo logró!\n ¡Lo hizo carnitas!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Te comiste la comida en su casa pero resultó estar envenedada, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Comió su comida y se dirigió a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Al principio el carcnicero se espantó y fue tras el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Dejar que lo alcance \n2.Esconderse en su casa \n3.Huir y robar su comida\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Lo alcanzó y no termino nada bien, ¡No lo logró!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escondió, pero lo encontró y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Robó su comida y llego a la granja con la energia que le dió \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
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
                    cout<<"Elige una opción correcta"<<endl; 
                    }
                break;
                case 2:
                cout<<"Tomó un poco de comida y se fue sin dejar rastro \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Entrar a otra casa \n2.Regresar en la noche a robarle al carnicero dinero \n3.Caminar dirección a la granja a ver si la ve\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Entró a otra casa y encontro un bebe solito en peligro \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Cuidar al niño hasta que llegue alguien \n2.Dejar al niño y buscar dinero en la casa \n3.Robar su auto e irte a la granja\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Cuidó al niño y llegaron los papas y le agradecieron y a cambio lo llevaron a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"No encontró dinero y se salio a la calle pero se perdió y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Robó el carro y no tenia gasolina \n ¡No logró llegar!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Regreso pero el carnicero lo estaba esperando, el sí sabia que habia ido \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Irse antes que se de cuetnta \n2.Enfrentar al carnicero \n3.Intentar volver a entrar por agua\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se estaba yendo pero el carnicero lo atrapó, ¡No lo logró!\n ¡Termino hecho carnitas!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Peleo con el carnicero y perdió, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Entró por el agua y logró salir de la casa \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Camino y camino y no logro verla pero sabia que estaba cerca porque unas personas se lo dijeron \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Pedirles un poco de comida a las personas \n2.Seguir caminando y probar suerte \n3.Rendirse\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Les pidio comida y se la dieron, y aparte lo llevaron a la granja ¡Lo logró!\n ¡Sus amigos lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Dio muchas vueltas pero jamas logro encontrar la granja, y se le acabo la energia ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se rindio y no encontro la granja \n ¡No logró llegar!\n ¡Sus amigos se quedaron esperandolo!\n Quedó con "<<barras<< " barras" << std::endl;
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
                    cout<<"Elige una opción correcta"<<endl; 
                    }
                break;
                case 3:
                cout<<"El carnicero lo vió y luego luego fue por el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Correr \n2.Quedarse quieto y exlicarle la situación \n3.Atacarlo\n4.Salir del programa" <<endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Corrió y escapó, gastó mucha energia \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Dejarse atrapar por el carnicero \n2.Meterse a un restaurante a buscar comida \n3.Gritarle al carnicero la situacion en lo que lo persigue\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"El carnicero lo atrapó y conversaron y termino llevandoló a la granja a cambio de decirle quien era el dueño de la granja ¡Lo logró!\n ¡Sus amigos lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Encontro mucha comida que se devoro y pudo tener energia para ¡llegar a la granja!\n¡Qué buena suerte que haya habido comida en ese restaurante abandonado no?!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se lo grito y el carnicero le dijo que parara que lo ayudaria, pero no fue asi, lo capturo y lo hizo chicharron\n ¡No logró llegar a la granja!\n ¡No confies en todo lo que te dicen!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Le explicó la situación y el carnicero lo entendió, el dijo que conocia la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Pedirle si lo puede llevar \n2.Pedirle que le realice un mapa \n3.Pedirle dinero prestado para irse\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"El carnicero lo llevo ya que de ahi, podia hacer trato con el dueño, ¡Lo logró!\n ¡Estuvo feliz con sus amigos!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"No le dio tiempo al carnicero de hacer el mapa, asi que se fue y se perdio entre las calles ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le presto el dinero pero le dijo que si no se lo devolvia, iria por el \n ¡Logró llegar a la granja!\n ¡Mas le vale pagarle al carnicero!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Lo atacó pero el carnicero lo amarró y le dio oportunidad de explciarle \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Inventar una historia de que esta enfermo para que no le haga nada \n2.Contarle la verdad \n3.Intentar zafarse\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"El carnicero llamo un veterianrio para revisarlo, el veterinario le dijo que estaba bien, y el carnicero se enojo porque le mintio, asi que lo mando para el otro mundo ¡No lo logró!\n ¡La verdad siempre sale a la luz!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"El carnicero entendio su caso y lo llevo a la granja y le dio de comer verduras, se hicieron buenos amigos ¡Sí logró llegar a la granja!\n¡Ahora tiene un nuevo amigo!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No pudo zafarse y el carnicero ald arse cuenta, lo hizo carnitas \n ¡No logró llegar a la granja!\n ¡El dialogo es muy importante!\n Quedó con "<<barras<< " barras" << std::endl;
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
                    cout<<"Elige una opción correcta"<<endl; 
                    }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opción correcta"<<endl;
                }
              
        break;
        case 4:
        	return 0;
        default:
        cout<<"Elige una opción correc"<<endl;
        }
        
    break;        
    case 2:
    cout<<"Esperó y paso un carro que lo subió a su maletero y lo llevó a otra granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Estar dispuesto a conocer la nueva granja \n2.Morder al que lo recogio en cuanto lo agarre \n3.Hacer desastres en la nueva granja\n4.Salir del programa" << endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            
            //menu 1.2
            switch(opcionesn)
            {   
            case 1:
            cout<<"Conociste la nueva granja y es mejor que la otra en comodidad \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguir acoplandose a la granja \n2.Idear un plan para escapar \n3.Hablarle a los demas animales\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.2.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Le gustó mucho la nueva granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Intentar hacer nuevos amigos \n2.Espiar al dueño \n3.Relajarse más" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Intentó hacer nuevos amigos y lo consiguió aunque le adivirtieron que no era tan buen lugar \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Quedarse en la granja \n2.Intentar irse \n3.Preguntarles porqué\n4.Salir del programa" << std::endl;
 								   cin>>opcionesn;
			   			   		   cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
		   				   		   switch(opcionesn)
      		   			   		   {
             		   		   	   barras-=2;    
	                               case 1:
	                               cout<<"Se quedó en la nueva granja, ¡Tiene nuevo hogar!\n ¡Que le vaya bien!\n Quedó con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 2:
	                               cout<<"Intentó irse pero justo antes de salir lo agarraron, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 3:
	                               cout<<"Les preguntó porqué y ellos le dijeron que protno lo averiguaria \n ¡Quedó atrapado!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 4:
	                               return 0;
	                               default:
	                               cout<<"Elige una opcion correcta"<<endl;
	                               }
                        break;
                        case 2:
                        cout<<"Espió al dueño y resultó no ser tan buen lugar, el dueño era malo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir a contarle a los otros animales \n2.Intentar huir solo inmediatamente \n3.Quedarse aun así\n4.Salir del programa" << std::endl;
           					 cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a los otros animales pero ellos le contestaron que ya sabian y quedó atrapado Pascal, ¡Espera el fin!\n ¡Atrapado quedó!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intento huir y lo logró aunque se le acabaron las barras de energia y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se quedó en la nueva granja a pesar de las advertencias, ¡Tiene nuevo hogar!\n ¡Que le vaya bien...!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Se relajó más y se quedó dormido hasta el otro dia \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Hablarle a los demás animales \n2.Comer e irse a su granja \n3.Quedarse\n4.Salir del programa" << std::endl;
           				  cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le hablo a los demas animales y estos le dijeron que ya se quedaria ahi para siempre ¡No llego con sus amigos!\n ¡Lo llevaron a su prision!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Comió pero cuando quiso salir de la granja ya no se lo permitieron ¡No logró llegar a la granja!\n¡Quedo atrapado!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se quedó en su nuevo hogar \n ¡Ahora tiene amigos nuevos!\n ¡Quedo atrapado en esa granja!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Ideó el plan para escapar pero mientras lo hacia se dio cuenta que aquí tenia mejor lugar \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguir con el plan \n2.Probar que mas tiene la granja \n3.Hablarle al nuevo cerdo que llevaron\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Siguió con el plan y ya tenia todo listo para irse a su granja pero los demas animales lo trataron de convencer que se quedara \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Irse a su granja \n2.Quedarse en esa granja \n3.Preguntar por que deberia quedarse a los otros animales" << std::endl;
                		cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"El siguí con su plan y se fue a su granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se dejó llevar por la nueva granja y termino decidiendo quedarse ¡No logró llegar a la granja!\n¡Tiene un nuevo hogar!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Preguntó a los otros animales y se dió cuenta que nadamas fue puro cuento, y descubrió la verdad de esa granja \n ¡No logró llegar con sus amigos!\n ¡Lo atraparon en la nueva granja!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Probó todas las funciones de la granja y es la mejor granja que ha conocido y no sabe si extraña a sus amigos \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Quedarse en la nueva granja \n2.Empezar a hablarle a los demas animales \n3.Irse a su granja con sus amigos\n4.Salir del programa" <<endl;
                		cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se dejó envovler por todo lo que tiene la nueva granja y ahi se quedó ¡No lo logró!\n ¡Lo habian engañado en su nueva granja!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Al momento de hablarle a los demas animales se dió cuenta de su error pues todos querian salir de ahi ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Intentó salir de la granja pero se dió cuetna que es casi imposible, ya que las entradas estan revisadas siempre \n ¡No logró llegar!\n ¡Quedó atrapado!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Le habló al nuevo cerdo que llevaron y este le dijo que no era nuevo que el habia escapado de ahi porque no es un buen lugar y ahora no hay escape \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Resignarse \n2.Hacer un plan con el cerdo \n3.Intentar escapar solo\n4.Salir del programa" <<endl;
            				 cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se resigno y acepto que jamas saldria de ahi, ¡No lo logró!\n ¡Le habian lavado la mente!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intentaron escapar por medio de un tunel y, ¡Lo lograron, llegaron a la superficie!\n¡Pero Pascal no tuvo la suficiente energia para ir con sus amigos!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Iba a escapar solo pero al momento de atravesar las peurtas lo atraparon \n ¡No logró escapar!\n ¡Ahora esta atrapado!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Le habló a los animales y lo ignoraron \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Volver a intentarlo \n2.Hacerles una groseria y escapar \n3.Salir de la granja por un tunel\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Esta vez si contestaron y dijeron que no querian contestar para no decirle que en realidad la granja era terrible \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.No creerles y seguir normal \n2.Quedarse a pesar de las advertencias \n3.Intentar salir para comprobar lo que le dijeron\n4.Salir del programa" << std::endl;
    					    cin>>opcionesn;
          			  		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
							switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"No les creyó y siguió disfrutando de su nuevo hogar ¡No logró llegar a la granja!\n ¡Ahora tiene un nuevo hogar!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se quedó, aunque preocupado por las advertencias, pero ya habia tomado la decisión ¡No logró llegar a la granja!\n¡Esta atrapado y no lo sabe!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Intentó salir pero rapidamente lo capturaron y volvieron a meter a la granja \n ¡Era verdad!\n ¡Ha quedado atrapado!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Les hizo la groseria y se fue a esconder hasta que llegó un gallo que intento hablar con el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Hablar con el gallo \n2.Ignorar al gallo \n3.Atacar al gallo\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
          			  		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
							switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Habló con el gallo, quien le contó que ahora no iba a pdoer salir de la granja y es por eso que los otros animales no querian decirselo, ¡No lo logró!\n ¡Resultó ser una estafa!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Decició ignorar al gallo y poder seguir disfrutando de su nuevo hogar, ¡No logró llegar a la granja!\n¡Que disfrute su nuevo hogar!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Atacó al gallo y lo metieron a un pozo, al parecer en esa granja habia castigos \n ¡No ogró llegar con sus amigos!\n ¡Esa granja no era lo que parecia!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Salió de la granja y desde afuera le dieron ganas de volver a entrar \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Irse a su granja \n2.Volver a entrar a la granja \n3.Ir por comida adentro de la granja y salir para irse con sus amigos\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
          			  		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
							switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Salió de la granja pero se quedó sin energia a mitad del camino, ¡No logró llegar a la granja!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Volvió entrar a la granja y esta vez ya no pudo salir, ¡No logró llegar a la granja!\n¡Que disfrute su nuevo hogar?!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Entro por comida, tomo toda la que pudo, se salió y fue hacia su granja \n ¡Logró llegar con sus amigos!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opción correcta"<<endl; 
                    }
            break;
            case 2:
            cout<<"Mordió al que lo recogió y este le pegó pero Pascal alcanzó a escapar \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Seguir corriendo hasta encontrar algo \n2.Escapar y meterse a la granja de infiltrado \n3.Volver con el que lo recogió\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.2
                    switch(opcionesn)
                    {
                    case 1: 
                    cout<<"Corrió y encontró una chica que tenia intenciones de recogerlo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Dejarse recoger por la chica \n2.Morderla igual\n3.Huir de ella\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu1.1.1
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Lo recogió y le curo el golpe que habia tenido \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Dejarse de la chica y decirle lo que pasa\n2.En cuanto vea una puerta abierta intentar escapar \n3.Comer la comida que tenia en el suelo e intentar encontrar la salida\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu finaL
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"La mordió pero aun asi lo agarró y acarició \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ya dejarse \n2.Volverla morder \n3.Explicarle su situación\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu final
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se dejó y se encariño con la chava, ¡No logró llegar a la granja!\n ¡Conoció su nueva dueña y hogar!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"La volvió a morder y se escapo, no llego muy lejos por falta de energia ¡No logró llegar a la granja!\n¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le explico su situación y la chica le dió los cuidados y lo llevo a la granja \n ¡Sí logró llegar!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Huyó de ella pero su herida le doliá mucho \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Regresar y explicarse su caso \n2.Seguir caminando y buscar comida en los botes de basura \n3.Rendirse\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu final
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Regresó arrepentido y la chava lo notó y lo ayudo a reunirse con sus amigos, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Busco comida pero no encontró y termino por quedarse sin energia ¡No logró llegar a la granja!\n¡Que mala onda!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No aguanto mas el dolor y decidio dormirse y, \n ¡No logró llegar!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 4:
                        return 0;
                        default: cout<<"elige una opción correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Se metió a la granja de infiltrado y vió muchos cerditos como el \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Hablarle a los demas cerditos \n2.Alejarse de ellos y esconderse \n3.Irse a otra zona de la granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Los demas cerditos lo miraban raro \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir a preguntarles que pasa \n2.Ingorarlos y comer la comida tan rica que dan ahí \n3.Comer e intentar irse a su granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Los cerdos le contaron lo que pasa en esa granja, y fue cuadno se dió cuenta que habia cometido un error ¡No logró ir con sus amigos!\n ¡Quedó atrapado en esa comoda granja!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Decidió quedarse y comer toda la comida que le ponen ¡No logró llegar a la granja!\n¡Esta muy contento con la nueva granja!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Una vez que acabó de comer, vió una puerta abierta y se subió a otra camienta que lo llevo a la granja \n ¡Logró llegar con sus amigos!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Se alejó de ellos, y ellos continuaron normal \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Compartir de su comida a los demas cerdos \n2.Comer solito en su lugar \n3.Irse a la granja con sus amigos\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le compartió a los otros cerditos ya que vió que ellos no tenian comida, y estos le contaron que asi es al pricnipio y despues los empiezan a maltratar ¡No logró llegar a la granja!\n ¡En que lugar se metio!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Comio solito y nadie mas le hablo, pero el disfruta su estancia ¡No logró llegar a la granja!\n¡Esta contento con su nuevo hogar!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Ya se iba de la granja cuando fue sorprendido, y vió que no seria tan facil, mordió al que lo trato de agarrar y escapo \n ¡Logró llegar a la granja con sus amigos!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Se fue a otra zona en donde los animales lo miraban raro \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Preguntarles que pasa \n2.Irse de la granja ya que se sintió incomodo \n3.Seguir comiendo y en su rollo\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Les preguntó y estos le dijeron la verdad sobre todo el lugar y que al final los ocupan paora cosas malas ¡No logró llegar a la granja!\n ¡Ya no hay forma de salir!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se siente tan agusto en su nueva granja \n ¡Nuevo hogar!\n ¡Que le dure mucho el gusto...!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Volvió con el que lo recogió y este lo levantó e hizo todo el papeleo para dejarlo ahí \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Aceptarlo y actuar bien portado \n2.Soltarse y buscar su carro \n3.Morderlo y escapar\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Actuo muy bien portado y al entrar a la granja quedó fascinado, era tan increible \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Quedarse a vivir ahí mejor \n2.Comer lo suficiente para irse a su granja con sus amigos \n3.Intentar hacer nuevos amigos y si no irse de ahi\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se quedó a disfrutar de la comida y la comdidad que le brinda, ¡No logró llegar a la granja!\n ¡Ahora es mas feliz!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Comió mucho y se fue, encontró la salida y nadie lo vió salir y se fue a la granja, ¡Sí logró llegar a la granja!\n¡Qué buena suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le habló a otros animales y le revelaron que la granja era mu mala, que con el pasar del tiempo los van maltratando y haciendo cosas raras con ellos \n ¡Ya no pudo escapar!\n ¡Quedó atrapado!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Buscó el carro del que lo recogió y se subio, ya estaba encendido \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Irse a la granja \n2.Robarle las llaves e irse \n3.Echarlas adentro del carro y cerrarlo\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se fue a la granja y aunque ya asi llegando se quedó sin gasolina pudo ontinuar a pata ¡Lo logró, llego con sus amigos!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó con las llaves, pero se quedo sin energia y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Eso fue muy malvado pero a Pascal no le sirvió de nada ya que no tenia la energia suficiente y se perdió en el bosque \n ¡No logró llegar a la granja!\n ¡No seas tan rencoroso!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Lo mordió y escapó, encontro muchas botellas de agua y unas verduras, solo puede llevar una \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Llevarse las aguas para mantenerse hidratado y llegar a la granja \n2.Llevarse las verduras para tener la suficiente energia \n3.Comerse unas cuantas verduras y llevarse las aguas\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se hidrato muy bien pero no le alcanzaron las calorias para continuar, ¡No lo logró!\n ¡Sus amigos se quedaron esperandolo!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Las verduras no le aportaron la suficiente energia y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Bien pensado, tuvo energia de sobra para poder correr hacia la granja \n ¡Logró llegar a la granja con sus amigos!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    return 0;
                        	break;
                    default:
                    cout<<"Elige una opcion correcta"<< endl;
                    }
            break;
            case 3:
            cout<<"Hizo desastres en la nueva granja pero derrepente se dio cuenta que era muy buena la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguirlos haciendo \n2.Relajarse más y ver que sucede \n3.Comer y actuar bien\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.1.3
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Los siguió haciendo  y le llamaron al que lo fue a dejar para que fuera por el, asi que fue por el pero notó que lo iba a abandonar en el camino \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Intentar hablar con el \n2.Dejar que lo abandone \n3.Pedirle comida de la que tiene en los aientos de atras\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                         //menu
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Intentó hablar con el y le pidio que mejor lo llevara a la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguir hacia la granja \n2.Pedirle otra oportunidad en la granja que lo habia llevado \n3.Pedirle un poco de comida\n4.Salir del programa" << std::endl;
		   				    cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Siguieron la ruta y lo llevo a la granja, ¡Lo logró!\n ¡Sus amigos lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Le dijo que ya no lo iban a aceptar asi que lo fue a dejar a la granja ¡Sí logró llegar a la granja!\n¡No era lo que queria!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le pidio un poco de comida pero el se la negó, se enojaron y Pascal de bajo del carro, ya no pudo conitnuar, se quedo sin energia \n ¡No logró llegar!\n ¡Estuvo tan cerca!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Lo abandono en la carretera \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Meterse al bosque a buscar algo util \n2.Seguir caminando hacia la granja \n3.Tomar agua de una fuente misteriosa" << std::endl;
                    	cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"No encontro algo y solo le salio un animal que lo persiguio hasta araparlo, ¡No lo logró!\n ¡Sus amigos se quedaron esperando!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Siguio caminando, pero se quedo sin energia y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"El agua era muy buena y le dio mucha energia, asi que corrio hacia la granja \n ¡Sí logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3: 
                        cout<<"Le pidio la comida y se la dio y lo dejo en la carretera \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Antes de bajarse del carro robarle mas y correr \n2.Bajarse con la comida que le dio \n3.Pedirle que le dibuje un mapa\n4.Salir del programa" << std::endl;
                    	cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le robo la comida y junto la suficiente energia para correr y lelgar a la granja, ¡Lo logró!\n ¡Sus amigos lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se bajo del auto y empezó a caminar pero le hizo falta energia ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le dibujo el mapa con la ruta mas corta y si alcanzo a llegar \n ¡Logró llegar!\n ¡Sus amigos lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl; 
                        }
                    break;
                    case 2:
                    cout<<"Se relajó y le gustó de mas la nueva granja, es muy comoda y espaciosa \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Espiar al dueño \n2.Salirse e irse \n3.Empezar a conocer animales\n4.Salir del programa" << endl;
					    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
						switch(opcionesn)
                        {
                        case 1:
                        cout<<"Espió al dueño y descubrio que tramaba algo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Decirle a los demas animales \n2.Salvarse solo \n3.Quedarse en la granja\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se lo conto a los demas animales y estos iniciaron una revolucipn, el dueño termino huyendo ¡Lo logró, salvo la nueva granja!\n ¡Hurra!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Sus amigos se quedaron esperandolo!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se quedo en la granja, apesar de lo que escucho, ya despues se las arreglara \n ¡No logró llegar a la granja!\n ¡Ahora tiene nuevo hogar!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Se salio y se fue, ahora tiene que buscar la forma de llegar a la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Cruzar el bosque \n2.Rodear el rio \n3.Seguir la carretera\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Ese era un camino incorrecto, intento cruzar el bosque pero no salio vivo ¡No lo logró!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Ese era un camino incorrecto, intento rodear el rio pero se termino cayendo al agua ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Ese era el camino correcto, la energia apenas y le alcanzo \n ¡Logró llegar!\n ¡Sus amigos lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Le hablo a unos animales y se hicieron buenos amigos \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Quedarse en la granja \n2.Invitarlos a su granja con sus amigos \n3.Comer e irse de ahi\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se sintio muy agusto y se quedo a dsifrutar esa granja ¡Tiene hogar nuevo!\n ¡Los cambios tambien son buenos!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Los invito pero no quisieron ir y lo obligaron a quedarse en la suya ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se fue y tomo el camino correcto \n ¡Logró llegar!\n ¡Esta muy feliz con sus amigos!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Actuó muy bien y quedo bien alimentado \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Aprovechar para comer mas y salirse a la calle para buscar su granja \n2.Hablarle a los otros cerdos \n3.Intentarrecoelctar cosas para llevarle a sus amigos\n4.Salir del programa" << std::endl;
	     			    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
						switch(opcionesn)
                        {
                        case 1:
                        cout<<"Se fue y quedo en la calle, ahora tiene que averiguar que direccion es la correcta \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir a un lugar con niebla \n2.Seguir al desierto \n3.Seguir la carretera\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se fue por el camino con niebla y cayo en un pozo muy grande ¡No lo logró!\n ¡Quedo atrapado!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue por el desierto pero hacia mucho calor y se quedo sin energia  ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La carretera era la ruta perfecta \n ¡Logró llegar!\n ¡Se volvio a reunir con sus amigos!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Hablo con los otros cerdos y se lelvaron muy bien \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Decirles que luego vendra a visitarlos y que se va a su granja \n2.Quedarse con ellos \n3.Decirles que lo acompañen a su granja\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se fue y no volvera a verlos, llego a la granja ¡Lo logró!\n ¡Sus amigos lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se quedo con ellos y olvido a sus amigos de la otra granja ¡No logró llegar a la granja!\n¡Pobre de sus amigos!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Aceptaron acompañarte y se quedaron contigo, les presentaste los nuevos animales a tus amigos \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Busco y encontro muchas cosas que pueden hacerle la vida mas comoda a sus amigos \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Averiguar si le alcanza la energia para llevarles las cosas \n2.Seguir buscando cosas \n3.Irse sin las cosas pero corriendo\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Si le alcanzo la energia y les hizo mucho mejor la vida a sus amigos ¡Lo logró!\n ¡Todos estan muy contentos!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Siguio buscando cosas y no logró encontrar mas, quedo sin alimento y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se fue corriendo y llego muy rapido a la granja \n ¡Si ogró llegar!\n ¡Lo que improta es la amistad!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    case 4:
                    	return 0;
                    default:
                    cout<<"Elige una opción correcta"<<endl;
                    }
                  
            break;
            case 4:
            	return 0;
            default:
            cout<<"Elige una opción correc"<<endl;
            }
                
                
    break;
    case 3: 
    cout<<"fue al pueblo abandonado en donde encontró una television prendida y en las noticias salió la granja afectada de donde el venia \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Buscar comida en la casa \n2.Buscar en la cochera \n3.Ver como se llama bien la granja y tdoso los datos para pdoer llegar\n4.Salir del programa" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            //menu 1.3
            switch(opcionesn)
            {
            case 1:
            cout<<"Busco comida en la casa pero encontró mucho dinero \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Caminar hacia otro lugar para poder comprar comida y un taxi hacia la granja \n2.Dejar el dinero ahí (no vaya a estar maldito) y seguir buscando comida \n3.Guardar el dinero y buscar comida\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Caminó a otro lugar y se le cayó la mitad del dinero, aun asi tiene mucho \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Comprar verduras para sus amigos \n2.Buscar el dinero perdido \n3.Ir yendo a la avenida para pedir el taxi\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"La verdura que compró estaba podrida \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Tirarla y emprender el viaje a la granja \n2.Guardarla por si la ocupa durante el camino a la granja \n3.Tomar pura agua durante el camino a la granja\n4.Salir del programa" << std::endl;
    							  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Tiró la verdura y no logro encontrar la granja, ¡No lo logró!\n ¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"La guardó y la ocupo mas adelante, esas verduras lo ayudaron a encontrar la granja, ¡Sí logró llegar a la granja!\n¡Qué buena suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"El agua fue suficiente para pdoer encontrar la granja, apenas y llegó \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Buscó pero no lo encontró, y le ofrecieron una tarjeta de debito \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ya irse a la granja en taxi \n2.Aceptar la tarjeta de debido \n3.Irse caminando para poder pasar a comprar cosas para sus amigos en el camino\n4.Salir del programa" << std::endl;
       					 			 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se fue a la granja y llegó sin problemas, aun le sobró dinero, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Los tramites son muy largos y cansados ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se fue caminando y paso por comida para el, para sus amigos, les llevo juguetes y monton de cosas más \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Se subió al taxi y justo cuando arrancó, los chocaron \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Pagarle el choque al taxista para que no se pare \n2.Apoyarlo y atacar al que los chocó \n3.Bajarse e irse en otro\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le pago casi el carro al taxista pero este lo llevo y hasta pasaron por comida, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se pelearon contra el que los chocó y Pascal quedo en muy mal estado, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se bajo y dejo el problema atrás, el nuevo taxi lo llevo sin problema a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Encontró comida! Pero el dinero no estaba maldito, ya no lo puede tomar porque se desapareció \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Comerse toda la comida \n2.Solo se come una parte y era alergicó a un componente \n3.Cayó sobre un charco que lo llevo a otra dimensión\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Buscó mas comida y encontró un celular con bateria \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Abrir el mapa en el celular \n2.Guadarlo y buscar agua o bebidas \n3.Ignorar el celular\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
           			  		 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
              			  	 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Abró el mapa en el celular y con este se guió para llegar a la granja, mientras comia lo que habia guardado, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Guardó el celular que en un momento se le cayó y no se fijo, por estar buscando bebidas se quedó sin energia y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Ignoró el celular y con la comida que tenia se fue a buscar la granja, al parecer estaba muy lejos para ir caminando \n ¡No logró llegar!\n ¡Es mejor usar ruedas!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Esperó a que se le pasara la reacción y quedó con hambre y enfermo de un ojo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Buscar zanahorias y agua \n2.Ir en bicicleta que estaba afuera de una casa a la granja \n3.Ir al veterinario abandonado y curarse para ir a la granja\n4.Salir del programa" << std::endl;
              					  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Quedó muy tocado por la alergia y facilmente se desmaya y no puede continuar con el recorrido ¡No lo logró!\n ¡Qué mala surte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue en la bicicleta, fue mas rapido,  ¡Logró llegar a la granja!\n¡Qué buena suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Fue al veterinario pero no habia las suficientes cosas para curarse, asi que termina por quedarse dormid \n ¡No ogró llegar!\n ¡Qué mal plan:(!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Ahora debe ir a salvar a sus amigos de un incendió \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Buscar un celular \n2.Correr a una ciudad habitada para buscar ayuda \n3.Creer que no es real lo que esta viviendo\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Encontró el celular y llamo a los bomberos, llegaron y resulto que no ahbai ningun incendio, ¡Todo fue una imaginación!\n ¡Ten cuidado donde caes!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intentó llegar a una ciduad habitada pero ya no podia salir del pueblo abandonado ¡Se quedó atrapado en el!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Logró despertar del sueño pero se quedó en el mismo lugar donde estaba \n ¡No logró llegar!\n ¡No tomes sueños tan profundos!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"Encontró muchas verduras pero casualmente estan frescas \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Comerlas \n2.Salir a bsucar a un supermercado que hay \n3.Guardarlas" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Las comió y no le paso nada y hasta le dieron mas energia \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Empezar el viaje a la granja \n2.Ir a la tienda de tecnologia \n3.Ir a la avenida y pelearse con un condutor por el carro\n4.Salir del programa" << std::endl;
         				   cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Con la energia que le dieron las verduras encontró rapidamente la granja ¡Lo logró!\n ¡Las verduras eran magicas!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Fue a latienda y encontró un patin electrico en el que se fue pero se acabó la bateria y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se dirigió a la avenida a atacar a un conductor para quitarle el carro e irse a la granja pero termino atropellado \n ¡No logró llegar!\n ¡No te aloques tanto!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"En el supermercado encontró muchas aguas \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Ponerlas dentro de una mochila para llevarle a sus amigos \n2.Tomarse dos y dejar las demas \n3.Salir del supermercado e irse a la granja\n4.Salir del programa" << std::endl;
          				  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Comenzó el viaje pero se gasto todas las aguas porque la granja quedaba muy lejos, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Al dejar las demás no tuvo la suficiente energia para seguir y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No tuvo la suficiente energia para llegar a la granja \n ¡No logró llegar!\n ¡Hay que planear bien los viajes!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Las guardó y empezó a ir a la granja, pero en un momento le dió demasiada hambre \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Comer solo una verdura y guardar las demas  \n2.Revisar la comida antes de comerla \n3.Intentar llegar sin consumir las verduras\n4.Salir del programa" << std::endl;
         				   cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Eran verduras magicas y la unica que comió le basto para llenar su barra de energia y llegar a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Reviso las verduras y vio que brillaban, fue ahí cuando descubrió que eran magicas pero se espantó y las tiró lo que provoco que no tuviera energia para llegar a la granja, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Intento llegar sin consumir las verduras pero no tenia energia y cuando quisó comer una se dió cuenta que se le habian caido \n ¡No logró llegar!\n ¡Aprovecha la comida cuando la tienes enfrente!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 4:
               	return 0;
                default:
                cout<<"Elige una opción correc"<<endl; 
                }
            break;
            case 2:
            cout<<"En la chochera encontró una bicicleta vieja que le hace falta aceite \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Salir a la carretera para poder encontrar alguien y que arregle la bicicleta \n2.Dejar la bicicleta ahí y seguir alimentandose para irse \n3.Buscar el aceite\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"salió a la carretera y logro que un adolescente se parará, le contó la situación y este accedió a ayudarlo\n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Confiar en el adolescente \n2.Decirle que mejor ya no \n3.Pedirle que si lo llevaria el\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"COnfió en el adolescente y este le dejó un mapa y la bicicleta arreglada \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Darle las gracias y darle su unica botella de agua \n2.Mientras lo hacia, alejarse de el \n3.Preguntarle porqué le ayudó\n4.Salir del programa" << std::endl;
	  							  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Con la bicileta arreglada y el mapa fue mas facil llegar ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se alejó de el pero no encontró nadamas y sin energia no hizo nada y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le preguntó porque le ayudo y el adolescente solo contesto que hay que ahcer el bien, Pascal lelgo en la bicicleta a la grajna \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"El adolescente le dice que confie en el, que le ayudara en verdad \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Confiar en el \n2.Rechazarlo y decirle que se fuera \n3.Morderlo sin razón alguna" << std::endl;
                				  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Confió en el y el chico le dio todo lo necesario para llegar a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Lo rechazó y como venganza el chico le quitó toda la comida, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Lo mordió y el chico por querer empujarlo termino por dejarlo caer sobre una esquina filosa y Pascal murió \n ¡No logró llegar!\n ¡Por qué atacarlo?!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Le pidió que lo llevara pero el adolescente le dijo que no podia, que solo podia ayudarlo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Preguntarle por qué no podia \n2.Correrlo \n3.Aceptar su ayuda y ponerle gasolina a la motoicleta que estaba estacionada afuera de la casa\n4.Salir del programa" << std::endl;
      				  			  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le preguntó y el adolescente respondió que tenia otras cosas que hacer pero que ahora por eso lo iba a dejar solo, Pascal no pudo hacer nada, ¡No logró llegar!\n ¡Se más paciente!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Lo corrió y el adolescente se fue por lo que Pascal quedó desamparado, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Acepto la ayuda y se fue en la moto a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Dejó la bicicleta y ya cuando se iba se dió cuenta que el aceite estaba arriba de un mueble \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Apilar cosas hasta alcanzarlo \n2.Tirar el mueble para que caiga el aceite \n3.Irse a buscar comida\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Apiló las cosas y cuando lo iba alcanzar se derribaron las cosas y Pascal cayó \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Levantarse y actuar como si nada \n2.Reposar y curarse el golpe \n3.Ponerse una crema y seguir poniendo el aceite\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se levanto pero solo duro un segundo de pie y cayó,Pascal no pudo más ¡No logró llegar a la granja!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se curo del golpe pero al ver que no tenia la suficiente energia para irse decidió quedarse en el pueblo, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le puso el aceite a la bici y alcanzó a lelgar con la energia que tenia \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Tiró el mueble pero le cayo encima, ahora le duele mucho el cuerpo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Intentar levantarse \n2.Quedarse tirado hasta que pase el dolor para poder aplicar el aceite e irse \n3.Levantarse e ir por comida para ir a la granja\n4.Salir del programa" << std::endl;
           					cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se levantó pero no tuvo la sigueinte fuerza para seguir adelnate, ¡No logró llegar a la granja!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Espero, se le paso el dolor y ya con la bicicleta arreglada en el camino se dió cuenta que no tenia frenos y ya no resisitió otro golpe¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se levanto y consiguió mucha comida y le alcanzó para ir por la bicicleta y llegar a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Buscó comida y encontro solo agua unas cuantas frutas y azucar \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Hacer un jugo que dará mucha energia \n2.Tomarse el agua y guardar las frutas para sus amigos \n3.Guardarlo e iniciar el viaje\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Con el jugo que se tomo le dió energia para encontrar la granja ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Tomó el agua y despues de estar caminando comió las frutas pero ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No repartió bien su comida y se quedo varado en el camini \n ¡No logró llegar a la granja!\n ¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"Buscó el aceite y lo encontró arriba de un mueble \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Intentar bajar el aceite \n2.Buscar la comida para irse a la granja \n3.Buscar las llaves de la moto estacionada afuera\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Bajó el aceite y se lo colocó a la bicicleta, ahora puede rodar \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir a la granja así \n2.Buscar comida e irse en la bici \n3.Revisar la bicicleta antes de irse\n4.Salir del programa" << std::endl;
           					cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se fue a la granja en la bici pero no se percato que no tenia frenos y chocó ¡No lo logró!\n ¡La granja se quedó esperandolo!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue a la granja en la bici pero no se percato que no tenia frenos y chocó pero con la comida que llevaba resistió el golpe ¡Sí logró llegar a la granja!\n¡Qué buena suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Revisó la bicicleta, se dió cuenta que no tenia frenos asi que los arreglo y se fue a la granja despues \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Encontró la comida y comió un poco \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Guardar la demas comida e irse a la granja \n2.Comer toda de un jalón \n3.Irse asi a la granja" << std::endl;
	   							cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Racionó bien su alimento y le alcanzó para llegar a la granja ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"No racionó bien su alimento y no le alcanzó para llegar a la granja, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se quedó con falta de energia en el camino \n ¡No logró llegar a la granja!\n ¡Sus amigos se quedaran esperandolo!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Encontró las llaves de la moto y tomo agua para hidratarse\n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Revisar la moto antes de irse \n2.Buscar el casco de seguridad e irse \n3.Irse así a la granja\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
  			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
   			  				switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"La moto estaba muy buen estado, asi que se fue y el camino estuvo muy facil ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Buscó y buscó el casco pero no lo encontró, asi que decidio irse a pie y no le alcanzo la energia ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se arriesgo a irse sin revisar la moto y sin casco pero todo le salio bien y no paso nada \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 4:
                	return 0;
                default:
                cout<<"Elige una opción correc"<<endl; 
                }
            break;
            case 3:
            cout<<"Se quedó viendo la tele y ahora sabe bien los datos de la granja, pero tambien salió que el dueño de la granja era malo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguir queriendo ir a la granja para informarle a sus amigos \n2.Apresurarse a ir para salvar a sus amigos \n3.Ya no ir y pasearse en el pueblo\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Para regresar a la granja busca recolectar cosas que le sirvan \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Buscar preferentemente comida \n2.Buscar preferentemente medio de transporte rapido \n3.Buscar cosas al azar\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Buscó y encontró mucha comida enlatada que metió dentro de una mochila que carga \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Dejar un poco de comida para que no gaste tanta energia \n2.Llevarse toda la comida que pueda\n3.Comer la mitad\n4.Salir del programa" << std::endl;
			 			cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"La poquita que dejo fue lamque le hizo falta para llegar a la granja ¡No logró llegar a la granja!\n ¡Que mala elección!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se llevó toda y la fue comiendo durante el camino, hasta que un oso que salio derrepene se la quito y lo dejo sin nada ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Comió la mitad al empezar el viaje y la otra mitad cuando ya faltaba poco \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Encontró una patineta en la recamara de un niño \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Usar esa patineta para ir con sus amigos \n2.Mejor irse caminando y ver si la energia alcanza \n3.Dejarla y buscar otro metodo\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Intentó llegar con la patineta y le resultó mas facil de lo que pensaba ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue, pero se quedo sin energia y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Dejó la patineta y no encontró otro metodo, buscando por los callejones del pueblo salió una rata que lo asustó y provoco un paro cardiaco \n ¡No logró llegar a la granja!\n ¡Murió del susto!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Encontró una resortera y agua \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Guardarlo y buscar piedras \n2.Dejarlo tirado \n3.Tomarse el agua y guardar la resortera" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Encotró las piedras y fue a la granja a sacar al dueño a resorterazos y si pudo hacerlo, ¡Lo logró!\n ¡Salvo a sus amigos y les dió la granja!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Lo dejó tirado y al llegar a la granja no pudo hacer nada y solo le contó a los demas animales lo que vió ¡Sí logró llegar a la granja!\n¡Qué mala suerte que no pudo hacer nada!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Tomó el agua y busco piedras en la granja para lanzarle al dueño, lograron ahuyentarlo \n ¡Logró llegar y salvarlos!\n ¡Sus amigos se lo agradecieron!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Se pone a buscar cosas para salvar a sus amigos y un plan \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Buscar un transporte para sacar a sus amigos \n2.Buscar mucha comida para llenarlos de energia \n3.Buscar una cuerda con un gancho\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Encontró un camión muy grande pero con la mitad de gasonlina \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Arriesgarse e ir por sus amigos \n2.Desviarse del camino para cargar gasolina tomando el riesgo de no poder llegar a tiempo por sus amigos \n3.Buscar otro transporte\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"El camión si llego a la granja y Pascal ayudo a todos sus amigos a subir al camión ¡Lo logró!\n ¡Los salvo Pascal!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Paso a ponerle gasolina pero cuando llegó a la granja fue muy tarde ¡No logró llegar a tiempo a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Busco otro transporte y encontro una camioneta mas chica, donde solo pudo salvar a los mas pequeños y los grandes hicieron desastres para poder salir \n ¡Logró llegar!\n ¡Les aviso y los salvo!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Fue a un supermercado y empacó toda la comida enlatada que habia \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Irse de una vez siguiendo la brujula \n2.Buscar un mapa en el supermercado \n3.Abrir una lata de comida y comerla\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Con la comida y la brujula, Pascal llego facilemnte a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"No encontró el mapa y a pesar de toda la comida que tenia, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La lata estaba echada a perder y le dio una infección en el estomago, Pascal no resistió \n ¡No logró llegar!\n ¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"En el supermercado encontró la cuerda y el gancho junto con colchones inflables \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Llevarse todo \n2.Buscar el inflador para los colchones \n3.Dejar los colchones para ahorrar energia al cargar\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Llevo todo y al llegar a la granja les conto lo que vió en las noticias a sus amigos y los ayudo a escapar con las cosas, solo que se hicieron daño por no tener con que inflar los colchones, ¡Lo logró!\n ¡Los salvo!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Lo encontró y fue rapido a la granja a ayduar a sus amigos y se fueron a vivir a otra granja¡Sí logró llegar a la granja!\n¡Los salvo del dueño malo!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Llevo todo y al llegar a la granja les conto lo que vió de las noticias a sus amigos y los ayudo a escapar con las cosas que guardo, ¡Lo logró!\n ¡Los salvo!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"Ya no quiere ir y se va a un parque del pueblo abandonado \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Subirse a los juegos \n2.Buscar algo de comer \n3.Ir a la granja abandonada del pueblo\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Se subió a los juegos pero vió que adentro habia fantasmas \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Abrir y cerrar los ojos \n2.Huir \n3.Atacarlos" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Los abrio y cerro y ya no habia nada, ¡El pueblo estaba maldito!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intentó escapar pero siempre volvia al mismo lugar ¡No logró llegar a la granja!\n¡El peublo estaba maldito!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Los atacó pero sus golpes los atravesaban, no podia hacer nada \n ¡Quedó atrapado!\n ¡No logró ir con sus amigos!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Vió un puesto de helados viejo al fondo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir a los helados \n2.Buscar otro puesto, ese se ve muy tenebroso \n3.Quedarse en los juegos\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Fue a los helados y al llegar el puesto lo absrobió y no se supo nada mas ¡No logró reunirse con sus amigos!\n ¡Qué lastima!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Buscó otro puesto y tomó su helado pero se quedó atrapado en ese lugar ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Siguió jugando en los juegos y asi se dió cuenta que ahi estaria para siempre \n ¡No Logró llegar!\n ¡Qué fue lo que paso?!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Fue a la granja abandonada y notó que era igual a comparación de la que venia el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Revisar si esta el mismo hoyo que el habia hecho una vez \n2.No darle importancia y salirse de la granja \n3.Quedarse ahi a hablar con los animales que estan\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Lo reviso y sí era, ¡Estaba en un mudno alterno derrepente!\n ¡comó sucedió?!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se salió de la granja pero por andar paseandose no cumplió su misión, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No habia ningun animal, todo fue parte de sus alucinaciones \n ¡Quedó atrapado en sus sueños!\n ¡Que raro!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 4:
               	return 0;
                default:
                cout<<"Elige una opción correc"<<endl; 
                }
            break;
            case 4:
            return 0;
            default:
            cout<<"Elige una opción correc"<<endl;
            }
            
    break;
    case 4:
    cout<<"fue a la bahia y solo vio pasar un pescador que lo observó un rato \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Esperar a que regrese el pescador \n2.Seguir buscando en la bahia una pista \n3.Agarrar el bote que dejo el pescador\n4.Salir del programa" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            //menu 1.4
            switch(opcionesn)
            {
            case 1:
            cout<<"Esperó al pescador y este regresó y se le acerco, le dijo que por qué estaba ahí \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Contestarle y placticarle el asunto \n2.Contarle una historia falsa para ver que hace el pescador \n3.Ignorarlo y correr\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Le platicó y entendió su caso pero dijo que el no podia ayudarlo porque tenia que pescar pero le podia ofrecer comida y agua y decirte como irse \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Aceptar la comida y el agua  \n2.Rechazarlo e irse \n3.Robarle su dinero y escapar\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Aceptó la comida y el agua y cree estar listo para ir a la granja aunque sea un camino muy largo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Irse \n2.Esperar a reunir comida para el camino \n3.Preguntarle otra vez al pescador cuando podria llevarlo\n4.Salir del programa" << std::endl;
     					  		  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se fue y llegó a la granja sin problemas ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Reunió mas comida, llegó sin problemas a la granja y hasta le sobró comida para sus amigos, ¡Sí logró llegar a la granja!\n¡Qué buena suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"El pescador se estresó y ya no lo llevó y quedó sin energia \n ¡No logró llegar!\n ¡Sé más paciente!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Lo rechazó y se fue, no logró encotrar mas comida \n Quedó con "<< barras<<" barras \n Elige su proxima acción \n1.Regresar con el pescador \n2.Seguir buscando por los alrededores \n3.Ir rodeando el mar para encontrar la granja\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Regresó con el pescador y este lo rechazó, ¡No lo logró!\n ¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"No encontró nada y se rompió la pata en una caida, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Rodeó el mar y estaba luego luego la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
            			cout<<"Robó el dinero y le alcanza para el taxi, solo debe seguir caminando \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguir caminando hacia la carretera \n2.Arrepentirse y regresarle su dinero al pescador \n3.Buscar comida en el camino\n4.Salir del programa" << std::endl;
                					cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Llegó a la carretera y paró un taxi que lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Le devolvió el dinero al pescador y este solo tomó el dinero y se fue, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Por estar buscando la comida cayó en una zanja y, \n ¡No logró llegar!\n ¡Qué malo!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Le contó y el pescador lo dudo un poco pero le ofreció alimento y decirle el camino \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Aceptar la ayuda del pescador \n2.Decirle que sí pero planear robarle \n3.Rechazarlo e irse\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Aceptó la ayuda del pescador y le dió la comida solo tiene que esperar a que le digan el camino \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.No esperar más y preguntarle al pescador \n2.Ser paciente \n3.Pedirle más agua para el camino\n4.Salir del programa" << std::endl;
                					  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"El pescador por decirle rapido las instrucciones se las dijo mal y Pascal se perdió, ¡No lo logró!\n ¡Sé mas paciente!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Fue paciente y el pescador le trazo un mapa que seguir y llegó a la granja sin problemas , ¡Sí logró llegar a la granja!\n¡Qué buena suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le dió mas agua el pescador y Pascal llegó biem hidratado a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"El dia del robo te descubrió \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Simular y arreglarlo \n2.Aceptarlo y escaparse \n3.Terminar de robarle y huir" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Simuló y arreglo la escena, tomó el dinero y se fue a la granja ¡Lo logró!\n ¡Robando, pero llegó!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Lo alcanzó antes de subirse al taxi y le quitó el dinero y lo vendió a un carnicero \n ¡No logró llegar!\n ¡Cada acto tiene su consecuencia!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Lo rechazó y se fue, se perdió pero encontró agua \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Volver con el pescador \n2.Empezar a caminar lo que cree que es el camino a la granja \n3.Rendirse\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"El pescador lo ignoró y Pascal se fue y perdió en un bosque, ¡No lo logró!\n ¡Qué mal plan!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Camino y sí le atinó, era el camino hacia la granja , ¡Lo logró llegar a la granja!\n¡Qué buena suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Se rindió y hasta ahí llegó \n ¡No logró llegar!\n ¡Se mas perseverante!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Corriste pero te alcanzó y quiere que le digas que hacias en su zona \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Decirle que esta perdido y quiere volver a su granja \n2.Pedirle comida y agua \n3.Deirle que no tiene hogar\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Le pregunta cual es su granja y le responde, el le dice que puede darle unas monedas para irse si le ayuda a pescar \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ayudarle a pescar \n2.Pescar pero escapar con los peces \n3.Rechazarlo y pedirle nadamas el camino\n4.Salir del programa"<<endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Le ayudó al pescador y este se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se escapó, pero se quedo sin barras y los peces no sirvieron de mucho, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le dijo el camino pero a falta de energia, Pascal fue derribado por una enorme roca de la que no pudo escapar \n ¡No logró llegar!\n ¡Muy mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Le dijó que sí, y que te te tienes que ir lo mas pronto \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Tomar la comida y agua e irse \n2.Tomarlo como insulto y no aceptar nada \n3.Pedirle mas comida para sus amigos\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se fue con la comida y agua y llevó a la granja donde les dió las sobras a sus amigos ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se fue pero por culpa de su orgullo se quedó sin energia ¡No logró llegar \n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le dió un poco mas de comida y se fue a darsela a sus amigos \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Le dice que el esta muy solo y que podrias ser su acompañante \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Aceptar ser su acompañante \n2.Decirle que puede visitarlo muy seguido si le ayuda \n3.Rechazarlo\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se quedó con el y ahora hacen un rgan equipo ¡Encontró un nuevo hogar!\n ¡Que feliz!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"El pescador acepta y lo aydua a llegar a la granja, ¡Sí logró llegar a la granja!\n¡Qué buena onda!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Lo rechaza y el pescador no le ayuda, Pascal ve que hay lluvia acida y no encuentra donde esconderse \n ¡No logró llegar!\n ¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opción correcta"<<endl; 
                }
            break;
            case 2:
            cout<<"Encontró unas monedas del pescador en un baul \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Tomar las monedas e irse \n2.Dejarlas ahí y esperar mas tiempo \n3.Esconderse enfrente del baul" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Tomó las monedas y le alcanza para comprar comida y agua para sus amigos o pagar el taxi a la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Pagar el taxi a la granja \n2.Ir caminando para poder comprarles alimentos a tus amigos \n3.Ahorrar el dinero\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Elige pagar el taxi pero se da cuenta que se le cayó una parte del dinero \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Va caminando pero ve que le hace falta alimento a él \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Ya le falta poco para lograr juntar para los dos \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta\n4.Salir del programa" << std::endl;
                        		  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Las dejó ahí y el pescador fue y echo más monedas \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Tomarlo y huir \n2.En cuanto lo vuelva a ver decirle lo mal de su escondite \n3.Esperar a que se junte más\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Lo toma y se va pero lo ve a lo lejos y lo alcanza en su moto vieja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Le explica que es para regresar con sus amigos \n2.No dice nada y lo ataca para poder escapar otra vez \n3.Devolverle el dinero y pedirle perdón\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"El pescador le dice que se suba a la moto y lo lleva a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Lo atacó pero no sirvio de nada, este lo capturo , ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le devolvió el dinero y este lo perdonó pero no lo llevo a la granja \n ¡No logró llegar!\n ¡Pero es de sabios arrepentirse!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Le dice el pescador que qué hacia ahí \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Le dice que estaba planeando robarle pero que decidió no hacerlo \n2.Decirle que lo iban siguiendo y que por eso te escondiste ahí \n3.Contarle la verdad\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"El pescador lo corrió de su casa y Pascal termino sin nada, ¡No lo logró!\n ¡Intenta más para la otra!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Resultó el plan y por lastima lo llevó a la granja, ¡Sí logró llegar a la granja!\n¡Qué buena suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"El pescador al principio se enojó por las mentiras que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"No ha ido a ponerle más \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Esperar más tiempo \n2.Tomar lo que hay hasta el momento e irse \n3.Ir a otro lado de la casa a buscar comida o agua" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Esperó demasiado y nunca llegó a nada, ¡No lo logró!\n ¡Intenta más para la otra!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se fue con lo que habia y se bajó antes del taxi pero camino y llegó, ¡Sí logró llegar a la granja!\n¡Qué buena suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Se acabó su energia tratando de encontrar más energia \n ¡No logró llegar!\n ¡Sera para la proxima!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Se escondió pero se le veia la cola y el pescador lo descubrió  "<< barras<< " barras \n Elige su proxima acción \n1.Voltear y morderlo para agarrar su moto e irse \n2.Hacerse el muerto \n3.Decirle la situación que esta pasando\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Gana tiempo mordiendolo pero la moto no arranca \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Irse a pata \n2.Seguir intentando hasta que arranque \n3.Dejarse atrapar\n4.Salir del programa" << std::endl;
                					cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Lo mordió y tomo su moto, arranco hasta la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"No arrancó la moto nunca, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Se dejó atrapar y de castigo se quedó como acompañante del pescador \n ¡Logró un nuevo compañente!\n ¡Que no sea un castigo!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Se hace el muerto y funciona, lo pone sobre su sillón para pensar que hacer con el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Esperar a que se vaya para tomar todo lo que pueda e irse \n2.Seguir haciendose el muerto \n3.Cuando lo termine de acomodar atacarlo y correr\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se fue el pescador y no logró conseguir muchas cosas pero apenas y pudo llegar, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se siguió haciendo el muerto pero el pescador le hizo una prueba y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Lo atacó pero no llegó mu lejos, el pescador lo secuestro \n ¡No logró llegar!\n ¡Qué mal plan!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Le dijo la situación y lo entiendo, le ofreció llevarlo en su moto pero diciendole que tardaria y el tendria que bsucar su comida \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Aceptar el trato \n2.Rechazarlo y robarle su comida \n3.Robarle su moto y ver si tiene gasolina\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Acepto el trato y consiguió su propia comida ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Lo rechazó y robó su comida con la que pudo llegar a la granja ¡Sí logró llegar a la granja!\n¡Qué buena suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le robó su moto y si le alcanzó para llegar a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 4: return 0;
                default:
                cout<<"Elige una opción correcta"<<endl; 
                }
            break;
            case 3:
            cout<<"Agarró el bote y vió que si servia \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el bote al otro lado del mar \n2.Quedarse en el bote esperando \n3.Bajarse y esperar al siguiente dia para irse en el\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Llegó al otro lado y vió muy cerca la granja, solo tiene que cruzar un rio \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguir con el plan \n2.Parar el barco para buscar comida \n3.Continuar a pie para explorar cruzando el rio con el puente de un tronco de un arbol\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Cruzó el rio, pero lo vio el pescador que fue con el dueño de la granja  \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Desviarse \n2.Continuar con dirección a la granja \n3.Intentar llamar a sus amigos por señas para que le ayuden\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se desvió y esperó a que se fuera, cuando vió que se fue regreso a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Continuó hacia la granja y ¡Sí llegó!\n¡Qué buena onda!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Los amigos le ayudaron y desviaron la atención del pescador para que pudiera llegar Pascal \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Paró el barco pero se lo llevo la marea \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Buscar la comida \n2.Intentar recuperar el bote jalando la cuerda que tiene atada \n3.Ver si con la energia que tiene le alcanza para llegar a la granja\n4.Salir del programa" << std::endl;
                					cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Buscó la comida y la encontró, le dió suficiente energia para llegar a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"La jaló con todas sus fuerzas pero se termino cayendo al mar, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Apenitas y le alcanzó la energia para llegar \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Va cruzando el puente pero se cae \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Nada con todas sus fuerzas a la orilla \n2.Dejarse llevar por la corriente \n3.Sostenerse del tronco e intentar subir\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Nado hasta la orilla pero lamentablemente no pudo avanzar más, ¡No lo logró!\n ¡Pobrecito!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se dejó llevar por la corriente y le ayudó mucho solo tuvo que caminar unos metros a la granja, ¡Lo logró llegar a la granja!\n¡Por fin se reunió con sus amigos!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Por mas que intentó subir no pudo y se dejó caer al rio \n ¡No logró llegar!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Esperó mucho y vio que venia el pescador \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Esperar a que llegue al bote el pescador \n2.Empezar a mover el bote al instante \n3.Bajarse y correr\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Habló con el pescador y este se subió y lo acercó a la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Pedirle que lo lleve hasta donde se pueda a la granja \n2.Preguntarle si no tiene un poco de comida \n3.Bajarse y agradecerle\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se lo pidió y el granjero accedió, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Le preguntó si no tenia comida y el pescador le dijo que no, asi que se quedó sin energia, ¡No logró llegar a la granja!\n¡Faltó muy poco!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Se bajó y el pescador lo acompaño hsta la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Lo movió y el pescador corrió y empezo a jalar de la cuerda, al final gano Pascal y se llevó el bote \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Detener el bote y devolverselo al pescador \n2.Continuar hasta llegar a la orilla de la granja \n3.Parar a buscar comida\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Detuvó el bote y al devolverselo al pescador, este lo llevó a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Continuó y en la orilla corrió hacia la granja y, ¡Sí logró llegar a la granja!\n¡Que feliz estaba con sus amigos!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"No encontró más comida y se quedó varado en el camino \n ¡No logró llegar!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Se bajó y corrio pero se alento por falta de energia \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Parar y esperar al pescador que lo seguia \n2.Aventarse al mar \n3.Comer algo que se encontró en el suelo y seguir corriendo hsta perderlo\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Lo esperó y el pescador no tuvo piedad, ¡No lo logró!\n ¡Eso debió doler!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se avento al mar y la corriente lo empujo hasta la orlla de la granja ¡Sí llegó!\n¡Se reunió con sus amigos!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Lo que comió del suelo solo le dió energia para perder al pescador pero no para llegar a la granja \n ¡No lró llegar!\n ¡Que mala suerte!Quedó con"<<barras<<"barras"<<std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Esperó al siguiente dia y el pescador se habia llevado el bote \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguir esperando \n2.En lo que no esta el pescador, saquear su alacena \n3.Irse en su moto hasta el momento en el que tenga que cruzar el rio\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Espero y apareció el bote otra vez pero no tiene la suficiente energia para manejarlo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir a la casa a buscar comida \n2.Buscar la comida en la cabaña \n3.Tomar agua e intentar lograrlo con eso\n4.Salir del programa" << std::endl;
                					  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Fue a la casa y si encontró comida, la comió e inmediatamente se fue al bote, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"En la cabaña solo habian herramientas de trabajo y de tanto buscar, gastó su energia, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Tomó suficiente agua como para llegar a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Recolectó mucha comida \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Caminar hacia la granja, guiandose a través del cartel \n2.Irse en el bote \n3.Quedarse a vivir con el pescador\n4.Salir del programa" << std::endl;
                						 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se guió a través del cartel pero era otra granja, ¡No lo logró!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se fue en el bote, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le ofreció su compañia y el pescador la acepto \n ¡Encontró un nuevo hogar!\n ¡Que vivan felices!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Llegó al cruce del rio pero no hay con que cruzarlo \n Quedó con "<< barras<<" barras \n Elige su proxima acción \n1.Intentar cruzarlo nadando \n2.Buscar una tabla con la que pueda cruzarlo \n3.Buscar otro camino mas lejano\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Nado y nado, y con sus ultimos suspiros, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Buscó la tabla pero no la encontró y se agotó su energia, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Encontró el camino pero no llegó, se quedo a metros \n ¡No logró llegar!\n ¡Energia agotada!\n Quedó con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opción correcta"<<endl; 
                }
            break;
            case 4:
            	return 0;
            default:
            cout<<"Elige una opción correcta"<<endl;
            
            }
    break;
    case 5:
    return 0;
    break;
    default:
    cout<<"Elige una opción correcta"<<endl;
    }
        
    
    
  
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    
}
    return 0;

}