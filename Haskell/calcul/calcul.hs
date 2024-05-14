module Main where

    listdiv::Int -> [Int]
    listdiv n = [y | y <- [1..n], mod n y == 0]

    estprem::Int -> Bool
    estprem n = listdiv n == [1, n]

    tripletpytha::Int -> [(Int,Int,Int)]
    tripletpytha n = [(a,b,c) | a <- [1..n], b <- [a..n], c <- [b..n], a^2 + b^2 == c^2]

    nbparfaits::Int -> [Int]
    nbparfaits n = [[a] | a <- [1..n], a <- sum listdiv a, a == n]

    main = do
        print(listdiv 47)     
        print(listdiv 32)
        print(listdiv 18)
        print(listdiv 23)

        print(estprem 47)
        print(estprem 32)
        print(estprem 18)
        print(estprem 23)

        print(tripletpytha 10)

        print(nbparfaits 10000)