
/*Ejercicios 1)-
 a)printf("%6d,%4d", 86, 1040);
   |    86,1040| 

 b)printf("%12.5e", 30.253);
   | 3.02530e+01|

 c)printf("%.4f", 83.162);
   |83.1620|

 d)printf("%-6.2g", .0000009979);
   |1e-06 | 


 Ejercicio 2)-
  a)printf("%-8.1e");
  b)printf("%10.6e");
  c)printf("%-8.3f");
  d)printf("%6.0f");

  Ejercicio 3)
  a) "%d"  versus  " %d"
  Son equivalente, el "%d" ignorara cualquier espacio blanco hasta que encuentre el valor apropiado, en este caso un entero.
  Mientras que " %d" leera e ignorara todos los espacios hasta llegar al valor apropiedo, devolverlo al buffer, el cual 
  será leido nuevamente con el resto del format string que es %d teniendo un resultado equivalente al primer caso.

  b)"%d-%d-%d"  versus  "%d -%d -%d"
  No son equivalentes. Por ejemplo con el input: 1 -3 -2 . Con el primer format string fallaria al tratar de hacer matching
  de el caracter - con el espacio en blanco del input, mientras con el segundo format string ignoraria exitosamente esos espacios antes de los caracteres - .

  c)"%f"  versus "%f "
  No son equivalentes ya que el primero leeria el input y finalizaria inmediatamente dejando el caracter \n en el buffer. 
  Pero con el segundo caso el espacio en el format string saltearia todo espacio en blanco incluyendo el salto en linea,
  provocando que scanf no termine nunca a menos que el usuario ingrese un caracter que no sea de espacio en blanco.

  d)"%f,%f" versus "%f, %f"
  Ambas son equivalentes. En ambos casos se haria matching exitosamente con el caracter "," luego es un caso similar
  con el de "%d" versus " %d" el cual ya está demostrado que es equivalente. 

Ejercicio 4)
scanf("%d%f%d",&i, &x, &j);
input:>10.3 5 6 

Con el primer especificador %d scanf busca un entero, lee el 10, luego como un entero no puede contener un . almacena
el valor 10 en i y pone al caracter . en el buffer de vuelta. Con el segundo especificador scanf lee .3 luego el espacio 
en blanco le avisa a scanf que el valor numerico termino, almacenando 0.3 en x. Finalmente %d ignora el espacio restante
en el buffer y lee el 5, luego el espacio en blanco nuevamente le dice que el valor numerico termino, almacenando
el 5 en j. 
i=10, x=0.3, j=5  (el " 6\n" fueron dejados en el buffer para la siguiente llamada de un scanf)

Ejercicio 5)
scanf("%f%d%f", &x, &i, &y);
input:>12.3 45.6 789

Con el especificador %f scanf lee 12.3, luego el espacio en blanco le dice que finalizo el valor numerico, almacenando
12.3 en x. Luego %d busca un int, ignora el espacio en blanco y lee 45, luego como un entero no puede contener un ., lo 
devuelve al buffer y almacena 45 en i. Finalmente %f lee .6 y el espacio en blanco le dice que el valor numerico
finalizo, almacenando 0.6 en y. 
x=12.3, i=45, y=0.6  . " 789\n" queda en el buffer para ser leido por el proximo scanf. 

Ejercicio 6)
El programa addfrac.c tiene llamadas scanf de esta forma:
scanf("%d/%d", &num1, &denom1);

Si se le quiere permitir que el usuario ingrese espacios en blanco antes y despues de cada / solo basta hacer la 
siguiente modificacion: 
scanf("%d / %d", &num1, &denom1);
Ya sea si el input es con espacios : 3 / 4 , o sin espacios 3/4. Como la regla dice que el espacio en blanco 
en el format string hara matching con cualqueir numero de espacios del input incluso ninguno, en ambos inputs, / 
hara matching exitoso con el caracter / del format string. 

*/


