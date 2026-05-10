module Main where
printOneDigitNum n =
			if n < 10
			then print n;
			else print "Not a single digit number";
main :: IO()
main = do
		putStrLn "Enter a positive integer"
		line <- getLine
		let number = (read line :: Int)
		printOneDigitNum number
