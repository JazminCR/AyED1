-- EJERCICIOS PROYECTO 1

-- Ejercicio 1: 

-- a) 

esCero :: Int -> Bool
esCero x = x == 0

-- b)

esPositivo :: Int -> Bool
esPositivo x = (x > 0)

-- c)

esVocal :: Char -> Bool
esVocal x = x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' 

-- Ejercicio 2:

-- a)

paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (x:xs) = x && paratodo xs

paratodo1 :: [Bool] -> Bool
paratodo1 [] = True
paratodo1 (x:xs) = x == True && paratodo1 xs == True

-- b)

sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs

-- c)

productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs

-- d)

factorial :: Int -> Int
factorial 0 = 1
factorial x = x * factorial(x - 1)

-- e)

promedio :: [Int] -> Int
promedio [] = 0
promedio (x:xs) = div (sumatoria xs) (length xs)


promedio' :: [Int] -> Int
promedio' [] = 0
promedio' (x:xs) = sumatoria xs `div` length xs

-- Ejercicio 3:

pertenece :: Int -> [Int] -> Bool
pertenece y [] = False
pertenece y (x:xs) = y == x || pertenece y xs

-- Ejercicio 4:

-- a) 

paratodo' :: [a] -> (a -> Bool) -> Bool
paratodo' [] f = True
paratodo' (x:xs) f = f x && paratodo' xs f 

-- b) 

existe' :: [a] -> (a -> Bool) -> Bool
existe' [] f = False
existe' (x:xs) f = f x || existe' xs f 

-- c) 

sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] f = 0
sumatoria' (x:xs) f = f x + sumatoria' xs f 

-- d) 

productoria' :: [a] -> (a -> Int) -> Int
productoria' [] f = 1
productoria' (x:xs) f = f x * productoria' xs f 

-- Ejercicio 5:

paratodo'' :: [Bool] -> Bool
paratodo'' xs = paratodo' xs (== True)

-- Ejercicio 6:

-- a) 

todosPares :: [Int] -> Bool
todosPares xs = paratodo' xs even

-- b) 

esMultiplo :: Int -> Int -> Bool
esMultiplo a b = mod b a == 0

hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo y xs =  existe' xs (esMultiplo y)

-- c)

sumaCuadrados :: Int -> Int
sumaCuadrados x = sumatoria' [1..x] (^2)

-- d)

factorial' :: Int -> Int
factorial' x = productoria' [1..x] (+0)

-- e)

parOImpar :: Int -> Int
parOImpar x | mod x 2 == 0 = x
            | otherwise = 1

multiplicaPares :: [Int] -> Int
multiplicaPares xs = productoria' xs parOImpar

{- 

  Ejercicio 7:

  Map: toma 2 argumentos, uno de los cuales es una función, aplica f a cada elemento de xs y devuelve una lista con la aplicación en el mismo orden.

  Filter: toma 2 argumentos, uno de los cuales es un predicado, devuelve una lista con los elementos que cumplen el predicado.  

  Map succ : le suma 1 a cada elemento de la lista xs.

  Filter esPositivo : devuelve una lista con los elementos positivos de xs.

-}

-- Ejercicio 8:

-- a) 

listaDuplicada :: [Int] -> [Int]
listaDuplicada [] = []
listaDuplicada (x:xs) = (x*2):listaDuplicada xs

-- b) 

listaDuplicadaMap :: [Int] -> [Int]
listaDuplicadaMap xs = map (*2) xs

-- Ejercicio 9:

-- a) 

listaPares :: [Int] -> [Int]
listaPares [] = []
listaPares (x:xs) | (x `mod` 2 == 0) = x:listaPares xs
                  | otherwise = listaPares xs

-- b)

listaParesFilter :: [Int] -> [Int]
listaParesFilter xs = filter even xs

-- c)

multiplicaPares' :: [Int] -> Int
multiplicaPares' xs = productoria' (listaPares xs) (*1)

-- Ejercicio 10:

-- a)

primIgualesA0 :: Eq a => a -> [a] -> [a]
primIgualesA0 y [] = []
primIgualesA0 y (x:xs) | x == y = y:primIgualesA0 y xs
                      | otherwise = primIgualesA0 y []

primIgualesA :: Eq a => a -> [a] -> [a]
primIgualesA y [] = []
primIgualesA y (x:xs) | x == y = y:primIgualesA y xs
                      | otherwise = []

-- b)

primIgualesA' :: Eq a => a -> [a] -> [a]
primIgualesA' y xs = takeWhile (==y) xs

-- Ejercicio 11:

-- a)

primIguales :: Eq a => [a] -> [a]
primIguales [] = []
primIguales [x] = [x]
primIguales (x:y:xs) | x==y = x:primIguales (y:xs)
                     | otherwise = x:primIguales []
                     
-- b)

primIguales' :: Eq a => [a] -> [a]
primIguales' [] = []
primIguales' [x] = [x]
primIguales' (x:y:xs) = primIgualesA' x (x:y:xs)
                    
-- Ejercicio 12:

cuantGen :: (b -> b -> b) -> b -> [a] -> (a -> b) -> b
cuantGen op z [] t = z
cuantGen op z (x:xs) t = op (t x) (cuantGen op z xs t)

paraTodo''' :: [a] -> (a -> Bool) -> Bool
paraTodo''' (x:xs) f = cuantGen (&&) (True) (x:xs) (f)

existe''' :: [a] -> (a -> Bool) -> Bool
existe''' (x:xs) f = cuantGen (||) (False) (x:xs) (f)

sumatoria''' :: [a] -> (a -> Int) -> Int
sumatoria''' (x:xs) f = cuantGen (+) (0) (x:xs) (f)

productoria''' :: [a] -> (a -> Int) -> Int
productoria''' (x:xs) f = cuantGen (*) (1) (x:xs) (f)

{-

  Ejercicio 13:

  a) Está bien tipado.
     Subexpresión: (x, y) , par de elementos con x tipo a e y tipo b.
  
  b) Está mal tipado porque (a, b) no es lista.
  
  c) Está bien tipado.
     Subexpresión: (x:xs) , lista con x tipo par (a,b) y xs con elementos pares pegado a [] o directamente [].
  
  d) Está bien tipado.
     Subexpresión: ((x, y):((a, b):xs)) , (x, y) par con x tipo a e y tipo b, pegado al par (a, b) pegado a la lista xs con elementos pares pegado a [] o directamente [].
  
  e) Está bien tipado.
     Subexpresión: [(0, a)] , siendo una lista de par (0, a) con 0 tipo Int y a tipo a.
  
  f) Está bien tipado.
     Subexpresión: ((x, 1) : xs) , sea (x, 1) un par con x tipo Int y 1 tipo a, pegado a la lista xs con tipo (Int, a):[].
  
  g) Está bien tipado.
     Subexpresión: a b , siendo a función de tipo (Int -> Int) y b tipo Int.
  
  h) Está bien tipado.
     Subexpresión: a b , siendo a función de tipo (Int -> Int) y b tipo Int = 3.
  
  i) Está mal tipado porque toma 3 enteros y debería tomar una función y un entero.

  Ejercicio 14:

  a) f :: (a,b) -> b , rta: f (x,y) = y
   
  b) f :: (a, b) -> c , rta: no se puede definir porque c no está definido en el lado derecho. 
   
  c) f :: (a -> b) -> a -> b , rta: f(x) = y
   
  d) f :: (a -> b) -> [a] -> [b] , rta: f(xs) = ys
   
  e) f :: (a -> b) -> (b -> c) -> a -> c , rta: f(t(x)) = z 
   
-}
