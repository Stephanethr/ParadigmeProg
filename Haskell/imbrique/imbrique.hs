module Main where

marche :: Integer -> Integer -> Integer

marche m n =
    if m == 0 then n+1
    else if m > 0 && n == 0 then marche (m-1) 1
    else if m > 0 && n > 0 then marche (m-1) (marche m (n-1))
    else error "y a une erreur"


main = do
print(marche 3 9)
print(marche 4 1)
print(marche 4 2)