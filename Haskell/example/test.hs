-- Définition de la fonction de somme
sommeListe :: [Int] -> Int
sommeListe [] = 0                         -- Cas de base : la liste est vide, donc la somme est 0
sommeListe (x:xs) = x + sommeListe xs    -- Récursivement, ajoute chaque élément de la liste à la somme des éléments restants

-- Exemple d'utilisation
main = do
    let liste = [1, 2, 3, 4, 5]
    putStrLn ("La somme de la liste est : " ++ show (sommeListe liste))
