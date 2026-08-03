/*
* ----------------------------------------------------------------
* PERSISTENCIA DE DATOS (DATA PERSISTENCE)
* ----------------------------------------------------------------
*
* La persistencia de datos es la capacidad de conservar información
* después de que termina la ejecución de una aplicación.
*
* Durante la ejecución de un programa, las variables almacenan datos
* en la memoria RAM. Por ejemplo:
*
*     int score = 100;
*     std::string userName = "Ana";
*
* Mientras la aplicación se encuentra en ejecución, puede consultar
* y modificar los valores de estas variables tantas veces sea necesario.
*
* La memoria RAM es una memoria temporal o volátil. Esto significa
* que los datos utilizados por una aplicación no permanecen ahí de
* manera definitiva. Cuando la aplicación termina, la memoria que le
* fue asignada se libera y los valores de sus variables dejan de estar
* disponibles.
*
* Si la aplicación vuelve a ejecutarse, sus variables se crean otra
* vez con los valores iniciales definidos por el programa. No recuerdan
* automáticamente los valores de la ejecución anterior.
*
* Representación conceptual:
*
*     Aplicación en ejecución  -> Datos disponibles en memoria RAM
*     Aplicación finalizada    -> Datos de las variables liberados
*
* Para conservar información entre diferentes ejecuciones se necesita
* almacenarla en un medio persistente.
*
* ----------------------------------------------------------------
* PERSISTENCIA MEDIANTE ARCHIVOS
* ----------------------------------------------------------------
*
* Una forma de persistir datos consiste en escribirlos dentro de un
* archivo. El archivo se almacena en un dispositivo como un disco duro
* o una unidad de estado sólido y puede continuar existiendo después
* de que termina la aplicación.
*
* En una ejecución posterior, el programa puede abrir el archivo y
* recuperar la información que había guardado.
*
* Representación conceptual:
*
*     Aplicación -> escribe datos -> archivo
*     Aplicación <-  lee datos   <- archivo
*
* Los archivos pueden utilizarse, por ejemplo, para almacenar:
*
*     - Configuraciones de una aplicación.
*     - Resultados generados por un programa.
*     - Información que deberá recuperarse posteriormente.
*     - Registros de eventos o errores.
*
* Un archivo de log es un archivo donde una aplicación registra los
* eventos que ocurren durante su ejecución. Estos registros permiten
* conocer qué operaciones se realizaron, identificar errores y analizar
* posteriormente el comportamiento del sistema.
*
* Ejemplo conceptual de un log:
*
*     [INFO] La aplicación inició.
*     [INFO] El usuario realizó una operación.
*     [ERROR] No fue posible abrir un archivo.
*
* La persistencia mediante archivos es útil y relativamente sencilla,
* pero administrar grandes cantidades de información únicamente con
* archivos puede volverse complicado.
*
* ----------------------------------------------------------------
* PERSISTENCIA MEDIANTE BASES DE DATOS
* ----------------------------------------------------------------
*
* Otra forma de persistencia consiste en utilizar una base de datos.
* Una base de datos permite almacenar, organizar, consultar y modificar
* información persistente de manera estructurada.
*
* Las bases de datos son utilizadas por aplicaciones que necesitan
* administrar información como usuarios, productos, ventas, materias,
* calificaciones u operaciones realizadas.
*
* Aunque una base de datos también conserva información en medios de
* almacenamiento persistente, proporciona mecanismos especializados
* para organizarla y consultarla.
*
*
*/
