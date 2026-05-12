# Repositorios, GitHub y Git

## ¿Qué es un repositorio?
Un repositorio es un espacio donde se almacena de forma organizada los archivos y el historial de cambios de un proyecto.  
Permite llevar control de versiones (de ahí que se refieran a git como una herramienta de **versionamiento**), colaborar con otros desarrolladores y mantener un registro ordenado de la evolución del código o documentos.

## ¿Qué es GitHub?
GitHub es una plataforma en línea que permite alojar repositorios y facilitar la colaboración en proyectos de software.  
Proporciona herramientas para gestionar versiones, crear `branches` (ramas), revisar código y trabajar en equipo de manera remota y eficiente.

## ¿Qué es Git?
Git es un sistema de control de versiones distribuido que permite administrar los cambios realizados en los archivos de un proyecto. Se puede manejar a través de un `CLI` (Command Line Interface) ó a gravés de `GUI` (Graphical User Interfaces).

Su objetivo principal es registrar el historial, facilitar el trabajo colaborativo y permitir volver a estados anteriores cuando sea necesario.

---

# Instalación de un repositorio

## Pre-requisitos
- Tener una cuenta activa de GitHub.  
- Estar invitado a un repositorio.  
- Tener instalado Git localmente.  

---

# Pasos para clonar un repositorio

1. **Crear una carpeta nueva para instalar el proyecto del repositorio.**

   **¡Importante!:** La creación de carpetas debe cumplir con las siguientes características:
   - No debe contener caracteres especiales (no acentos, no símbolos especiales, etc).  
   - No debe contener espacios.  

2. **Abrir una terminal dentro de la carpeta.**

   ### Pasos para abrir una terminal en la carpeta deseada:

   - **Windows**
     1. Estando en la carpeta seleccionada, ubicar la `barra de direcciones` en la parte superior.  
     2. Copiar el `texto de la ruta` en la barra de direcciones (`Ctrl + C`).  
     3. Abrir una terminal (PowerShell o CMD).  
     4. Ingresar el siguiente comando:
        ```bash
        cd <ruta_copaida_de_la_barra_de_direcciones>
        ```  
     5. Presionar **Enter**.  

   - **Mac**
     1. Estando posicionado en la carpeta seleccionada, ubicar la barra de direcciones en la parte inferior. 
     2. Hacer **clic derecho** en el ícono de la carpeta dentro de la barra de direcciones.  
     3. En el menú desplegado, seleccionar la opción **"Open in Terminal"**.  

3. **Clonar el repositorio.**  
   En la terminal, ingresar:  

   ```bash
   git clone url_de_repositorio
   ```

**Nota 1:** La URL del repositorio que será clonado se encuentra en la página de GitHub bajo el botón verde que dice "Code". Esta página debe ser proporcionado por el propietario del repositorio.

**Nota 2:** En Windows, si se está usando la terminal de `CMD`, éste no permite hacer copy/paste a través de los shortcuts.

## Conceptos básicos de Git

Antes de comenzar a manipular un repositorio clonado, es importante conocer los siguientes conceptos:

---

### Repositorio **Remoto**

- Es el proyecto que se encuentra alojado en **GitHub**.  
- Se considera la **fuente de la verdad**, ya que contiene la versión oficial del proyecto.  
- Cada desarrollador debe clonarlo (`clone`) para tener una copia en su propia computadora.  
- El repositorio remoto se actualiza cada vez que un desarrollador sube (`push`) sus cambios.  

---

### Repositorio **Local**

- Es una copia del repositorio remoto almacenada en la computadora de cada desarrollador.  
- Permite trabajar sin conexión y realizar cambios antes de sincronizarlos con el remoto.  
- Cada repositorio local puede enviar (`push`) cambios o descargar (`pull`) actualizaciones del repositorio remoto.  

---

### Branches (Parte 1)

- Son líneas de trabajo independientes dentro del repositorio.  
- Se utilizan para desarrollar nuevos features o fixes sin afectar el branch principal.  
- El branch principal suele llamarse `main` o `master`.  
- Permiten fusionar (`merge`) los cambios en un punto posterior para integrarlos al proyecto oficial.

---

### Branches (Parte 2)

- **Branch Local**
  - Es una rama creada y almacenada en la computadora del desarrollador.  
  - Permite trabajar de manera aislada en nuevos features o fixes.  
  - Se pueden crear múltiples branches locales según las necesidades del proyecto.  
  - Para compartir el trabajo con el resto del equipo, es necesario enviar (`push`) el branch local al repositorio remoto.  

- **Branch Remoto**
  - Es una rama que ya existe en el repositorio remoto.  
  - Representa el estado compartido de una rama accesible para todo el equipo.  
  - Se puede descargar (`pull`) para mantener la copia local actualizada.  
  - Permite colaborar en equipo al trabajar varias personas sobre el mismo branch.  

---

### Conflictos

- Un **conflicto** ocurre cuando Git no puede decidir automáticamente qué cambios conservar al fusionar branches.  
- Generalmente sucede cuando dos desarrolladores modifican las mismas líneas de un archivo en diferentes branches.
- Git marca el archivo en conflicto para que el desarrollador resuelva manualmente qué cambios conservar.
- Resolver un conflicto implica editar el archivo, probar que el código funcione correctamente y confirmar el cambio con un nuevo commit.
- Aunque pueden parecer un problema, los conflictos son una parte normal del trabajo colaborativo con Git.

## ¿Cómo funciona Git?

Cuando un repositorio ya ha sido clonado, éste queda **activado automáticamente** para reconocer cualquier cambio que se realice dentro de la copia local; es decir, dentro de las carpetas y archivos que conforman el repositorio.

De esta manera:

- Cuando un archivo es modificado, Git identifica **qué archivo sufrió cambios** y **cuáles son las diferencias** respecto a la versión remota.  
- Git también detecta la creación o eliminación de archivos dentro del repositorio.  

---

### Flujo de trabajo en Git

1. Clonar el repositorio para obtener una copia local.  
2. Posicionarse en el branch principal (`main` o `master`) antes de comenzar a trabajar en una nueva tarea.  
3. Actualizar el branch principal con el comando `git pull`
4. Crear un nuevo branch basado en el branch principal para desarrollar un feature o fix.
5. Modificar los archivos dentro del nuevo branch. Git reconocerá los cambios y permitirá visualizar las diferencias realizadas.

**Nota:** Si un archivo es creado por primera vez, Git únicamente identifica que es un nuevo archivo, pero no puede mostrar qué es lo “nuevo” porque no existe una versión previa para comparar.

## Siguientes pasos

El repositorio ya debe estar listo para poder utilizarse. Las instrucciones para poder actualizar o descargar material del repositorio se proveerá en un archivo a parte.