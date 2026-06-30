/* Buenas prácticas

===================================================
Buenas Prácticas de Programación
===================================================

A medida que los programas crecen en tamaño y
complejidad, escribir código que simplemente
"funcione" ya no es suficiente.

El código también debe ser:

 - Fácil de leer.
 - Fácil de modificar.
 - Fácil de extender.
 - Fácil de mantener.

Para lograr esto, existen principios y guías
que ayudan a tomar mejores decisiones al diseñar
y organizar el código.

A continuación se describen los principios
que se aplican actualmente en el ejercicio
de la calculadora.



===================================================
SRP — Single Responsibility Principle
===================================================

Principio de Responsabilidad Única.

Establece que una clase debe tener una sola
razón para existir.

En otras palabras, cada clase debe encargarse
de una única responsabilidad dentro del programa.

Si una clase hace demasiadas cosas, se convierte
en un punto de cambio frecuente: cualquier
modificación en una de sus responsabilidades
puede afectar a las demás.

La forma de detectar una violación a este
principio es preguntarse:

 ¿Esta clase tiene más de una razón para
 ser modificada?

Si la respuesta es sí, conviene separar
esas responsabilidades en clases distintas.

Beneficios:

 - El código es más fácil de entender.
 - Los cambios quedan aislados en una sola clase.
 - Las clases son más fáciles de reutilizar.


===================================================
DRY — Don't Repeat Yourself
===================================================

No te repitas.

Establece que cada pieza de conocimiento o
lógica dentro de un sistema debe tener una
única representación.

Si la misma lógica o el mismo valor aparece
en múltiples lugares del código, existe el
riesgo de que al modificarlo en un lugar
se olvide hacerlo en los demás, generando
inconsistencias y errores difíciles de rastrear.

La solución es centralizar esa lógica o valor
en un único lugar y referenciarlo desde donde
sea necesario.

La forma de detectar una violación a este
principio es observar si estás copiando y
pegando bloques de código similares.

Beneficios:

 - Menos posibilidades de errores por inconsistencia.
 - Los cambios se realizan en un solo lugar.
 - El código es más corto y claro.


===================================================
KISS — Keep It Simple, Stupid
===================================================

Mantenlo simple.

Establece que las soluciones simples son
preferibles a las soluciones complejas.

Un diseño innecesariamente complejo es más
difícil de entender, más difícil de mantener
y más propenso a errores.

La complejidad debe añadirse únicamente cuando
existe una razón concreta y justificada para ello.

La forma de detectar una violación a este
principio es preguntarse:

 ¿Existe una forma más sencilla de resolver
 esto que funcione igual de bien?

Si la respuesta es sí, la solución más simple
es la correcta.

Beneficios:

 - El código es más fácil de leer y entender.
 - Hay menos superficie para que existan errores.
 - Otros programadores pueden incorporarse
   al proyecto más rápidamente.


===================================================
YAGNI — You Aren't Gonna Need It
===================================================

No lo vas a necesitar.

Establece que no se debe implementar
funcionalidad basándose en suposiciones
sobre el futuro.

Es común que al programar surja el pensamiento:
"¿Y si en el futuro necesito esto?". Actuar
sobre ese pensamiento sin una necesidad real
y presente genera código que complica el
sistema sin aportar valor inmediato.

La funcionalidad debe añadirse cuando existe
un requerimiento concreto, no antes.

La forma de detectar una violación a este
principio es preguntarse:

 ¿Existe hoy una necesidad real de esto,
 o lo estoy añadiendo "por si acaso"?

Beneficios:

 - El código permanece pequeño y enfocado.
 - Se invierte el tiempo en lo que realmente
   se necesita.
 - Se evita la complejidad innecesaria.

*/