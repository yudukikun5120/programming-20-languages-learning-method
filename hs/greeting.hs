main = do
    putStrLn "1 morning  2 afternoon"
    a <- readLn
    if a == 1
        then putStrLn "Morning!"
        else putStrLn "Hello!"
