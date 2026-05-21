getFactorList :: Int->[[Int]]
getFactorList n = return [x | x <- [1 .. n], 0 == n `mod`x]

main :: IO()
main = do
     putStrIn "Enter a positive integer n"
     line <- getLine
     let n = (read line :: Int)
     let xs = getFactorList n
     print xs 