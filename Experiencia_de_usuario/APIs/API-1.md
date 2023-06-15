# Actividad 1

## Situacion

> Fuiste contratado por el equipo de Alternativa Teatral para solucionar los problemas de la pagina web. Se te pide que crees el MVP navegable de su web.

## Requerimientos

> Para poder llevar adelante esta actividad, te recomiendo que visites el sitio web de Alternativa Teatral haciendo clic [aca](http://www.alternativateatral.com/).

## Consignas

1. Investigar y describir los objetivos del negocio identificando cual es el problema desde el punto de vista de usabilidad.
   Como no tendrias contacto con los stakeholders en este caso, los objetivos del negocio pueden ser en funcion de la invesigacion e hipoteticos.

2. Elegir una o mas metodologias a utilizar, de las planteadas en el modulo, segun creas conveniente, jusficando tu eleccion.

**Formato de entrega**: _Deberas presentar las consignas en un archivo de texto._


# Desarrollo


## Objetivos de negocio

> Los objetivos de negocio identificados en la mencionada web son:

1. Centralizar en la web varias ofertas teatrales de diferentes establecimientos, ya que a simple vista al recorrer la web pueden identificarse mas de un establecimiento teatral publicando en el mismo, por nombrar alguno de ellos: "Teatro Ciego", "Museo Larreta", "Multiescena CPM". Por tanto se entiende que dicha web no solo provee servicios a usuarios finales. (_las personas que estaran asistiendo a la obra teatral_).

2. Proveer servicios a los establecimientos teatrales los cuales publican y facturan mediante esta pagina.

En resumen el objetivo de negocio es:  que los usuario finales que asistiran a un evento podran comprar entradas y los establecimientos podran venderlas, Entendiendo (hipoteticamente) que el sitio (www.alternativateatral.com) obtendria algun redito de estas operaciones.

## Problemas de usabilidad

> A continuacion se detallaran los problemas de usabilidad aplicando el metodo de "Empatia" correspodiente a la metodologia "Design Thinking" si bien no puedo consultarle a los usuarios finales debido a que es un ejercicio practico y no la realidad, si puedo empatizar con el resto de las personas poniendome en el lugar de un posible consumidor, con el fin de validar si los objetivos de negocio cuentan con puntos de fuga en el flujo de procesos.

0. Presentacion de la pagina: no son las obras de teatros que ofrece sino que menciona otra sala que se va a abrir, esto es un problema para el usuario final ya que lo primero que ve es algo que dice proximamente y no brinda informacion de la oferta, es un lugar central desaprobechado. Si en tal caso se quisiera informar que proximamente habra algo, podria crearse un banner que al momento de ingresar a la pagina se despliegue informando esto mismo.

1. Descripcion de la obra: al ingresar desde la "Home page" a la descripcion de una obra en particular (presionando sobre el titulo, lo cual no es muy intuitivo, podria agregarse un boton que diga "ver mas") nos abre en una nueva ventana (lo cual es engorroso para el usuario ya que ocupa mas de una ventana para la misma pagina y no permite volver atras, entre otros inconveninetes que puede generar, por ejemplo si lo vemos desde un celuar abrira un nuevo tab el cual tendremos que cerrar para ir al home nuevamente, desde un Desktop o Laptop es mas visible para un usuario los tabs del navegador, pero desde un smartphone es mas complicado identificar en que tab esta cada pagina) esto puede ser facilmente solucionable cambiando el condigo para que el link tenga la propiedad de apertura "_self".

2. Formulario de compra: aqui interviene un punto importante, la seguridad. El formulario de compra no cuenta con un validador captcha con lo cual estaria teniendo una brecha de seguridad al momento de completar los datos de pago ya que, al dispensar de un captcha no permite a diferentes robots (automatizaciones, scripts) y personas.
Otro problema es que no esta presente el boton volver al home (ya que abre la pagina del formulario de compra en una nueva ventana).

3. Acceso a usuarios: El icono del cuadrante superior derecho (acceso a usuarios), no esta identificado en el header de la pagina, normalmente otros sitios tienen leyendas alado del pictograma tales como "Iniciar session" , "Login", entre otros, tal vez para cierto rango de edades sea intuitivo, pero para rango de edades avanzadas tal vez no lo sea tanto. Esto seria un problema ya que la pagina al no ser especifica en su comunicacion limitaria el publico a un rango de edad al no ser especifica y dificil de navergar.

4. Menu: Algo similar a lo mencionado en el punto 3, ocurre con el menu, ayudaria a la navegacion del sitio que alado del pictograma haya una leyenda que diga "menu".

5. Sitio No seguro: alado de la URL puede verse en la mayoria de los navegadores si el sitio es seguro o no, este sitio en particular no tiene un certificado de seguridad asociado al mismo por ende la direccion del sitio es http cuando deberia ser https para garantizar que las transacciones entre los usuarios del sitio esten encriptadas.

6. El tiempo de respuesta de la pagina al buscar algo es muy alto.

