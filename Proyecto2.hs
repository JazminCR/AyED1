-- EJERCICIOS PROYECTO 2

-- Ejercicio 1 y 2:

-- a) 

data Carrera = Matematica | Fisica | Computacion | Astronomia 
               deriving (Eq, Show)

-- b) 

titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matemática"
titulo Fisica = "Licenciatura en Física"
titulo Computacion = "Licenciatura en Ciencias de la Computación"
titulo Astronomia = "Licenciatura en Astronomía"

-- c)

data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si
                  deriving (Eq, Ord, Show)
-- d)

cifradoAmericano :: NotaBasica -> Char
cifradoAmericano Do = 'C'
cifradoAmericano Re = 'D'
cifradoAmericano Mi = 'E'
cifradoAmericano Fa = 'F'
cifradoAmericano Sol = 'G'
cifradoAmericano La = 'A'
cifradoAmericano Si = 'B'


-- Ejercicio 3:

-- a)

minimoElemento :: Ord a => [a] -> a
minimoElemento [x] = x
minimoElemento (x:y:xs) | (x < y) = minimoElemento (x:xs)
                        | otherwise =  minimoElemento (y:xs)
                        
-- b)

minimoElemento' :: (Bounded a, Ord a) => [a] -> a
minimoElemento' [] = maxBound
minimoElemento' [x] = x
minimoElemento' (x:y:xs) | (x < y) = minimoElemento' (x:xs)
                         | otherwise =  minimoElemento' (y:xs) 

-- c) minimoElemento [Fa, La, Sol, Re, Fa] da como resultado: Re


-- Ejercicio 4:

-- a)

type Ingreso = Int

data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar deriving Show
             
data Area = Administrativa | Ensenanza | Economica | Postgrado deriving Show

data Persona = Decane
            | Docente Cargo 
            | NoDocente Area
            | Estudiante Carrera Ingreso deriving Show
            
-- b) El tipo del constructor Docente es Cargo -> Persona

-- c) 

esDocente :: Persona -> Cargo -> Bool
esDocente (Docente Titular) Titular = True
esDocente (Docente Asociado) Asociado = True
esDocente (Docente Adjunto) Adjunto = True
esDocente (Docente Asistente) Asistente = True
esDocente (Docente Auxiliar) Auxiliar = True
esDocente _ _ = False

cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc [] c = 0
cuantos_doc (x:xs) c | esDocente x c = 1 + cuantos_doc xs c
                     | otherwise = cuantos_doc xs c
 
 -- d)
                     
cuantos_doc' :: [Persona] -> Cargo -> Int
cuantos_doc' xs c = length (filter (`esDocente` c) xs)

-- Ejercicio 5:

-- a) 

data Alteracion = Bemol | Sostenido | Natural            
data NotaMusical = Nota NotaBasica Alteracion

sonido :: NotaBasica -> Int
sonido Do = 1
sonido Re = 3
sonido Mi = 5
sonido Fa = 6
sonido Sol = 8
sonido La = 10
sonido Si = 12           

-- b) 

sonidoCromatico :: NotaMusical -> Int
sonidoCromatico (Nota x Natural) = sonido x
sonidoCromatico (Nota x Sostenido) = (sonido x) + 1
sonidoCromatico (Nota x Bemol) = (sonido x) - 1

-- c)

instance Eq NotaMusical 
  where
  --Nota nb1 a1 == Nota nb2 a2 =
    --sonidoCromatico(Nota nb1 a1) == sonidoCromatico(Nota nb2 a2)
     n1 == n2 = sonidoCromatico(n1) == sonidoCromatico(n2)
     
-- d)

instance Ord NotaMusical
  where
    n1 <= n2 = sonidoCromatico(n1) <= sonidoCromatico(n2)
    
-- Ejercicio 6:

-- a)

primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento (x:xs) = Just x

-- Ejercicio 7:

data Cola = VaciaC | Encolada Persona Cola 
            deriving Show
            
-- a)

-- 1)

atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada _ xs) = Just xs

-- 2) 

encolar :: Persona -> Cola -> Cola
encolar p VaciaC = Encolada p VaciaC
encolar p (Encolada x xs) = Encolada x (encolar p xs)

-- 3)

busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC p = Nothing
busca (Encolada (Docente _) xs) p = Just (Docente p)
busca (Encolada x xs) p = busca xs p

-- b) Cola se parece a la concatenacion de dos listas.

-- Ejercicio 8:

data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b)
                     deriving Show

type Diccionario = ListaAsoc String String
type Padron =      ListaAsoc Int    String

-- a) type GuiaTel = ListaAsoc String Int

-- b)

-- 1)

la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo _ _ a) = 1 + la_long a 

-- 2)

la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia x = x
la_concat (Nodo a b x) y = (Nodo a b (la_concat x y)) 

-- 3)

la_agregar :: ListaAsoc a b -> a -> b -> ListaAsoc a b
la_agregar Vacia x' y' = Nodo x' y' Vacia
la_agregar (Nodo x y z) x' y' = (Nodo x y (la_agregar z x' y'))

-- 4)

la_pares :: ListaAsoc a b -> [(a,b)]
la_pares Vacia = [] 
la_pares (Nodo x y z) = (x,y) : la_pares z

-- 5)

la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b
la_busca Vacia _ = Nothing
la_busca (Nodo x y z) clave | x == clave = Just y
                            | otherwise = la_busca z clave
                            
-- 6)

la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
la_borrar _ Vacia = Vacia
la_borrar clave (Nodo x y z) | x == clave = la_borrar clave z
                             | x /= clave = (Nodo x y (la_borrar clave z))

-- Ejercicio 9:

data Arbol a = Hoja | Rama (Arbol a) a (Arbol a) 

-- a)

a_long :: Arbol a -> Int
a_long Hoja = 0
a_long (Rama a _ b) = 1 + a_long a + a_long b

-- b)

a_hojas :: Arbol a -> Int
a_hojas Hoja = 1
a_hojas (Rama a _ b) = a_hojas a + a_hojas b

-- c)

a_inc :: Num a => Arbol a -> Arbol a
a_inc Hoja = Hoja
a_inc (Rama a n b) = Rama (a_inc a) (n + 1) (a_inc b)

-- d)

a_map :: (a -> b) -> Arbol a -> Arbol b
a_map _ Hoja = Hoja
a_map fun (Rama a x b) = Rama (a_map fun a) (fun x) (a_map fun b)

