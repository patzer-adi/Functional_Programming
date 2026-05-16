import Data.Char (intToDigit, toUpper)

toHex :: Int -> String
toHex = map toUpper.reverse.recurse
	where recurse n
		| n < 16 = [intToDigit n]
		| otherwise = let (q,r) = n `divMod` 16
			in (intToDigit r)
			: recurse q
