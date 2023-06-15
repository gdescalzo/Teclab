# Actividad 1

## Situación

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

1. Centralizar en la web varias ofertas teatrales de diferentes establecimientos, ya que al recorrer la web se pueden identificar varios establecimientos teatrales que publican en ella. Algunos ejemplos de estos establecimientos son: "Teatro Ciego", "Museo Larreta" y "Multiescena CPM". Por lo tanto, se entiende que esta web no solo provee servicios a los usuarios finales (las personas que asistirán a las obras teatrales).

2. Proveer servicios a los establecimientos teatrales que publican y facturan a través de esta página.

> En resumen, el objetivo de negocio es que los usuarios finales que asistan a un evento puedan comprar entradas, y los establecimientos puedan venderlas. Se entiende que el sitio web (<www.alternativateatral.com>) obtendría algún beneficio económico de estas operaciones.

## Problemas de usabilidad

> A continuación se detallarán los problemas de usabilidad aplicando el método de "Empatía" correspondiente a la metodología "Design Thinking". Aunque no puedo consultar a los usuarios finales debido a que esto es un ejercicio práctico y no la realidad, puedo empatizar con el resto de las personas poniéndome en el lugar de un posible consumidor, con el fin de validar si los objetivos de negocio presentan puntos de fuga en el flujo de procesos.

1. Presentación de la página: en la página principal, se menciona una sala que se abrirá próximamente en lugar de mostrar las obras de teatro disponibles. Esto es un problema para el usuario final, ya que lo primero que ve es algo que indica "próximamente" y no brinda información sobre la oferta actual. Este espacio central no está aprovechado adecuadamente. En caso de que se desee informar sobre eventos futuros, se podría crear un banner que se despliegue al ingresar a la página, proporcionando esa información.

2. Descripción de la obra: al ingresar desde la página principal a la descripción de una obra en particular (al hacer clic en el título, lo cual no es muy intuitivo), esta se abre en una nueva ventana, lo cual resulta engorroso para el usuario, ya que implica tener más de una ventana abierta para la misma página y no permite volver atrás, entre otros inconvenientes que puede generar. Por ejemplo, si se accede desde un celular, se abrirá una nueva pestaña que luego habrá que cerrar para volver a la página principal. En dispositivos de escritorio o portátiles es más visible para el usuario identificar las pestañas del navegador, pero desde un smartphone es más complicado identificar en qué pestaña se encuentra cada página. Esto se puede solucionar fácilmente modificando el código para que el enlace tenga la propiedad de apertura "_self".

3. Formulario de compra: aquí se plantea un punto importante, la seguridad. El formulario de compra no cuenta con un validador CAPTCHA, lo que representa una brecha de seguridad al momento de completar los datos de pago. Al no disponer de un CAPTCHA, el formulario permite el acceso a robots, automatizaciones y scripts, así como a personas. Otro problema es que no se incluye un botón para volver a la página principal, ya que el formulario de compra se abre en una nueva ventana.

4. Acceso a usuarios: el icono en el cuadrante superior derecho (acceso a usuarios) no está identificado en el encabezado de la página. Normalmente, otros sitios tienen leyendas junto al pictograma, como "Iniciar sesión" o "Login", entre otros. Aunque pueda ser intuitivo para ciertos rangos de edad, puede no serlo tanto para personas mayores. Esto representa un problema, ya que la página, al no ser específica en su comunicación, limita el público a un rango de edad y dificulta la navegación.

5. Menú: algo similar ocurre con el menú, mencionado en el punto 3. Sería útil para la navegación del sitio que junto al pictograma hubiera una leyenda que dijera "menú".

6. Sitio no seguro: al lado de la URL, la mayoría de los navegadores muestran si el sitio es seguro o no. Este sitio en particular no tiene un certificado de seguridad asociado, por lo que la dirección del sitio es http en lugar de https. Esto implica que las transacciones entre los usuarios del sitio no están encriptadas y representa un riesgo para la seguridad.

7. El tiempo de respuesta de la página al buscar algo es muy alto.
