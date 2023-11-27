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
    cout<<"fue al pueblo en donde encontró gente tratando de atraparlo y otro niño que le prometio ayudarlo. \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
        //menu1.1
        switch(opcionesn)
        {       
        case 1:
        barras-=1;
        cout<<"Fue con el niño y este le dió alimento \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Seguir confiando en el niño \n2.Esperar el momento e irse \n3.Tomar mas comida con la posibilidad que se enoje" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            switch(opcionesn)
            {
            barras-=2;
            case 1:
            cout<<"El niño te explico que el plan que era escapar un dia de su casa y empezar el viaje a tu granja. \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Aceptar el trato \n2.Decirle que no y que lo harás solo \n3.Robar su comida e irte" << std::endl;
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
                cout<<"Recargaste energia y te fuiste, encontraste a lo lejos la granja \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Ir corriendo sin detenerse a la granja \n2.Ir pero haciendo una parada a ver que puede encontrar \n3.Esperar a reunir mas energia para irse" << std::endl;
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
            cout<<"Te fuiste y te perdiste, solo recuerdas el camino de regreso al niño \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Regresar con el niño \n2.Seguir caminando hasta encontrar algo \n3.Buscar en la basura algo de comida" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.12
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Regresaste con el niño pero te dijo que solo te podia decir el camino ya que no podia acompañarte \n Quedó con "<< (barras)-float(2); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
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
                    cout<<"Encontró un señor de un sombrero en una esquina que le ofreció ayuda \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Seguirlo \n2.Ignorarlo \n3.Morderlo" << std::endl;
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
                    cout<<"Encontraste comida pero parece un poco pasada \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Guardarla en su bolsa y usarla solo en caso de ser necesaria en el camino \n2.Comerla e irse\n3.Tirarla otra vez e ir a la granja" <<endl;
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
            cout<<"El niño se enojó y te regaño porque sus papas cuentan la comida y se pueden dar cuenta \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Aceptar el regaño del niño \n2.Enojarte o sentirte mal e irte \n3.Pedirle disculpas al niño y decirle que te vas a ir" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu1.13
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                        cout<<"Le dijó que no, y el niño le dijo que en verdad queria ayudarlo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3: opcionesn == 3; 
                        cout<<"Recargaste energia y te fuiste, encontraste a lo lejos la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
            break;
            default: 
            cout<<"Elige una opción correcta"<<endl;
            }
        
            
        break;
        case 2:
        cout<<"Siguió buscando y encontró un mapa \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Revisar el mapa \n2.Guardar el mapa \n3.Comerse el mapa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.2
                switch(opcionesn)
                {
                case 1: 
                cout<<"Revisaste el mapa y si esta la granja dentro de el \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Seguir el mapa \n2.Guardarlo y seguir buscando algo que le pueda ayudar\n3.Buscar comida para llevarles a sus amigos de la granja" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Siguió el  mapa pero a mitad de camino le ofrecieron mucha comida a cambio de el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Cambaiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio" << std::endl;
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
                    case 2:
                    cout<<"Encontró un carrito prendido abandonado \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Subirse, extender el mapa e ir a la granja \n2.Apagarlo y esperar al dueño \n3.Ignorarlo e irse a la granja" << std::endl;
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
                    case 3:
                    cout<<"Solo encontró agua para sus amigos \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir solo con el agua \n2.Cambiar más de la mitad del agua por poca comida \n3.Tomar un poco de agua e irse corriendo a la granja" << std::endl;
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
                    case 4:
                    return 0;
                    default: cout<<"elige una opción correcta"<<endl;
                    }
                case 2:
                cout<<"Guardó el mapa y comió de un plato abandonado al lado de la basura \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Intentar vomitarlo \n2.Seguir buscando la granja \n3.Subirse a una camioneta sin que se den cuenta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Lo intentó vomitar pero solo salieron cachitos pero importantes \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Cambaiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio" << std::endl;
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
                    case 2:
                    cout<<"Seguiste buscando la granja y te habló un perro muy grande que te vió perdido \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Subirse, extender el mapa e ir a la granja \n2.Apagarlo y esperar al dueño \n3.Ignorarlo e irse a la granja" << std::endl;
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
                    case 3:
                    cout<<"Se subió a la camioneta y a lo lejos vió el anuncio de su granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir solo con el agua \n2.Cambiar más de la mitad del agua por poca comida \n3.Tomar un poco de agua e irse corriendo a la granja" << std::endl;
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
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opción correcta"<<endl;
                    }
                    
                break;
                case 3:
                cout<<"Se comió el mapa y ahora no sabe donde esta \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Siguió el  mapa pero a mitad de camino le ofrecieron mucha comida a cambio de el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Cambaiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio" << std::endl;
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
        cout<<"Entro a la casa abierta y se dió cuenta que era de un carnicero cuando vió los cuchillos y la carne \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Esconderse \n2.Tomar comida que hay en la mesa e irse \n3.Esperar al carnicero e intentar hablar con el" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.1.3
                switch(opcionesn)
                {
                case 1:
                cout<<"Se escondio y llegó el carnicero a dormir a su casa \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                    break;
                    case 2:
                
                    cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                    break;
                    case 3: 
                
                    cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                    break;
                    default:
                    cout<<"Elige una opción correcta"<<endl; 
                    }
                break;
                case 2:
                cout<<"Tomó un poco de comida y se fue sin dejar rastro \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                    break;
                    case 2:
                
                    cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                    break;
                    case 3: 
                
                    cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opción correcta"<<endl; 
                    }
                break;
                case 3:
                cout<<"El carnicero lo vió y luego luego fue por el \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                    break;
                    case 2:
                
                    cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                    break;
                    case 3: 
                
                    cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
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
        default:
        cout<<"Elige una opción correc"<<endl;
        }
        
    break;        
    case 2:
    cout<<"Esperó y paso un carro que lo subió a su maletero y lo llevó a otra granja \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Estar dispuesto a conocer la nueva granja \n2.Morder al que lo recogio en cuanto lo agarre \n3.Hacer desastres en la nueva granja" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            
            //menu 1.2
            switch(opcionesn)
            {   
            case 1: opcionesn ==1;
            cout<<"Conociste la nueva granja y es mejor que la otra en comodidad \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Seguir acoplandose a la granja \n2.Idear un plan para escapar \n3.Hablarle a los demas animales" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.2.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Le gustó mucho la nueva granja \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                    break;
                    case 2:
                    
                    cout<<"Ideó el plan para escapar pero mientras lo hacia se dio cuenta que aquí tenia mejor lugar \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Seguir con el plan \n2.Probar que mas tiene la granja \n3.Hablarle al nuevo cerdo que llevaron" << std::endl;
                    
                    break;
                    case 3:
                    
                    cout<<"Le habló a los animales y lo ignoraron \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Volver a intentarloeguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                    break;
                    default:
                    cout<<"Elige una opción correcta"<<endl; 
                    }
            case 2:
            cout<<"Mordió al que lo recogió y este le pegó pero Pascal alcanzó a escapar \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Seguir corriendo hasta encontrar algo \n2.Escapar y meterse a la granja de infiltrado \n3.Volver con el que lo recogió" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.2
                    switch(opcionesn)
                    {
                    case 1: 
                    cout<<"Corrió y encontró una chica que tenia intenciones de recogerlo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Dejarse recoger por la chica \n2.Morderla igual\n3.Huir de ella" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu1.1.1
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Lo recogió y le curo el golpe que habia tenido \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Dejarse de la chica y decirle lo que pasa\n2.En cuanto vea una puerta abierta intentar escapar \n3.Comer la comida que tenia en el suelo e intentar encontrar la granja" << std::endl;
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
                        cout<<"La mordió pero aun asi lo agarró y acarició \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ya dejarse \n2.Volverla morder \n3.Explciarle su situación" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu final
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
                        case 3:
                        cout<<"Huyó de ella pero su herida le doliá mucho \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Regresar y explicarse su caso \n2.Seguir caminando y buscar comida en los botes de basura \n3.SAASF" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu final
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
                        case 4:
                        return 0;
                        default: cout<<"elige una opción correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Se metió a la granja de infiltrado y vió muchos cerditos como el \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    
                    break;
                    case 3:
                    cout<<"Volvió con el que lo recogió y este lo levantó e hizo todo el papeleo para dejarlo ahí \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<< endl;
                    }
            break;
            case 3:
            cout<<"Entro a la casa abierta y se dio cuenta que era de un carnicero cuando vió los cuchillos y la carne \n Quedó con "<< (barras)-float(2); cout << " barras \n Elige su proxima acción \n1.Esconderse \n2.Tomar comida que hay en la mesa e irse \n3.Esperar al carnicero e intentar hablar con el" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.1.3
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"fue al pueblo en donde encontró gente tratando de atraparlo y otro niño que le prometio ayudarlo. \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                         //menu1.1.1
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                        break;
                        case 2: opcionesn == 2;
                    
                        cout<<"B \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                        break;
                        case 3: 
                    
                        cout<<"C \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl; 
                        }
                    case 2:
                    cout<<"B \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    
                    break;
                    
                    case 3:
                    cout<<"C \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    
                    break;
                    default:
                    cout<<"Elige una opción correcta"<<endl;
                    }
                  
            break;
            default:
            cout<<"Elige una opción correc"<<endl;
            }
                
                
    break;
    case 3: 
    cout<<"fue al pueblo abandonado en donde encontró una television prendida y en las noticias salio la granja afectada de donde el venia \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            //menu 1.3
            switch(opcionesn)
            {
            case 1:
            cout<<"fue al pueblo en donde encontró gente tratando de atraparlo y otro niño que le prometio ayudarlo. \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"A \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                break;
                case 2:
                
                cout<<"B \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                break;
                case 3: opcionesn == 3; 
                
                
                cout<<"C \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                break;
                default:
                cout<<"Elige una opción correc"<<endl; 
                }
            break;
            case 2:
            cout<<"B \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;

            break;
            case 3:
            
            cout<<"C \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;

            break;
            default:
            cout<<"Elige una opción correc"<<endl;
            }
            
    break;
    case 4:
    cout<<"fue a la bahia y solo vio pasar un pescador que lo observó un rato \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Esperar a que regrese el pescador \n2.Seguir buscando en la bahia una pista \n3.Agarrar el bote que dejo el pescador" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            //menu 1.4
            switch(opcionesn)
            {
            case 1:
            cout<<"fue al pueblo en donde encontró gente tratando de atraparlo y otro niño que le prometio ayudarlo. \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"A \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                break;
                case 2: opcionesn == 2;
                
                cout<<"B \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                break;
                case 3: 
                
                
                cout<<"C \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                break;
                default:
                cout<<"Elige una opción correcta"<<endl; 
                }
            
            case 2:
            
            cout<<"B \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;

            break;
            
            case 3:
            
            cout<<"C \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;

            break;
            default:
            cout<<"Elige una opción correc"<<endl;
            
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