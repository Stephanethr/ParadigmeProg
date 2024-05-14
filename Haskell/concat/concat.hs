module Main where

    newconcat::[[a]] -> [a]
    newconcat lst = [y | x <- lst, y <- x]

    main = do
        print(newconcat [[1,2],[4,37],[5], [8]])
