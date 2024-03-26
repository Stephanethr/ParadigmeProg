module Main where

filter1 :: (a -> Bool) -> [a] -> [a]
filter1 fct liste =
  if null liste
    then []
    else if fct (head liste)
      then head liste : filter1 fct (tail liste)
      else filter1 fct (tail liste)

main = do
    print(filter1 (\x -> x > 3) [1, 2, 3, 4, 5, 6, 7, 8, 9, 10])