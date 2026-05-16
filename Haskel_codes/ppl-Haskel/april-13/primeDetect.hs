getFactorList :: Int -> [Int]
getFactorList n = [x | x <- [1..n], n `mod` x == 0]

main :: IO()
main = do
	putStrLn "Enter a +ve num"
	line <- getLine
	let n = (read line :: Int)
	let xs = getFactorList n
	if length xs == 2
		then putStrLn "Is a Prime"
		else putStrLn "Is Not a Prime"
	print xs
