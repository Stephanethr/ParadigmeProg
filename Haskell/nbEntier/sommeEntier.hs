module Main where

    sommeNEntier :: Integer -> Integer

    sommeNEntier n = if n == 0 then 0 else n + sommeNEntier (n-1)

    main = do
        print(sommeNEntier 10008)