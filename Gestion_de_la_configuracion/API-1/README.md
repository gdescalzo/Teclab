# Gestion de la configuracion

## Actividad 1

### Objetivos

> Nos proponemos que mediante esta actividad los alumnos logren relacionar los conceptos vistos durante la cursada, bajo una actividad practica integradora en la que puedan aplicar los conceptos a la luz de un contexto organizacional

<hr />

### Situacion

#### Empresa de Catering S.A.

> Trabajas para la consultra "Teclab Servicios Informaticos" y la empresa Cartering S.A. te convoca para mejorar sus procesos productivos.
En este sentido, las priordades de Catering S.A. Son centrarse primoridalmente en las actividades que agreguen valor a sus clientes y elimienen todas aquellas actividades que generen gastos innecesarios para la organizacion o que encarezcan el costo de sus servicios.

> Asimismo, la empresa ha identificado que, dados los reclamos por demoras en la entrega del producto final, han reducido en calidad, por lo que tambien solicitan que presentes una propuesta de servicios que los ayude a mejorar la performance de sus actividades y la calidad de los productos que desarrollan.

> Catering S.A. ofrece sus servicios de catering a un aplio abanico de clientes que incluye:

- Servicios de comedor de grandes empresas.
- Servicios de catering para colegios
- Servicios de catering para eventos (congresos, actos insitucionales, etc.).
- Servicios de restauracion para hoteles.

> La logistica del servicio es compleja, los niveles de servicio son muy exigentes en lo que respecta a la calidad y los plazos de entrega. Para mejorar sus estandares de servicios, Catering S.A. ha implementado un sofisticado sistema informatico que le permite gestionar de una manera mas agil y eficiente sus relaciones con los clientes, asi como sus procesos de produccion y distribucion

> La direccion de Catering S.A. tras un profundo analisis de la situacion, ha decidido mejorar el proceso como la base de todos sus servicios.

> La empresa tiene como objetivo estategico posicionarse entre las 10 empresas de Argentina, po lo que es fundamental mantener aspectos difgerenciadores de su competencia, en innovacion en metodologias y tecnologia, para ofrecer un servicio de alta calidad.
Con toda esta informacion estas listo para avanzar. El trabajo consiste en desarrollo de 4 entregables, que iran desarrollando a mediada vayan avanzado en los modulos y cuyo objetivo es mejorar la atension de nuestro cliente. La propuesta es para presentar a la Gerencia de Desarrollo de Teclab, quienes luego deberan aprobarlo y trabajarlo con el cliente. Etre las decisiones adoptadas tenemos que nuestra empresa ya cuenta con un proceso definido, con lo cual debemos trabajar en las propuestas para la entregas solicitadas.
> A lo largo de cada modulo de la materia enviar cada uno de los entregables solicitado, para cada instancia.

> Como primera etapa para lograr el objetivo de la propuesta debemos identificar en la organizacion sus planes de documentacion, actividades / roles, etc. Ademoas, debemos conocer el proceso con el que ya cuenta la organizacion, que es el siguiente:

##### Service Desk (Procesos esencial)

- Registrar y monitorear incidentes
  - Aplicando soluciones temporales a errores conocidos en colaboracion con la Gestion de Problemas.
  - Colaborar con la Gestion de Configuraciones para asegurar la actualizacion de las bases de datos correspondientes.
  - Gestionando cambios solicitados por los clientes mediante peticiones de servicio en colaboracion con la Gestion de Cambios y Versiones.

> Pero tambien debe juar un papel importante dando soporte al negocio <b>identificando nuevas oportunidades</b> en sus contactos con usuarios y clientes.
Como paso imprescindible para la implantacion de la metodologia ITIL en la empresa la direccion de "Catering S.A." ha decidido implantar un Service Desk que centralice todos los contactos, con clientes, proveedores y la organizacion TI.

> Para ello se han adoptado las siguientes decisiones y nombrado la estrucutra que compone el area:

- Se nombro un gestor responsable del Service Desk.
- Se definio, tas un cuidadoso analisis de las necesidades de la organizacvion y los usuarios, las funciones principales del mismo , donde se han definido los siguientes criterios:
  1. Gestionar la primera linea de soporte de la Gestion de Incidentes.
  2. Supervisar la calidad del servicio ofrecido respoecto a los SLAs.
  3. Ofrecer informacion de caracter comercial sobre los servicios ofrecidos.
  4. Realizar encuestas periodicas sobre el grado de satisfaccion del cliente.
  5. Elaborar informaes periodicos con la informacion recopilada.
  6. Realizar una pequeña promocion para presentar los nuevos servicios a los clientes existentes y potenciales.

##### Proceso o Formulario de Carga del inicidente

> Habilitar un espacio web para canalizar, en la medida de lo posible, la interaccion con los usuarios a traves de este medio:

- Formularios de consultas y alta de incidentes
- Consulta remota, mediante los web services asociados, del estado de los incidentes activos, historicos de incidencias y cumplimiento de los SLAs.
- FAQs actualizadas que permitan a los usuarios consultar directamente sobre los servicios prestados, errores conocidos, etc.
- Desarrollar un "Manual de Atension al Cliente" en donde se detalle los diferentes protocolos de interaccion con los usuarios dependiendo de la situacion en cuestion.
- Elegir una herramienta de softwar que ayude a registrar y gestionar todo el flujo de informacion del Service Desk.

##### Gestion de Incidentes

**Proceso**

> El Service Desk de "Catewring S.A." ha recibido una llamada del encargado de suministros del comedor de uno de sus clientes.

> El encargado del cliente informa de que a pesar de haber solicitado una nueva partida de helados hace unos dias a traves de la web esta aun no se ha recibido y apenas quedan reservas en sus frigorificos.

> El operador del Service Desk busca en la base de datos de los pedidos y confirma que se realizo el pedido hace varios dias, pero tambien observa que este se ha guardado defectuosamente.

> El operador intenta desde su puesto repetir la orden, pero el sistema sigue fallando.

> El opredador toma, basandose en los protocolos establecidos, las siguientes decisiones:

- Evalua la prioridad: aunque el impacto es bajo, el incidente es urgente pues el cliente necesita rapidamente el suministro.
- Registra los datos del incidente.
- Consulta la Base de Conocimiento para investigar si el incidente es consecuencia de un error conocido y cuales son las posibles soluciones temporales.
- Propone una solucion temporal al cliente: indica una zona reservada de la web desde la que se pueden realizar pedidos "urgentes" via email.
- Contacta con el departamento de sistemas previendo que el incidente pueda repetirse a lo largo de la mañana.
- Consulta, mediante la aplicacion que monitorizalas existencia de almacen, la disponibilidad de los helados solicitados.
- Tranquiliza al cliente asegurandole que mediante su servicio expres recibira los helados solicitados antes del mediiodia.

> Por otro lado, el departamento de sistemas:

- Realiza una serie de pruebas y comprueba que, de manera general, el sistema funciona correctamente.
- No consigue indentificar la causa del incidente.
- Contacta con el Service Desk y propone que se eleve el problema a la Gestion de Problemas per pre-calificado su priodad como baja.

> El service Desk receibe la informacion y determina que:

- Dado el bajo impacto del incidente y el hecho de que se haya proporcionado al cliente una solucion temporal satisfactoria no se require un escalado superior.
- Registra la solucion temporal del incidente junto a la informacion proporcionada por el departamento de sistemas.
- Da por cerrado el incidente.

### Consigna

1. Entendiendo el proceso y los roles de la organizacion, deberas analizar la informacion dada y completar el documento "Gestion de configuracion". La informacion a desarrollar alli debe referir al cambio y modificacion a realizar en la empresa. Deberas indicar:
   - Obetivos y alcances del plan
   - Roles de la gestion de la configuracion
   - Plan de documentacion
   - Items de la configuracion.
2. Ademas, deberas proponer nuevos roles, areas y funciones que consideres que pueden mejorar el proceso, teniendo en cuenta los costos, el tamaño de la empresa y proyeccion del negocio, para determinar si se pueden asumir desde la misma empresa o se deben terceriar. Por ejemplo: area de QA, alaista funciona, etc. Justifica tu eleccion en cada caso.
3. Descarga el documento "Gestion de la Configuracion" que deberas entregar.