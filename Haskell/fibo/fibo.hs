module Main where

fibo :: Integer -> Integer

fibo n = if n == 0 then 0 else if n == 1 then 1 else fibo (n-1) + fibo (n-2)


multipliNEntier :: Integer -> Integer

multipliNEntier n = if n == 1 then 1 else n * multipliNEntier (n-1)

main = do

    print(fibo 1)
    print(fibo 2)
    print(fibo 3)
    print(fibo 4)
    print(fibo 5)
    print(fibo 6)
    print(fibo 7)
    print(fibo 8)
    print(fibo 9)
    print(fibo 10)
    print(fibo 11)
    print(fibo 12)
    print(fibo 13)
    print(fibo 14)
    print(fibo 15)
    print(fibo 16)
    print(fibo 17)
    print(fibo 18)
    print(fibo 19)
    print(fibo 20)

    print("_________________________________________________________")

    print(multipliNEntier 10)
