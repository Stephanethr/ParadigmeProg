module Main where
square :: Num a => a -> a
square x = x * x

quad :: Integer -> Integer
quad x = square(square x)

smaller :: (Integer, Integer) -> Integer
smaller (x, y) = if x < y then x else y

greater :: (Integer, Integer) -> Integer
greater (x, y) = if x > y then x else y

area :: Num a => a -> a
area r = pi * square r

main = do
    print (smaller (5, 6))
    print (greater (5, 6))
    print (square 2)
    print (quad 2)
    print (area (5))
