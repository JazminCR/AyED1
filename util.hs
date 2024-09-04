Ejercicio 2: 
Una persona puede tener cuenta en varias empresas, vamos a llevar el registro de las empresas de teléfonos por persona. 

Defina el tipo NombrePersona como sinónimo de String. 

Defina el tipo recursivo Mis Empresas que tiene 2 constructores:
- AgregaEmpresa: guarda que EmpresaTelefono estoy agregando, un NombrePersona y un valor de tipo MisEmpresas a la cual se le agrega la EmpresaTelefono con el NombrePersona.
- Ninguna: sin parámetros y es equivalente a la lista vacía.

Luego programar la función
tengoEmpresa :: MisEmpresas -› EmpresaTelefono -> NombrePersona -> Bool
que dado un valor del tipo MisEmpresas, una EmpresaTelefono y un NombrePersona, 
devuelve True si la EmpresaTelefono y el NombrePersona están en MisEmpresas, False en caso contrario.

Dé un ejemplo de ejecución que incluya su propio nombre como algun valor de tipo NombrePersona.


tengoEmpresa :: MisEmpresas -> EmpresaTelefono -> NombrePersona -> Bool 
tengoEmpresa Ninguna t p = False 
tengoEmpresa (AgregaEmpresa x y z) t p = (x == t && y == p) || tengoEmpresa z t p


---------------------------------------------------------------------------------------------

el truquito siempre que te pidan no usar deriving, es hacerte una funcion auxiliar por patt match, e incluso usar case si es necesario