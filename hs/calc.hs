ten x = x * 10

main = do
    putStrLn "sukina seisu wo nyuuryoku"
    a <- readLn
    putStrLn ("sonokazu no 10bai wa " ++ show (ten a) ++ " desu")
